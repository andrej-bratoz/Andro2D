// Andro2DApp.cpp : Defines the entry point for the application.
//

#include "Andro2DApp.h"
#include "../Andro2D/inc/A2D.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    A2D::Window window(1024, 768, L"A2DWindow");
    window.Show();
    auto button = A2D::Controls::Button(window.GetHandle());
    button.SetDimension(100, 30);
    button.SetPosition(30, 40);
	window.AddControl(&button);

    auto button2 = A2D::Controls::Button(window.GetHandle());
    button2.SetDimension(100, 30);
    button2.SetPosition(140, 40);
    window.AddControl(&button2);

    button2.SetText(L"Cancel");
	
    A2D::A2DApp::Run(window);
    return 0;
}
