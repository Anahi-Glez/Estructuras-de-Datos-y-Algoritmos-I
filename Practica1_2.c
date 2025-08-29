#include <stdio.h>

int main (void) {
    
    int n;
    int a[10];
    int suma=0;
    int min;
    int max;
    
    printf("Ingrea una cantidad (maximo 10):   ");
    scanf("%d",&n);
   
    if(n>0 && n<=10){
        printf("\nIngrese %d numeros:  \n", n);
        min=0;
        for(int i=0; i<n; i++) {
            printf("Elemento %d: ", i+1);
            scanf("%d", &a[i]);
            suma+=a[i];
            
            if(a[i]<a[i+1]){
                min==a[i];
            }
            
            else {
                min==a[i+1];
            }
        }
    
        printf("\nLos elementos del array son: \n");
    
        for(int i=0; i<n; i++) {
            printf("%d \t",a[i]);
        }
        
        printf("\n\nLa suma de los elementos es: %d", suma);
        printf("\n\nEl promedio de los numeros es: %d ",suma/n);
        printf("\n\nEl elemento minimo introducido es: %d ",min);
        printf("\n");
        return 0;
    }
    else{
        printf("Numero invalido");
        return 0;
    }
}

