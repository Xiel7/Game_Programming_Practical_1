#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>

class GameWindows
{
private:
	//	Window handle
	HWND g_hWnd;
	HINSTANCE hInstance;
	//	Window's structure
	WNDCLASS wndClass;
public:
	GameWindows();
	void createWindow();
	void clearWindow();
	bool gameLoop();
};

