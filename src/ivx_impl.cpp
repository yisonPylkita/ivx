//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>

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

TRect TIvxForm::AdjustSize(TJPEGImage *image, int width, int height)
{
	assert(image);
	TRect rect;
	rect.Left = 0;
	rect.Top = 0;
	if (image->Width > image->Height) {
		rect.Right = width;
		rect.Bottom = ((width * image->Height) / image->Width);
	} else {
		rect.Right = ((height * image->Width) / image->Height);
		rect.Bottom = height;
	}

	return rect;
}

void __fastcall TIvxForm::FullscreenButtonClick(TObject *Sender)
{
	ShowInFullscreen(openned_image);
}

void TIvxForm::SetPicture(TJPEGImage *image)
{
	// Clear MainImage
	TBitmap *background = new TBitmap();
	background->SetSize(MainImage->ClientRect.Right, MainImage->ClientRect.Bottom);
	background->Canvas->Brush->Color = 0x0;
	background->Canvas->FillRect(MainImage->ClientRect);
	MainImage->Canvas->Draw(0, 0, background);

   //	MainImage->ClientRect.SetHeight(image->Height);
   //	MainImage->ClientRect.SetWidth(image->Width);
//  MainImage->Canvas->Assign(background);

	// Display image
//	MainImage->Canvas->StretchDraw(MainImage->ClientRect, image);
	TRect image_size = AdjustSize(image, MainImage->Width, MainImage->Height);
	MainImage->Canvas->StretchDraw(image_size, image);
//	MainImage->Canvas->Draw(0, 0, image);
}

void __fastcall TIvxForm::FormShow(TObject *Sender)
{
//	FoldersList->Directory = "C:\\Projects\\test_images";
	FoldersList->Directory = GetCurrentDir() + "..\\..\\..\\..\\test_images";

}
//---------------------------------------------------------------------------

