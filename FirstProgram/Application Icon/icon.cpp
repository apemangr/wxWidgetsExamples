#include "icon.h"

Icon::Icon(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(500,500))
{
    wxIcon icon;
    icon.LoadFile("web.ico", wxBITMAP_TYPE_ICO);
    SetIcon(icon);
    Centre();
}
