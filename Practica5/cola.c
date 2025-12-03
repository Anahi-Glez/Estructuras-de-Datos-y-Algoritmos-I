//Practica 5    COLA    ENQUEUE DEQUEUE 

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct cola{
    int tam[MAX];
    int frente, final;
}; 


int enqueue(struct cola *queue, int encola) {
    for (int i=0; i<encola; i++) {
        printf("\nElemnto %d : ",i+1);
        scanf("%d",&queue->tam[i]);
        
        printf("\nLa cola actualmente es: \n");
        
        for(int j=0; j<=i; j++) {
            
            printf("\n\t %d   ",queue->tam[j]);
        }
    }
}



int dequeue(struct cola *queue, int desencola) {
    printf("\nLos elementos a desencolar son: \n");
    
    for(int i=0; i<desencola; i++) {
        printf("\t %d \t",queue->tam[i]);
    }
}

int main()
{
    int encola=0, desencola=0;
    struct cola queue;
    queue.frente=0;
    queue.final=-1;
    
    printf("\n\tCola inicializada\n");
    
    printf("\nCuantos elementos desea encolar, maximo %d :  ",MAX);
    scanf("%d",&encola);
    if(encola<=MAX){
        printf("\nIngrese los datos en orden en que desea encolar: \n");
        enqueue(&queue,encola);
        
    }
    
    printf("\n\nIngrese cuantos elementos desea desencolar :  ");
    scanf("%d",&desencola);
    if(desencola<=encola){ 
        dequeue(&queue,desencola);
    }
    
    else{
        printf("No se pueden desencolar mas elementos de los encolaos !");
    }

    return 0;
}
