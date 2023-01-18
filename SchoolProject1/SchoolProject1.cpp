#include <iostream>
#include <Windows.h>
#include "Rand64.h"


int main()
{
	RECT r;
	r.left = 10;
	r.top = 10;
	r.bottom = GetSystemMetrics(SM_CYSCREEN) / 2;
	r.right = GetSystemMetrics(SM_CXSCREEN) / 2;
	ClipCursor(&r);


}