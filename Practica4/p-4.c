//Practica 4 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int n=0, m=0;
    
    printf("\n\nIngrese cuantos enteros desea almacenar: ");
    scanf("%d",&n);
    
    int *arr2=(int*)calloc(n,sizeof(int));
    
    //Reservando con calloc: 
    //  int *ap=(int*)malloc(n*sizeof(int));
    
    // Ahora vamos a llenar el arreglo con datos que 
    //  ingrese el ususario
    
    for(int i=0;i<n;i++) {
        printf("\nValor %d = ",i+1);
        scanf("%d",&arr2[i]);
    }
    
    printf("\n\nIngrese el nuevo tamaño del arreglo: ");
    scanf("%d",&m);
    
    arr2=realloc (arr2, m*sizeof(int));
    
    if (m>n) {
        printf("\nFalta ingresar %d elementos \n", m-n);
        for(int i=n;i<m;i++){
            printf("Valor %d = ",i+1);
            scanf("%d",&arr2[i]);
        }
        for(int i=0;i<m;i++) {
            printf("\nValor %d = %d ",i+1,arr2[i]);
        }
    }
    else {
        for(int i=0;i<n;i++) {
            printf("\nValor %d = %d ",i+1,arr2[i]);
        }
    }
    
    free(arr2);
    arr2==NULL;
        printf("\n\n\tMemoria liberada correctamente.");
}

/*

ACTIVIDAD :

1- Malloc no inciializa los valores, simplemente deja 
esos valores como estaban antes de ser ocupados, es decir,
pueden contener valores basura.
Calloc inicializa esos valores en cero.


2.- Si en realloc se pide un tamaño mas grande que el que ya 
teniamos, se va a redimensionar, y se van a leer los nuevos
valores (en este ejercicio).
En caso de que el nuevo arreglo sea mas pequeño, solo se va a 
guardar el valor, pero no se modifica el tamaño de nuestro 
arreglo original.


3.- Si nos olvudamos de llamar a free, se puede quedar en uso 
esa memoria, puede cuasar conflictos posteriores, se seguirá 
haciendo uso esa memoria.

*/
