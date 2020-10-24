#include <wx/wx.h>
#include <wx/aboutdlg.h>

namespace Examples {
  class Frame : public wxFrame {
  public:
    Frame() : wxFrame(nullptr, wxID_ANY, "AboutBoxSimple example", wxDefaultPosition, {300, 300}) {
      button->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) {
        wxAboutDialogInfo aboutInfo;
        aboutInfo.SetName(wxTheApp->GetAppName());
        aboutInfo.SetVersion("1.0", "1.0.0");
        aboutInfo.SetDescription("About dialog description.");
        aboutInfo.SetCopyright("Copyright (c) 2019 Gammasoft.\nAll rights reserved.");
        wxAboutBox(aboutInfo);
      });
    }
    
  private:
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ABOUT, wxEmptyString, {10, 10});
  };

  class Application : public wxApp {
    bool OnInit() override {
      (new Frame())->Show();
      return true;
    }
  };
}

wxIMPLEMENT_APP(Examples::Application);