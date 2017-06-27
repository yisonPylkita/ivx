//---------------------------------------------------------------------------

#ifndef ivx_implH
#define ivx_implH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
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
private:	// User declarations
public:		// User declarations
	__fastcall TIvxForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIvxForm *IvxForm;
//---------------------------------------------------------------------------
#endif
