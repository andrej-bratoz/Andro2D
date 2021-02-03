// Andro2DApp.cpp : Defines the entry point for the application.
//

#include "Andro2DApp.h"
#include "../Andro2D/inc/A2D.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
  /*  A2D::Internal::List<int> list;
    for(int i = 1; i < 128; i++)
    {
        list.Add(i);
    }
    int result;
    auto index = list.IndexOf(45);
    list.Get(45, &result);
	
    list.DeleteAt(45);
    list.DebugPrint();
    list.Get(45, &result);
    list.DeleteAt(45);
    list.DebugPrint();
    list.Get(45, &result);
    list.Get(45, &result);
    list.DeleteAt(45);
    list.DebugPrint();
    list.Get(45, &result);
    list.Get(45, &result);
    list.DeleteAt(45);
    list.DebugPrint();
    list.Get(45, &result);
    list.Get(45, &result);
    list.DeleteAt(45);
    list.DebugPrint();
    list.Get(45, &result);*/
	
    A2D::Window window(1024, 768, L"A2DWindow");
    window.Show();
    A2D::A2DApp::Run(window);
    return 0;
}
