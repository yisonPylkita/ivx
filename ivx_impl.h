//---------------------------------------------------------------------------

#ifndef ivx_implH
#define ivx_implH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.FileCtrl.hpp>
//---------------------------------------------------------------------------
class TIvxForm : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu;
	TMenuItem *File1;
	TMenuItem *New1;
	TMenuItem *Open1;
	TMenuItem *Save1;
	TMenuItem *SaveAs1;
	TMenuItem *Print1;
	TMenuItem *PrintSetup1;
	TMenuItem *Exit1;
	TMenuItem *N1;
	TMenuItem *N2;
	TToolBar *ToolBar;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolButton *ToolButton7;
	TToolButton *ToolButton8;
	TToolButton *ToolButton9;
	TToolButton *ToolButton10;
	TToolButton *ToolButton11;
	TToolButton *ToolButton12;
	TToolButton *ToolButton13;
	TToolButton *ToolButton14;
	TToolButton *ToolButton15;
	TToolButton *ToolButton16;
	TDriveComboBox *DriveSelectBox;
	TDirectoryListBox *FoldersList;
	TFilterComboBox *FilesFilterBox;
	TFileListBox *FilesList;
	void __fastcall Exit1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TIvxForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIvxForm *IvxForm;
//---------------------------------------------------------------------------
#endif
