#pragma once

#include <ctime>
#include <process.h>
#include <Windows.h>
#include <string>
#include <strsafe.h>
#include <gdiplus.h>


#ifdef  ANDRO2D_LIB 
/*Enabled as "export" while compiling the dll project*/
#define ANDRO2D_API __declspec(dllexport)  
#else
/*Enabled as "import" in the Client side for using already created dll file*/
#define ANDRO2D_API __declspec(dllimport)  
#endif


namespace A2D
{
	class ANDRO2D_API IHandleObject
	{
	public:
		virtual ~IHandleObject() = default;
		virtual HWND GetHandle() const = 0;
	};

	typedef wchar_t* A2D_STRING;
	typedef const wchar_t* A2D_CONST_STRING;

	namespace Internal
	{
		int GdiStartup();
		void GdiShutdown();
	}
}
