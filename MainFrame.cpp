#include "MainFrame.h"
#include <wx/wx.h>


/*enum IDs {
	BUTTON_ID = 2,
	SLIDER_ID = 3,
	TEXT_ID = 4
};*/

/*wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_BUTTON(BUTTON_ID,MainFrame::OnButtonClicked)
	EVT_SLIDER(SLIDER_ID,MainFrame::OnSliderChanged)
	EVT_TEXT(TEXT_ID,MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()*/

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel,wxID_ANY,:"Button",wxPoint(300,250),wxSize(200,100));

	wxStatusBar* statusBar = CreateStatusBar();

	statusBar->SetDoubleBuffered(true);
	panel->Bind(wxEVT_MOTION,&MainFrame::OnMouseEvent,this);
	button->Bind(wxEVT_MOTION,&MainFrame::OnMouseEvent,this);

		
	/*wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));

	/*wxSlider* slider = new wxSlider(panel, wxID_ANY, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
	wxTextCtrl* text = new wxTextCtrl(panel,wxID_ANY,"",wxPoint(300,375),wxSize(200,-1));*/
	
	/*this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);
	this->Bind(wxEVT_BUTTON,&MainFrame::OnAnyButtonClicked,this);
	button1->Bind(wxEVT_BUTTON,&MainFrame::OnButton1Clicked,this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

	/*slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
	text->Bind(wxEVT_TEXT,&MainFrame::OnTextChanged,this);

	button->Unbind(wxEVT_BUTTON,&MainFrame::OnButtonClicked,this);*/

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

void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
	wxPoint mousePos = wxGetMousePosition();
	mousePos = this->ScreenToClient(mousePos);
	wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
	wxLogStatus(message);
}
/*void MainFrame::OnClose(wxCloseEvent& evt) {
	wxLogMessage("Frame Message");
	evt.Skip();
}

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
	wxLogMessage("Button Clicked");
}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
	wxLogStatus("Button 1 Clicked");
	evt.Skip();
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
	wxLogStatus("Button 2 Clicked");
}
/*void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider Value %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnTextChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text %s", evt.GetString());
	wxLogStatus(str);
}*/