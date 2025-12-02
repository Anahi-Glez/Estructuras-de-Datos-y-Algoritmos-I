//Practica 2


//Se incluye la libreria stdio.h
# include <stdio.h>

//Se declara la función main
int main(void) {
//Se decalara un arreglo llamado "a" que 
// contiene 5 elementos
int a [5] = { 2,4,6,8,10 };

//Se declara un apuntador p, al cual
// apunta al primer elemento del arreglo a (2)
    int *p = a; 
    //Imprime el elemento 1 del arreglo a, empieza en 0
    printf (" 1) a [ 1 ] = % d\n " , a [1] );
    //Accede a la memoria, a lo que apunta a es a a[0]
    // y lo incrementa en 3, imprime es valor de a[3]
    printf ( "2) *(a+3) = %d\n" , * (a+3));
    //Imprime a lo que apunta p, primero usa el valor y 
    //despues incrementa el apuntador de p, ahora p apunta a a[1]
    printf ( " 3) *p++ = %d\n" , *p++);
    //Del valor anterior p apuntaba a a[1], ahora se va a
    //incrementar una posiciion y a lo que apunta (a[2]) 
    //imprime ese valor, p esta apuntando a a[2]
    printf ( " 4) *++p = %d\n" , *++p);
    //Como p apunta a a[2] se puede decir que eso es p[0]
    //por lo que p[1] seria la siguiente posicion, seria 8
    printf ( " 5) p[1] = %d\n" , p[1]);
    //p sigue apuntando a a[2], ahora incrementa p en dos 
    //unidades, y lo asigna a p, ahora p queda apuntando en esta 
    //posciion, seria a[4] y muestra ese valor, que es 10
    //ahora p esta apuntando a a[4]
    printf ( " 6) *(p+=2) = %d\n", *(p+=2));
    //como p apunta al indice 4 del arreglo, lo que hace es restar 
    //la posicion original de a, que es 0, se lo resta a p
    //por lo que queda p-a =4-0 = 4 
    //Esto quiere decir que p y a estan a 4 unidades en el arreglo
    printf ( " 7) p-a =%ld\n", p-a);
    
    //Finaliza el programa de manera controlada
    return 0;

  }
  
  
