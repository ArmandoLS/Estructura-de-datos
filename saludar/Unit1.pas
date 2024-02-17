unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Label1: TLabel;
    btnSaludar: TButton;
    btnCerrar: TButton;
    procedure btnSaludarClick(Sender: TObject);
    procedure btnCerrarClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.btnSaludarClick(Sender: TObject);
begin

edit1.text:= 'CURSO DE DELPHI PARA WINDOWA XD';
Label1.caption:= 'CURSO DE DELPHI PARA WINDOWS';

end;

procedure TForm1.btnCerrarClick(Sender: TObject);
begin

  close;

end;

end.
