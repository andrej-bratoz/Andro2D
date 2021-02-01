#pragma once
#include <memory>
#include <vector>

#include "A2D_Core.h"
#include "controls/A2D_Button.h"

#include <gdiplus.h>

namespace A2D
{
	
	class ANDRO2D_API Window : public IHandleObject
	{
	public:
		Window(int width, int height, A2D_CONST_STRING title);

		HWND GetHandle() const override;
		void Show();
		LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

		int GetHeight() const;
		int GetWidth() const;
		void SetDimension(int width, int height);

		int GetPositionX() const;
		int GetPositionY() const;
		
		static std::shared_ptr<Window> FindWindow(HWND hWnd);
		
		//
		virtual void OnPaint(HDC hDC, const PAINTSTRUCT& ps);
		virtual void OnResize();
		virtual void OnPositionChanged();
		virtual ~Window() { }
	protected:
		void InitializeInternal();
		
	private:
		int m_height;
		int m_width;
		int m_posX;
		int m_posY;
		
		A2D_CONST_STRING m_title;
		HINSTANCE m_hInstance;
		HWND m_Handle;
		bool m_initialized;
	};

	static std::vector<std::shared_ptr<Window>> RegisteredWindows;

}
