#include "main.h"
#include "button.h"
#include <wx/sysopt.h>

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    wxSystemOptions::SetOption("wxRendererNative", 1);
    Button *btnapp = new Button(wxT("Button"));
    btnapp->Show(true);

    return true;
}
