object Form1: TForm1
  Left = 192
  Top = 116
  Width = 928
  Height = 481
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 72
    Top = 72
    Width = 32
    Height = 13
    Caption = 'Label1'
  end
  object Edit1: TEdit
    Left = 72
    Top = 48
    Width = 209
    Height = 21
    CharCase = ecUpperCase
    TabOrder = 0
    Text = 'EDIT1'
  end
  object btnSaludar: TButton
    Left = 72
    Top = 96
    Width = 49
    Height = 25
    Caption = 'saludar'
    Default = True
    TabOrder = 1
    OnClick = btnSaludarClick
  end
  object btnCerrar: TButton
    Left = 128
    Top = 96
    Width = 49
    Height = 25
    Cancel = True
    Caption = '&cerrar'
    TabOrder = 2
    OnClick = btnCerrarClick
  end
end
