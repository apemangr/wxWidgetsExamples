#include "button.h"

Button::Button(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(500,500))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(20,20));

    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Button::OnQuit));
    Centre();
}

void Button::OnQuit(wxCommandEvent & WXUNUSED(event))
{
    Close(true);
}
