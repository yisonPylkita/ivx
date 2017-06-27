//---------------------------------------------------------------------------

#ifndef ivx_fullscreenH
#define ivx_fullscreenH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TIvxFullscreen : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TIvxFullscreen(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIvxFullscreen *IvxFullscreen;
//---------------------------------------------------------------------------
#endif
