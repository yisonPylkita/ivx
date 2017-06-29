object IvxForm: TIvxForm
  Left = 0
  Top = 0
  Caption = 'ivx'
  ClientHeight = 505
  ClientWidth = 919
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object MainImage: TImage
    Left = 299
    Top = 29
    Width = 620
    Height = 476
    Align = alClient
    Proportional = True
    Stretch = True
    Transparent = True
    ExplicitLeft = 320
    ExplicitTop = 49
    ExplicitWidth = 272
    ExplicitHeight = 373
  end
  object ToolBar: TToolBar
    Left = 0
    Top = 0
    Width = 919
    Height = 29
    Caption = 'ToolBar'
    TabOrder = 0
    ExplicitWidth = 650
    object ToolButton1: TToolButton
      Left = 0
      Top = 0
      Caption = 'ToolButton1'
      ImageIndex = 0
    end
    object ToolButton2: TToolButton
      Left = 23
      Top = 0
      Caption = 'ToolButton2'
      ImageIndex = 1
    end
    object ToolButton3: TToolButton
      Left = 46
      Top = 0
      Caption = 'ToolButton3'
      ImageIndex = 2
    end
    object ToolButton4: TToolButton
      Left = 69
      Top = 0
      Caption = 'ToolButton4'
      ImageIndex = 3
    end
    object ToolButton5: TToolButton
      Left = 92
      Top = 0
      Caption = 'ToolButton5'
      ImageIndex = 4
    end
    object ToolButton6: TToolButton
      Left = 115
      Top = 0
      Width = 8
      Caption = 'ToolButton6'
      ImageIndex = 5
      Style = tbsSeparator
    end
    object FullscreenButton: TToolButton
      Left = 123
      Top = 0
      ImageIndex = 5
      OnClick = FullscreenButtonClick
    end
    object ToolButton8: TToolButton
      Left = 146
      Top = 0
      Width = 8
      Caption = 'ToolButton8'
      ImageIndex = 6
      Style = tbsSeparator
    end
    object ToolButton9: TToolButton
      Left = 154
      Top = 0
      Caption = 'ToolButton9'
      ImageIndex = 6
    end
    object ToolButton10: TToolButton
      Left = 177
      Top = 0
      Caption = 'ToolButton10'
      ImageIndex = 7
    end
    object ToolButton11: TToolButton
      Left = 200
      Top = 0
      Caption = 'ToolButton11'
      ImageIndex = 8
    end
    object ToolButton12: TToolButton
      Left = 223
      Top = 0
      Width = 8
      Caption = 'ToolButton12'
      ImageIndex = 9
      Style = tbsSeparator
    end
    object ToolButton13: TToolButton
      Left = 231
      Top = 0
      Caption = 'ToolButton13'
      ImageIndex = 9
    end
    object ToolButton14: TToolButton
      Left = 254
      Top = 0
      Width = 8
      Caption = 'ToolButton14'
      ImageIndex = 10
      Style = tbsSeparator
    end
    object ToolButton15: TToolButton
      Left = 262
      Top = 0
      Caption = 'ToolButton15'
      ImageIndex = 10
    end
    object ToolButton16: TToolButton
      Left = 285
      Top = 0
      Caption = 'ToolButton16'
      ImageIndex = 11
    end
  end
  object Controls: TPanel
    Left = 0
    Top = 29
    Width = 299
    Height = 476
    Align = alLeft
    Caption = 'Panel1'
    TabOrder = 1
    ExplicitHeight = 434
    object DriveSelectBox: TDriveComboBox
      Left = 0
      Top = 0
      Width = 145
      Height = 19
      DirList = FoldersList
      TabOrder = 0
    end
    object FilesFilterBox: TFilterComboBox
      Left = 151
      Top = 6
      Width = 145
      Height = 21
      FileList = FilesList
      Filter = 'JPEG files|*.jpg'
      TabOrder = 1
    end
    object FilesList: TFileListBox
      Left = 148
      Top = 33
      Width = 145
      Height = 373
      ItemHeight = 13
      Mask = '*.jpg'
      TabOrder = 2
      OnClick = FileClick
    end
    object FoldersList: TDirectoryListBox
      Left = 0
      Top = 25
      Width = 145
      Height = 373
      FileList = FilesList
      TabOrder = 3
    end
  end
  object MainMenu: TMainMenu
    Left = 452
    Top = 65528
    object File1: TMenuItem
      Caption = '&File'
      object New1: TMenuItem
        Caption = '&New'
      end
      object Open1: TMenuItem
        Caption = '&Open...'
      end
      object Save1: TMenuItem
        Caption = '&Save'
      end
      object SaveAs1: TMenuItem
        Caption = 'Save &As...'
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Print1: TMenuItem
        Caption = '&Print...'
      end
      object PrintSetup1: TMenuItem
        Caption = 'P&rint Setup...'
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = 'E&xit'
        OnClick = Exit1Click
      end
    end
  end
end
