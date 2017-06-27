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
	openned_image = new TJPEGImage();
}
//---------------------------------------------------------------------------
void __fastcall TIvxForm::Exit1Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TIvxForm::FileClick(TObject *Sender)
{
	String file_path = FilesList->FileName;
	if (!Sysutils::FileExists(file_path))
		return;
	openned_image->LoadFromFile(file_path);
	MainImage->Canvas->Draw(0, 0, openned_image);
}

