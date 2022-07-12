#include <stdio.h> 
#include <math.h>
#include <conio.h>
#include <stdlib.h>

void clearBuf(void);
int validFormat(const char*, void*);
int validar=1;

int main(){
	
	float valor[1]; 
	float valor2[]={0,0,0,0,0};
	float resultado[]={0,0,0,0,0};
	int i;
	
	printf("Ingresa el valor que quieres que divida\n");
	scanf("%f",&valor[0]);
	
	for(i=0;i<5;i++){
		
		printf("\nIngresa el valor que quieres dividir\n");
		scanf("%f",&valor2[i]);
		
	}
	
	
	for(i=0;i<5;i++){
		
		resultado[i]=valor2[i]/valor[0];
		
		printf("\nEl resultado de la operacion %i es de igual a = %f \n",i+1,resultado[i]);
		
	}
	
	

















getch();	
}
int validFormat(const char* formato, void* variable){ /* Esto es para verificar variables */
	
	validar=1;//reseteamos la comprobacion de la opcion
    /* si se retorna 0 fue porque ocurrio un error*/
    
    if(!scanf(formato, variable) || (getchar() != '\n'))
    {
        
        clearBuf();/* Se utiliza para limpiar el buffer */
        
        printf("\n\n\tError\n\n");
        printf("\n\tUsted Ingreso una opcion no valida\n"); /* Se imprime en pantalla el error */
        printf("\n\tPor favor ingrese una opcion valida\n");
        system("pause");
		
        return 1;
    }
    
    return 0;
}

void clearBuf()
{
    int ch;
    /* Se utiliza para limpiar el buffer */
    while((ch = getchar()) != '\n' && ch != EOF);
}

