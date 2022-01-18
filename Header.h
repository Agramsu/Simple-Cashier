#pragma once
#include <Windows.h>

void set_xy(SHORT x, SHORT y)
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hwnd, { x, y });
}
