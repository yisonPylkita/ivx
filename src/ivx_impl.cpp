//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ivx_impl.h"
#include "ivx_fullscreen.h"
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
	SetPicture(openned_image);
}

void TIvxForm::ShowInFullscreen(const TJPEGImage *image)
{
	TIvxFullscreen *fullscreen_form = new TIvxFullscreen(this);
	fullscreen_form->MainImage->Picture->Assign(image);
    fullscreen_form->ShowModal();
}

void __fastcall TIvxForm::FullscreenButtonClick(TObject *Sender)
{
	ShowInFullscreen(openned_image);
}

void TIvxForm::SetPicture(const TJPEGImage *image)
{
	MainImage->Picture->Bitmap->Assign(image);
}

void TIvxForm::SetPicture(const TBitmap *image)
{
    MainImage->Picture->Bitmap->Assign(image);
}

