#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);


bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("Rent Wheels");
	mainFrame->Show();
	return true;
}