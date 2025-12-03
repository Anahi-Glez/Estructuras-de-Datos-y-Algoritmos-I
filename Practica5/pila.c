//Practica 5

#include <stdio.h>
#include <stdlib.h>
#define MAX 5


struct pila {
    int tam[MAX];
    int tope;
};

int push (struct pila *mipila,int apila) {
    if (mipila-> tope == MAX-1){
        printf("\nPila llena ! ");
        return 0;
    }
    else {
        mipila->tope+=1;
        mipila->tam[mipila->tope]=apila;
        
        printf("\n\tValor agregadado correctamente \n");
        
        printf("\n\nEl estado actual de la pila es: \n");
        for (int i=0 ;i<=mipila->tope ;i++) {
            printf("\n\t %d ",mipila->tam[i]);
        }
        
    }
}

int pop (struct pila *mipila,int desapila) {
    
    if (mipila->tope==-1) {
        printf("\nNo se pueden extraer elementos, la pila esta vacia ");
        return 0;
    }
    
    else {
        int cont=0;
        for (int i=mipila->tope; cont<desapila ;i--) {
            printf("\n\t %d ",mipila->tam[i]);
            cont++;
        }
    }
}



int main()
{
    int n,apila,desapila; 
    struct pila mipila;
    
    mipila.tope=-1;
    printf("\n\tPila inicializada.\n");
    
    printf ("\nIngrese cuantos elementos desea apilar, maximo 5: ");
    scanf("%d",&n);
    
    if (n<=MAX) {
        for (int i=0;i<n;i++) {
            printf("\nIngrese el valor %d a apilar :   ",i+1);
            scanf("%d",&apila);
            push(&mipila, apila);
        }
    }
    
    printf("\nIngrese cunatos elementos desea desapilar: ");
    scanf("%d",&desapila);
    if (desapila<=n) {
        pop(&mipila, desapila);
    }
    else {
        printf("\nNo se pueden extraer mas elemntos de los que se han ingresado ! ");
        return 0;
    }
    return 0;
}
