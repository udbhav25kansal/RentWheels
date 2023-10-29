#include "LoginPage.h"
#include <wx/wx.h>

LoginPage::LoginPage(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxButton* loginBtn = new wxButton(panel, wxID_ANY, "Login", wxPoint(200, 250), wxSize(150, 50));
	loginBtn->SetBackgroundColour(wxColor("#BF7540"));
	wxFont myFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	loginBtn->SetFont(wxFont(myFont));
}
