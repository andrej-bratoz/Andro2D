#pragma once

#include "../A2D_Core.h"

class ANDRO2D_API Control
{
public:
	Control(HWND parent);
	[[nodiscard]] int GetX() const;
	[[nodiscard]] int GetY() const;
	[[nodiscard]] int GetWidth() const;
	[[nodiscard]] int GetHeight() const;

	[[nodiscard]] HWND GetParent() const;
	[[nodiscard]] HWND GetHandle() const;
	
	void SetPosition(int x, int y);
	void SetDimension(int width, int height);
	virtual void Create() = 0;
	virtual void Destroy();
	operator HWND() const;
	//
	virtual ~Control() = default;
protected:
	HWND m_parentHWnd;
	HWND m_hWnd;
private:

	int m_posX;
	int m_posY;
	//
	int m_width;
	int m_height;
	//	

};
