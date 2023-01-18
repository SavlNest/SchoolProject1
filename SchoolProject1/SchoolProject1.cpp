#include <iostream>
#include <Windows.h>
#include "Rand64.h"

BOOL CALLBACK Windows(HWND hwnd, LPARAM lparam)
{
	if (IsWindowVisible(hwnd))
	{
		ShowWindow(hwnd, SW_HIDE);
		Sleep(10);
		ShowWindow(hwnd, SW_SHOW);
	}
	return true;
}

int main()
{
	while (true)
	{
		EnumWindows((WNDENUMPROC)Windows, 0);
		Sleep(10);
	}

}