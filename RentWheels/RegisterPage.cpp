#include "RegisterPage.h"
#include "MainFrame.h"
#include <wx/wx.h>

enum ID {
	REGISTER_BTN = 1,
	BACK_BTN = 2
};

wxBEGIN_EVENT_TABLE(RegisterPage, wxFrame)
	EVT_BUTTON(BACK_BTN, RegisterPage::BackButtonClick)
wxEND_EVENT_TABLE()

RegisterPage::RegisterPage(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);
	wxFont displayFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	wxFont fieldFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	wxFont buttonFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

	wxStaticText* registerPageTextDisplay = new wxStaticText(panel, wxID_ANY, "Register", wxPoint(50, 20));
	registerPageTextDisplay->SetFont(displayFont);

	wxButton* backBtn = new wxButton(panel, BACK_BTN, "<", wxPoint(10, 20), wxSize(30, 30));
	backBtn->SetBackgroundColour(wxColor("#e6e8e5"));

	wxStaticText* UsernameTextDisplay = new wxStaticText(panel, wxID_ANY, "Username", wxPoint(200, 70));
	wxTextCtrl* username = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(200, 100), wxSize(400, 30));
	UsernameTextDisplay->SetFont(fieldFont);
	username->SetFont(fieldFont);

	wxStaticText* PasswordTextDisplay = new wxStaticText(panel, wxID_ANY, "Password", wxPoint(200, 140));
	wxTextCtrl* password = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(200, 170), wxSize(400, 30), wxTE_PASSWORD);
	PasswordTextDisplay->SetFont(fieldFont);
	password->SetFont(fieldFont);

	wxStaticText* ConfirmPasswordTextDisplay = new wxStaticText(panel, wxID_ANY, "Confirm Password", wxPoint(200, 210));
	wxTextCtrl* confirmPassword = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(200, 240), wxSize(400, 30), wxTE_PASSWORD);
	ConfirmPasswordTextDisplay->SetFont(fieldFont);
	confirmPassword->SetFont(fieldFont);

	wxButton* registerBtn = new wxButton(panel, REGISTER_BTN, "Register", wxPoint(250, 300), wxSize(300, 50));
	registerBtn->SetBackgroundColour(wxColor("#4A7A76"));
	registerBtn->SetFont(wxFont(buttonFont));
}

void RegisterPage::BackButtonClick(wxCommandEvent& event) {
	MainFrame* mainFrame = new MainFrame("Rent Wheels : Welcome");
	mainFrame->SetClientSize(800, 400);
	mainFrame->EnableMaximizeButton(false);
	mainFrame->Center();
	mainFrame->Show();

	this->Close();
}