#include "App.h"
#include "wx/wx.h"
#include "Window.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	mainWindow = new Window();
	mainWindow->Show();
	
    return true;
}
