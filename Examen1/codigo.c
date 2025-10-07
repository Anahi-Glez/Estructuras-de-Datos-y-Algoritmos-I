/******************************************************************************
    
    Solucion al examen practico de Estructuras De Datos y Algoritmos I 
    
*******************************************************************************/

//Se incluyen libreias para poder hacer uso de las funciones realloc, calloc, y funciones matematicas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaracion de las variables
    int alu=0, n=0, agrega=0, aluNew=0, agregar=0;
    float suma=0;
    //Para saber de cuantos alumnos sera el registro, inicialmente
    printf("\n\n¿Para cuantos alumnos desea registrar la calificacion?  ");
    scanf("%d",&alu);
    //asigna memoria de manera dinamica con malloc
    float *califs= (float*)malloc(n * sizeof(float));
    //Comprueba que no haa sido nula la asignacion de memoria
    if(califs == NULL) {
        printf("\nError al reservar memoria");
        return 0;
    }
    //Se pudo asignar memoria: 
    else {
        //Para registrar la calificacion de cada alumno
      for (int i=0; i<alu; i++) {
        //Lee y guarda la calificacion de cada alumno en el indice i
        printf("\nIngrese la calificacion del alumno %d:   ",i+1);
        scanf("%f",&califs[i]);
        //comprueba que la calificacion este en un rango aceptable
        if(califs[i]>0 && califs[i]<=10) {
            printf("Calificacion valida");
        }
        //Si la calificacion que se ha ingresado esta fuera del rango, pide nuevamnete la calificacion
        else {
            printf("\nCalificacion invalida");
            printf("\nIngrese nuevamente esta calificacion para el alumno %d:   ",i+1);
            scanf("%f",&califs[i]);
            //Comprueba que esta vez se haya dado una calificacion valida
            if(califs[i]>0 && califs[i]<=10) {
                califs[i]=califs[i];
            }
            //Si no se dio una calificacion valida,el programa finaliza
            else {
                printf("Calificacion invalida");
                return 0;
            }
        
        }
        //Asigna a "suma" el valor introducido en el indice i
        suma+=califs[i];
    }
    
    printf("\n\nLas calificaciones ingresadas son:");
    //Ciclo para mostrar las calificaciones
    for (int i=0; i<alu; i++) {
    printf("\ncalificacion[%d] = %0.2f ",i+1,califs[i]);
    }
    //Hace directamente el promedio de las caliicaciones de acuerdo a los alumnos
    printf("\n\nEl promedio de las calificaciones ingresadas es: %0.2f ",suma/alu);
    //Pregunta si se desea registrar a mas estudiantes
    printf("\n\nIngrese 1 para agregar mas estudiantes, ingrese otro caracter si no quiere agregar mas estudiantes\n");
    printf("\n¿Desea agregar mas estudiantes al regsitro de calificaciones?   ");
    scanf("%d",&agrega);
    // "agrega" lee si se van a agregar mas estudiantes o no
    if (agrega == 1 ) { //Sequieren agregar mas estudiantes
        printf("\n¿Cuantos alumnos desea agregar?   ");
        scanf("%d",&agregar);
        aluNew=alu+agregar; //Asigna a "aluNew" el nuevo tamaño para ingresar calificaciones
        califs = realloc (califs,aluNew *sizeof(float)); //Amplia el tamano de califs que se habia asignado con malloc
        
        if (califs == NULL ) { //Comprueba que se haya podido reservar la memoria con realloc
            printf("\nError al reservar memoria");
        }
        //En caso de que si se haya podido asignar memoria, hace lo siguiente
        else{
        //Leera cada calificacion nueva
        for (int i=alu; i<aluNew; i++) {
            printf("\nIngrese la calificacion del alumno %d:    ",alu+1);
            scanf("%f",&califs[i]);
            //Verifica que la calificacion se haya asignado en un rango permitido
            if(califs[i]>0 && califs[i]<=10) {
                printf("Calificacion valida");
            }
            //Si la calificacion excede o es mas baja que el rango permitido pide la calificacion nuevamente
            else {
                printf("\nIngrese una calificacion valida para el alumno %d",i+1);
                scanf("%f",&califs[i]);
                //Verifica que se haya asignado de manera que este en el rango permitido
                if(califs[i]>0 && califs[i]<=10)
                printf("\nCalificacion valida");
                //Si no se ha ingresado una calificacion valida, el programa finaliza
                else {
                    printf("\nCalificacion invalida");
                    return 0;
                }
            }
            //Asina a suma el total de las calificaciones, mas lo que ya teniamos
            suma+=califs[i];
            //Aumenta "alu" una unidad por que es la referencia con que estoy pidiendo los datos del alumno nuevo
            alu++;
        }        
        //Mensaje para mostrar las calificaciones
            printf("\n\nLas calificaciones ingresadas son:");
            //Ciclo for para mostrar las calificaciones de los alumnos, mostrando el total de los alumnos
            for (int i=0; i<aluNew; i++){
                printf("\ncalificacion[%d] = %0.2f ",i+1,califs[i]);
            }
            //Muestra el promedio de los alumnos
                printf("\nEl promedio total es de  : %0.2f ",suma/aluNew);
        }    
        
    }
    //En caso de que no se quieran agregar mas alumnos, se mauestra el mensaje al usuario y finaliza el programa
    else {
        printf("\n\n\tGracias por usar este programa.\n\n\tTenga excelente dia.");
        return 0;
    }
    }
    //Se libera la memoria usada para califs 
    free (califs);
    califs = NULL;
    printf("\n\nMemoria liberada de manera exitosa");
    //Finaliza el programa
    return 0;
}

