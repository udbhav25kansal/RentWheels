#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/sizer.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame *mainFrame = new MainFrame("Rent Wheels : Welcome Page");
	mainFrame->SetClientSize(800, 400);
	mainFrame->EnableMaximizeButton(false);
	mainFrame->Center();
	mainFrame->Show();

	return true;
}
