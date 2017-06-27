//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ivx_impl.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIvxForm *IvxForm;
//---------------------------------------------------------------------------
__fastcall TIvxForm::TIvxForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TIvxForm::Exit1Click(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

