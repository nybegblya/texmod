/*
This file is part of OpenTexMod.


OpenTexMod is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenTexMod is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with FooOpenTexMod.  If not, see <http://www.gnu.org/licenses/>.
*/



#ifndef OTM_GUI_H_
#define OTM_GUI_H_


#include "OTM_Main.h"

class OTM_Frame : public wxFrame
{
public:
  OTM_Frame(const wxString& title, const wxPoint& pos, const wxSize& size);
  ~OTM_Frame(void);


  void OnAddGame( wxCommandEvent &event);
  void OnDeleteGame( wxCommandEvent &event);

  void OnClose(wxCloseEvent& WXUNUSED(event));


  void OnButtonOpen(wxCommandEvent& WXUNUSED(event));
  void OnButtonPath(wxCommandEvent& WXUNUSED(event));
  void OnButtonUpdate(wxCommandEvent& WXUNUSED(event));


  void OnMenuPref(wxCommandEvent& WXUNUSED(event));
  void OnMenuQuit(wxCommandEvent& WXUNUSED(event));
  void OnMenuHelp(wxCommandEvent& WXUNUSED(event));
  void OnMenuAbout(wxCommandEvent& WXUNUSED(event));

private:
  int KillServer(void);

  OTM_Server *Server;

  OTM_Language Language;
  wxNotebook *Notebook;


  wxButton *OpenButton;
  wxButton *DirectoryButton;
  wxButton *UpdateButton;


  wxMenuBar *MenuBar;
  wxMenu *MenuMain;
  wxMenu *MenuHelp;

  wxBoxSizer *MainSizer;
  wxBoxSizer *ButtonSizer;

  wxString TexturePath;


  int NumberOfGames;
  int MaxNumberOfGames;
  OTM_GameInfo **Games;
  OTM_Client **Clients;

  DECLARE_EVENT_TABLE();
};

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};




#endif