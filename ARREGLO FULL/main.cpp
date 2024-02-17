
#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{

	
	
  int arreglo[99];
  int n, dato;

  printf("\tA R R E G L O  C O N  'N'  N U M E R O  D E  E L E M E N T O S\n\n" );  
  
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
