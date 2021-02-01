#include "../../inc/controls/A2D_ControlBase.h"

Control::Control(HWND parent) : m_posX(0),
								m_posY(0),
								m_width(10),
								m_height(10),
								m_parentHWnd(nullptr),
								m_hWnd(nullptr)
{
	this->m_parentHWnd = parent;
}

int Control::GetX() const
{
	return this->m_posX;
}

int Control::GetY() const
{
	return this->m_posY;
}

int Control::GetWidth() const
{
	return this->m_width;
}

int Control::GetHeight() const
{
	return this->m_height;
}

HWND Control::GetParent() const
{
	return this->m_parentHWnd;
}

HWND Control::GetHandle() const
{
	return this->m_hWnd;
}

void Control::SetPosition(const int x, const int y)
{
	this->m_posX = x;
	this->m_posY = y;
}

void Control::SetDimension(int width, int height)
{
	this->m_width = width;
	this->m_height = height;
}

void Control::Destroy()
{
	if (this->m_hWnd != nullptr) 
	{
		DestroyWindow(this->m_hWnd);
	}
}

Control::operator HWND() const
{
	return this->m_hWnd;
}

