#pragma once
#include "wx/wx.h"

class Window;

class App : public wxApp
{
	Window* mainWindow = nullptr;

public :
	virtual bool OnInit();
};

