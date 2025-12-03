//Practica 4 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int n=0;
    
    printf("\n\nIngrese cuantos enteros desea almacenar: ");
    scanf("%d",&n);
    
    int *ap=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++) {
        printf("\nValor %d = %d",i+1,ap[i]);
    }
    
}
