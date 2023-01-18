#include <iostream>
#include <Windows.h>
#include "Rand64.h"


BOOL CALLBACK Windows(HWND hwnd, LPARAM lparam)
{
	if (IsWindowVisible(hwnd)) {
		RECT r;
		GetWindowRect(hwnd, &r);
		Random64 random(GetTickCount64());
		r.left += random(-2, 2);
		r.right += random(-2, 2);
		r.top += random(-2, 2);
		r.bottom += random(-2, 2);
		MoveWindow(hwnd, r.left, r.top, r.right - r.left, r.bottom - r.top , true);
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