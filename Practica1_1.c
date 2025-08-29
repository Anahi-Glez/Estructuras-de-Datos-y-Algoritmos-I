#include <stdio.h>

int main (void) {
    
    int n;
    int a[10];
    
    printf("Ingrea una cantidad (maximo 10):   ");
    scanf("%d",&n);
   
    if(n>0 && n<=10){
        printf("Ingrese %d numeros:   ", n);
    
        for(int i=0; i<n; i++) {
            printf("Elemento %d: ", i+1);
            scanf("%d", &a[i]);
        }
    
        printf("Los elementos del array son: \n");
    
        for(int i=0; i<n; i++) {
            printf("%d \t",a[i]);
        }
        printf("\n");
        return 0;
    }
    else{
        printf("Numero invalido");
        return 0;
    }
}


