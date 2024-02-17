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

int main(){
	
	menu();
}

//----------------------------------------------------------------------------------------------------------      M E N U 
void menu(void){

char opcp;
	
   printf("\n\n\t\t\t\t *********************************************************" );

   printf("\n\t\t\t\t |                  ** MENU PRINCIPAL **                 |");
   printf("\n\t\t\t\t |                                                       |");
   printf("\n\t\t\t\t |                                                       |");
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
     
   printf("\n\t\t\t\t *********************************************************\n\n" );
   
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
    break;
     
    case 'E':
	break;
 			
   }
}
 //----------------------------------------------------------------------------------------------------------
 
 //----------------------------------------------------------------------------------------------------------    A R R E G L O S
 
 void arreglo(void){
 int arreglo[99];
  int n, dato;

  printf("\n\t\t\tA R R E G L O  C O N  'N'  N U M E R O  D E  E L E M E N T O S\n\n" );  
  
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
   	printf("comooooooooooo");
   }  
   
 
