#include <wx/wx.h>

class myApp: public wxApp{
    public:
        bool OnInit() override;
};

class MyFrame : public wxFrame
{
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

wxIMPLEMENT_APP(myApp);

