#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

 
struct datos {
 int dato;
 datos *s;
 }*p,*aux,*u;
 
void insertar (int dat);
void borrar ();
void listar ();
 
main()
{
int opc,y;
do
{
cout<<"\t\n1. Insertar\n";
cout<<"\t2. Borrar\n";
cout<<"\t3. Listar\n";
cout<<"\t4. Salir\n";
cout<<"\n Ingrese opcion: ";cin>>opc;
system("cls");
switch(opc)
{
case 1: cout<<"Ingrese dato: ";
 cin>>y;
 insertar(y);
 cout<<"\nDato insertado!!";
 break;
case 2: borrar();
system("cls");
 break;
case 3: listar();

 break;
case 4: exit(1);
default: cout<<"\n Opcion no valida!!"; break;
}
}
while(opc);
}
 
void insertar (int dat)
{
aux=new(datos);
aux->dato=dat;
if(u)
{
u->s=aux;
aux->s=NULL;
u=aux;
}
else
{
p=u=aux;
}
}
void borrar()
{
if(p)
{
aux=p;
cout<<"\nElimino a " <<p->dato;
p=aux->s;
delete(aux);
}
else
{
cout<<"\n No hay datos";
}
}
 
void listar()
{
int i;
if(!u)
{
cout<<"\n No hay datos en la cola";
return;
}
aux=p;
while(aux)
{
cout<<"\n"<<++i<<" - "<<aux->dato;
aux=aux->s;
}
}
