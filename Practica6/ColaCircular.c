//Practica 6 

#include <stdio.h>
#include <stdlib.h>
#define MAX 5


struct ColaCircular {
    int datos [MAX];
    int frente, final,size;
    int tam;   //Tamaño
};

int isEmpty(struct ColaCircular *colac, int size) {
    if (colac->size==0){ 
        //colac->frente==-1 tamien pense en esta forma de comparar
        printf("\nLa Cola Circular esta vacia ! ");
        return 1;
    }
    else{
        printf("\nSe pueden insertar elementos");
        return 0;
    }
}

int isFull(struct ColaCircular *colac, int size){
    if (colac->size==MAX){ 
        printf("\nLa Cola Circular esta llena ! ");
        return 1;
    }
    else {
        printf("\nAun se pueden insertar elementos ");
        return 0;
    }
}

int enqueue(struct ColaCircular *colac, int encola, int size, int tam,int final) {
    isFull(colac,encola);
    
    if ((isFull(colac,encola))!=1){
        for(int i=0; i<encola; i++){
            printf("\n\nIngresa el valor %d :   ",i+1);
            scanf("%d",&colac->datos[i]);
            
            colac->final++;
            colac->size++;
            colac->tam++;
        }
        //La siguiente linea fue para er como se complrtan los contadores
        //printf("size=%d, final=%d, tam=%d",colac->size,colac->final,colac->tam);
    }
    else{
        printf("\nNo se pueden agregar mas elementos, cola llena ");
        return 0;
    }
}


int dequeue(struct ColaCircular *colac,int desencola,int frente,int size, int tam) {
    
    
    if ((isEmpty(colac,desencola))!=1){
        printf("\nNo se pueden eliminar elementos de una cola vacia ");
        return 0;
    }
    else{
        for(int i=0 ; i<size ; i++ ){
            printf("\nValor %d =  %d  ",i+1,colac->datos[i]);

            colac->frente-=1;
            colac->size=colac->size-1;
            tam--;
        }
    }
}


int peek (struct ColaCircular *colac){
    printf("Peek: %d",colac->datos[colac->frente]);
    return 0;
}


int printQueue (struct ColaCircular *colac, int encola){
    printf("\n\nLa cola circular almacenada es : ");
    for(int i=0; i<encola;i++) {
        printf("\t %d \t ",colac->datos[i]);
    }
    return 0;
}




int main()
{
    int opc, continua;
    struct ColaCircular colac;
    colac.frente=0;
    colac.final=0;
    colac.size=0;
    
    printf("Cola circular iniciada");
    
    do{
    printf("\nIngresa el numero de la opcion que deseas realizar : ");
    printf("\n 1)IsEmpty ");
    printf("\n 2)IsFull ");
    printf("\n 3)Enqueue ");
    printf("\n 4)Dequeue ");
    printf("\n 5)peek ");
    printf("\n 6)PrintQueue ");
    printf("\nIngrese la opcion:   ");
    scanf("%d",&opc);
    
    switch(opc) {
        
        case 1:
            isEmpty(&colac,colac.size);
        break;
        
        case 2:
            isFull(&colac,colac.size);
        break;
        
        case 3:
        int encola;
        printf("\nIngresa cuantso elementos deseas encolar: ");
        scanf("%d",&encola);
        if(encola<=MAX) {
            enqueue(&colac,encola,colac.size,colac.tam,colac.final);
        }
        
        else{
            printf("\nNo se pueden agregar mas de %d elementos",MAX);
            return 0;
        }  
        break;
        
        case 4:
        int desencola;
        printf("\nIngresa cuantso elementos deseas desencolar: ");
        scanf("%d",&desencola);
        if(desencola<=encola) {
            dequeue(&colac,desencola,colac.size,colac.tam,colac.frente);
        }
        
        else{
            printf("\nNo se pueden desencolar mas elementos que los encolados",MAX);
            return 0;
        }  
        break;
        
        
        case 5:
            peek(&colac);
        break;
        
        case 6:
            printQueue(&colac,encola);
        break;
        
        
        default:
        printf("\nOpcion invalida ");
        return 0;
    }
    printf("\n\nIngrese 1 para continuar, ingrese otro caracter para salir:   ");
    scanf("%d",&continua);
    } while(continua==1);
    return 0;
}
