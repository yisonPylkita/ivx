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
#include <jpeg.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtCtrls.hpp>
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
	TToolButton *FullscreenButton;
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
	TImage *MainImage;
	TPanel *Controls;
	TStatusBar *StatusBar;
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall FileClick(TObject *Sender);
	void __fastcall FullscreenButtonClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall MainImgMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);

private:	// User declarations
	void FillWithColor(TImage *image, TColor color);
	void SetPicture(TJPEGImage *image);
	TRect AdjustSize(TJPEGImage *image, int width, int height);
	void ShowInFullscreen(const TJPEGImage *image);
	TJPEGImage *openned_image;
public:		// User declarations
	__fastcall TIvxForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIvxForm *IvxForm;
//---------------------------------------------------------------------------
#endif
