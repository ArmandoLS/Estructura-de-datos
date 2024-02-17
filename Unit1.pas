unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    VAR1: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    Button1: TButton;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Label4: TLabel;
    Edit5: TEdit;
    Edit6: TEdit;
    Button2: TButton;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  var1: integer;
  edit1: integer;
  edit2: integer;
  edit3: integer;
  edit4: integer;
  edit5: integer;
  edit6: integer;

implementation

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
begin

if var1.text:= '1' then
begin
    edit2: = visible.true;
    edit3: = visible.false;
    edit4: = visible.false;
    edit5: = visible.false;
    edit6: = visible.false;
else
    if var1 = 2 then
      edit2: = visible.true;
      edit3: = visible.true;
      edit4: = visible.false;
      edit5: = visible.false;
      edit6: = visible.false;
     else
       if var1 = 3 then
         edit2: = visible.true;
         edit3: = visible.true;
         edit4: = visible.true;
         edit5: = visible.false;
         edit6: = visible.false;
       else
          if var1 = 4 then
            edit2: = visible.true;
            edit3: = visible.true;
            edit4: = visible.true;
            edit5: = visible.true;
            edit6: = visible.false;
          else
            if var1 = 5 then
              edit2: = visible.true;
              edit3: = visible.true;
              edit4: = visible.true;
              edit5: = visible.true;
              edit6: = visible.true;
            end;
          end;
       end;
end;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  form1.close;
end;

end.
