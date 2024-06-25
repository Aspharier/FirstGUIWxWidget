#include "MainFrame.h"
#include <wx/wx.h>


enum IDs {
	BUTTON_ID = 2,
	SLIDER_ID = 3,
	TEXT_ID = 4
};

wxBEGIN_EVENT_TABLE(MainFrame,wxFrame)
	EVT_BUTTON(BUTTON_ID,MainFrame::OnButtonClicked)
	EVT_SLIDER(SLIDER_ID,MainFrame::OnSliderChanged)
	EVT_TEXT(TEXT_ID,MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel,BUTTON_ID,"Button",wxPoint(300,275),wxSize(200,50));
	wxSlider* slider = new wxSlider(panel,SLIDER_ID,0,0,100,wxPoint(300,200),wxSize(200,-1));
	wxTextCtrl* text = new wxTextCtrl(panel,TEXT_ID,"",wxPoint(300,375),wxSize(200,-1));
	CreateStatusBar();

	/*wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT);
	wxCheckBox* checkBox = new wxCheckBox(panel,wxID_ANY,"CheckBox",wxPoint(550,50),wxDefaultSize,wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "staticText - NOT editable", wxPoint(120, 150),wxSize(400,-1),wxALIGN_CENTRE_HORIZONTAL); 
	staticText->SetBackgroundColour(*wxLIGHT_GREY);

	wxTextCtrl* textCtrl = new wxTextCtrl(panel,wxID_ANY,"TextCtrl - editable",wxPoint(500,145),wxSize(200,-1),wxTE_PASSWORD);

	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1),wxSL_VALUE_LABEL);
	wxGauge* gauge = new wxGauge(panel,wxID_ANY,100,wxPoint(590,205),wxSize(-1,125),wxGA_VERTICAL);
	gauge->SetValue(50);

	wxArrayString choices;
	choices.Add("Item A");
	choices.Add("Item B");
	choices.Add("Item C");

	wxChoice* choice = new wxChoice(panel,wxID_ANY,wxPoint(150,375),wxSize(100,-1),choices,wxCB_SORT);
	choice->Select(0);

	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel,wxID_ANY,"",wxPoint(550,375),wxSize(100,-1),wxSP_WRAP);

	wxListBox* listBox = new wxListBox(panel,wxID_ANY,wxPoint(150,475),wxSize(100,-1),choices,wxLB_MULTIPLE);

	wxRadioBox* radiBox = new wxRadioBox(panel,wxID_ANY,"RadioBox",wxPoint(555,450),wxDefaultSize,choices,3,wxRA_SPECIFY_ROWS);*/
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("Button Clicked");
}

void MainFrame::OnSliderChanged(wxCommandEvent& evt){
	wxString str = wxString::Format("Slider Value %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnTextChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text %s", evt.GetString());
	wxLogStatus(str);
}