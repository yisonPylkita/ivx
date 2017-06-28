//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ivx_fullscreen.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIvxFullscreen *IvxFullscreen;
//---------------------------------------------------------------------------
__fastcall TIvxFullscreen::TIvxFullscreen(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TIvxFullscreen::KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == WideChar(27))
		Close();
}
//---------------------------------------------------------------------------
