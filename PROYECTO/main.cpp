#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <windows.h>


using namespace std;

void menu(void);
void arreglo(void);
void listas(void);
void pila(void);
void colas(void);
void arboles(void);

   	struct datos {
 int dato;
 datos *s;
 }*p,*aux,*u;
 int opcola,y;
 
 struct nodo{
     int nro;
     struct nodo *izq, *der;
};

typedef struct nodo *ABB;


struct pilas
{
int d;
pilas *a;
}*c,*e;

int main(){
	
	system("color 0F");
	menu();
}




//----------------------------------------------------------------------------------------------------------      M E N U 
void menu(void){

char opcp;
	
   printf("\n\t\t\t\t #########################################################" );
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t |                 _-ESTRUCTURA DE DATOS-_               |");
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t |                   Lopez Silva Armando                 |");
   printf("\n\t\t\t\t |                Perez Becerra Carlos Manuel            |");
   printf("\n\t\t\t\t |            Calderon Gonzalez Christopher Imanol       |");
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t #########################################################" );
   printf("\n\t\t\t\t #########################################################" );
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t |                     (A)  ARREGLO                      |");    										
   printf("\n\t\t\t\t |                                                       |");  
   printf("\n\t\t\t\t |                     (B)  LISTAS                       |"); 
   printf("\n\t\t\t\t |                                                       |"); 
   printf("\n\t\t\t\t |                     (C)  PILAS                        |");  
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t |                     (D)  COLAS                        |");  
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t |                     (E)  ARBOLES                      |");  
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t #########################################################\n\n" );
   
   printf("\t\t\t\t\t   SELECCIONE UNA OPCION PARA COMENZAR:" );  								// CONFIG DEL MENU
   
   scanf("%c",&opcp);
   system("cls");
   
   switch(opcp){
   	
   	case 'A':
   		arreglo();
    break;
 		
    case 'B':
    	listas();
    break;
     
    case 'C':
    	pila();
	break;
	 		
    case 'D':
    	colas();
    break;
     
    case 'E':
    	arboles();
	break;
	
	 default: 
	 printf("\n\t\t\t\t\t\t(X)OPCION NO VALIDA(X)\n\n");
	 break; 
	 
 			
   }
}
 //----------------------------------------------------------------------------------------------------------
 
 //----------------------------------------------------------------------------------------------------------    A R R E G L O S
 
 void arreglo(void){
 int arreglo[99];
  int n, dato;

  printf("\n\t\t\tA R R E G L O  C O N  'N'  N U M E R O  D E  E L E M E N T O S\n\n" );  
  
  printf("\nseleccione un numero 'N' de numeros para orddenar   \n\n");
  
  printf("¨CON CUANNTOS ELEMENTOS CUENTA SU ARREGLO?:");										//SE PIDE LA CANTIDAD DE ELEMENTOS
  scanf("%d",&n);																				//EN EL ARREGLO
  printf("  \n\t-->escriba los [%d] datos de su arreglo \n",n);
  
    for (int i = 0; i < n; i++){ 																// SE RECOPILAN LOS N DATOS
      
    printf("%dø dato: ",i+1);
    scanf("%d",&arreglo[i]);
    }
    
    printf("\n\n\t ->SU ARREGLO ORIGINAL ES:\n\t ->");											//SE IMPRIME EL ARREGLO ORIGINAL

      for (int i = 0; i < n; i++)
    {
      printf("{%i}", arreglo[i]);
    }


  for (int i = 0; i < n; i++)                                                           		// SE ORDENA EL ARREGLO
    {
      for (int ind = 0; ind < n; ind++)
	    {
	        
	  if( arreglo[ind] > arreglo[ind+1])
	  {
	      dato = arreglo[ind + 1];
	      arreglo[ind + 1] = arreglo[ind];
	      arreglo[ind] = dato;

	   }
	    }
    }
    
  printf("\n\n\t ->SU NUEVO ORDEN ES:\n\t ->");													//SE IMPRIME EL NUEVO ORDEN 


  for (int i = 0; i < n; i++)
    {
   
      printf("[%i]", arreglo[i]);
 
    }
 	
 }
 
  //----------------------------------------------------------------------------------------------------------    
  
   //----------------------------------------------------------------------------------------------------------  L I S T A S 
   
   
   void listas(void){
   		struct nodo{
	int datolis;
	struct nodo * sig;	
	};
	
	nodo *primernodo= NULL;
	nodo *ultimonodo;
	nodo *aux;
	int opc;
	
	while (true){
		system("cls");
		printf ("\t\t  L I S T A S   E N L A Z A D A S \n\n");					// MENU DE LA LISTA ENLAZADA
		printf ("seleccione una opcion para insertar o mostrar en pantalla los datos en la lista\n\n");
		printf ("presiona 1 para --> INSERTAR\n");
		printf ("presiona 2 para --> IMPRIMIR\n");
		printf ("presiona 0 para --> SALIR\n");
		printf ("opcion: ");
		
		scanf("%d",&opc);
		
		switch (opc){
			
			case 1: {
				
				if(primernodo == NULL){												// INICIALIZAR LA LISTA
					primernodo = new(nodo);
					printf ("ingrese el nuevo dato: ");
					scanf("%d",&primernodo->datolis);
					primernodo->sig = NULL;
					ultimonodo = primernodo;
					
				}else{																// AGREGAR NODOS A LAS LISTAS 
					aux = primernodo;
					aux = new(nodo);
					printf ("ingrese el nuevo dato: ");
					scanf("%d",&aux->datolis);
					aux->sig = NULL;
					ultimonodo->sig = aux;
					ultimonodo = aux;
				}
				
				
				
				break;
			}
			case 2: {
				aux = primernodo;													// LA LISTA SE ENCUENTRA VASIA 
				if(aux==NULL){
					printf ("LA LISTA SE ENCUENTRA VASIA ");
					
				}else{																// SE IMPRIMEN LOS ELEMNETOS DE LA LISTA 
					while (aux!= NULL){
						cout<<aux->datolis<<" --> ";
						aux = aux->sig;
						
					}
				}
				break;
				
			case 0:{
				exit(1);
				break;
			}
			}
		}
		system("pause");
		
	}
   }
   
   //----------------------------------------------------------------------------------------------------------  
     
   //----------------------------------------------------------------------------------------------------------  P I L A S 
   
   void pila(void){

void ingresar(void);
void sacar (void);
void actualizar_pila(void);
 
int y,opc;
 for(;;)
 {
 	cout<<"\t\tP I L A S\n\n";
 	printf ("\tseleccione una opcion para insertar o mostrar en pantalla los datos en la PILA \n\n");
 cout<<"\t1. Ingresar datos\n";
 cout<<"\t2. Sacar datos\n";
 cout<<"\t0. Terminar\n";
 cout<<"\n Ingrese opcion: ";cin>>opc;
 
 
 switch(opc)
 {
 case 1:
 ingresar();
 break;
 case 2: sacar();
 break;
 case 0: exit(1);
 default: cout<<"\n Opcion no valida!!"; break;
 }
actualizar_pila();
cout<<"\n\nOprima una tecla para continuar";
getch();
system("cls");
 }
}
 
void ingresar (void)
{
 if(!c)
 {
 c=new(pilas);
 cout<<"Ingrese elemento: ";
 cin>>c->d;
 c->a=NULL;
 return;
 }
 
 e=new(pilas);
 cout<<"\nIngrese elemento: ";
 cin>>e->d;
 e->a=c;
 c=e;
}
 
void sacar(void)
{
 if(!c)
 {
 cout<<"\n\nNo hay elementos!!";
 return;
 }
 
 e=new(pilas);
 e=c;
 cout<<"\n\nElemento eliminado: " <<e->d;
 c=e->a;
 delete(e);
 
}
void actualizar_pila(void)
{
 int y=2,i,ca=0;
 e=c;
 while(e)
 {
 ca++;
 e=e->a;
 }
 
for(i=0;i<=ca;i++)
 {
 cout<<" ";
 }
 //muestro lo que tiene la pila!!
 i=0;
 e=c;
 while(e)
 {
 cout<<"\n";
 cout<<++i<<" - "<<e->d;
 e=e->a;
 }
}


   //----------------------------------------------------------------------------------------------------------
   
   //----------------------------------------------------------------------------------------------------------         C O L A S 
   
   void colas(void){
   	
   	struct datos {
 int dato;
 datos *s;
 }*p,*aux,*u;
 int opcola,y;
 
void insertar (int dat);
void borrar ();
void listar ();


do{
cout<<"\t\t C O L A\n\n";
printf ("\tseleccione una opcion para insertar o mostrar en pantalla los datos en la COLA \n\n");
cout<<"\n\t1. Insertar\n";
cout<<"\t2. Borrar\n";
cout<<"\t3. Imprimir\n";
cout<<"\t4. Salir\n";
cout<<"\n Ingrese opcion: ";cin>>opcola;

switch(opcola)
{
case 1: cout<<"Ingrese dato: ";
 cin>>y;
 insertar(y);
 cout<<"\nDato insertado!!";
 cout<<"\n\nOprima una tecla para continuar";
 getch();
 system("cls");
 break;
case 2: borrar();

 break;
case 3: listar();

 break;
case 4: exit(1);
default: cout<<"\n Opcion no valida!!"; break;
}
}
while(opcola);

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

   //----------------------------------------------------------------------------------------------------------
   
   //----------------------------------------------------------------------------------------------------------         A R B O L E S 
   
   ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}
void preOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          cout << arbol->nro <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          cout << arbol->nro << " ";
          enOrden(arbol->der);
     }
}
void postOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->nro << " ";
     }
}

void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

 void arboles(void){
 	    ABB arbol = NULL;   // creado Arbol

    int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo

    cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";
    printf ("\t seleccione unaopcion para representar los datos en un arbol \n\n");

    cout << " Numero de nodos del arbol:  ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++)
    {
        cout << " Numero del nodo " << i+1 << ": ";
        cin >> x;
        insertar( arbol, x);
    }

    cout << "\n Mostrando ABB \n\n";
    verArbol( arbol, 0);

    cout << "\n Recorridos del ABB";

    cout << "\n\n En orden   :  ";   enOrden(arbol);
    cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
    cout << "\n\n Post Orden :  ";   postOrden(arbol);

    cout << endl << endl;

    system("pause");

}  
   
   //----------------------------------------------------------------------------------------------------------
   
   //----------------------------------------------------------------------------------------------------------        
