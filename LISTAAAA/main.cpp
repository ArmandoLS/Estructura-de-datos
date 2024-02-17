#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>


using namespace std;
	struct nodo{
	int datolis;
	struct nodo * sig;	
	};

int main(int argc, char** argv) {
	
	nodo *primernodo= NULL;
	nodo *ultimonodo;
	nodo *aux;
	int opc;
	
	while (true){
		system("cls");
		printf ("M E N U   L I S T A S   E N L A Z A D A S \n");
		printf ("presiona 1 para --> INSERTAR\n");
		printf ("presiona 2 para --> IMPRIMIR\n");
		printf ("opcion: ");
		
		scanf("%d",&opc);
		
		switch (opc){
			
			case 1: {
				
				if(primernodo == NULL){
					primernodo = new(nodo);
					printf ("ingrese el nuevo dato: ");
					scanf("%d",&primernodo->datolis);
					primernodo->sig = NULL;
					ultimonodo = primernodo;
					
				}else{
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
				aux = primernodo;
				if(aux==NULL){
					printf ("LA LISTA SE ENCUENTRA VASIA ");
					
				}else{
					while (aux!= NULL){
						cout<<aux->datolis<<"--> ";
						aux = aux->sig;
						
					}
				}
				break;
			}
		}
		system("pause");
		
	}
	
	

	
	
	return 0;
}
