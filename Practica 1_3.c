#include <stdio.h>

int main (void) {
    
    int n;
    int a[10];
    int suma=0;
    
    printf("Ingrea una cantidad (maximo 10):   ");
    scanf("%d",&n);
   
    if(n>0 && n<=10){
        printf("\nIngrese %d numeros:  \n", n);
    
        for(int i=0; i<n; i++) {
            printf("Elemento %d: ", i+1);
            scanf("%d", &a[i]);
        }
    
        printf("\nLos elementos del array, de manera invertida son: \n");
    
        for(int i=(n-1); i>=0; i--) {
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

