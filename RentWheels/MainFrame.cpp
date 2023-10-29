#include "MainFrame.h"
#include "LoginPage.h"
#include "RegisterPage.h"
#include <wx/wx.h>

enum ID {
	LOGIN_PAGE_BTN = 1,
	REGISTER_PAGE_BTN = 2
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_BUTTON(LOGIN_PAGE_BTN, MainFrame::LoginButtonClick)
	EVT_BUTTON(REGISTER_PAGE_BTN, MainFrame::RegisterButtonClick)
wxEND_EVENT_TABLE()


MainFrame::MainFrame(const wxString& title): wxFrame(nullptr,wxID_ANY,title) {
	wxPanel* panel = new wxPanel(this);
	wxFont myFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

	wxButton* loginBtn = new wxButton(panel, LOGIN_PAGE_BTN, "Login", wxPoint(200, 250), wxSize(150, 50));
	loginBtn->SetBackgroundColour(wxColor("#99667B"));
	loginBtn->SetFont(wxFont(myFont));

	wxButton* registerBtn = new wxButton(panel, REGISTER_PAGE_BTN, "Register", wxPoint(400, 250), wxSize(150, 50));
	registerBtn->SetBackgroundColour(wxColor("#669984"));
	registerBtn->SetFont(wxFont(myFont));

	wxPNGHandler* handler = new wxPNGHandler;
	wxImage::AddHandler(handler);
	wxStaticBitmap* logo = new wxStaticBitmap(panel, wxID_ANY, wxBitmap("logo.png", wxBITMAP_TYPE_PNG), wxPoint(270, 50), wxSize(200, 200));
}

void MainFrame::LoginButtonClick(wxCommandEvent& event) {
	LoginPage* loginPage = new LoginPage("Rent Wheels : Login");
	loginPage->SetClientSize(800, 400);
	loginPage->EnableMaximizeButton(false);
	loginPage->Center();
	loginPage->Show();
	
	this->Destroy();
}

void MainFrame::RegisterButtonClick(wxCommandEvent& event) {
	RegisterPage* registerPage = new RegisterPage("Rent Wheels : Register");
	registerPage->SetClientSize(800, 400);
	registerPage->EnableMaximizeButton(false);
	registerPage->Center();
	registerPage->Show();

	this->Destroy();
}