#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void LoginButtonClick(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};
