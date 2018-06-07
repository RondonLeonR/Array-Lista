#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int Aux,i;
    Employee* emplAux;
    Employee* emplAux2;
    ArrayList* lista;
    lista= al_newArrayList();//La funcion devuelve una direccion de memoria

    Employee* empl1;
    Employee* empl2;
    empl1 = (Employee*)malloc(sizeof(Employee));
    empl2 = (Employee*)malloc(sizeof(Employee));
    //Carga de valores para estructura de empleado
    empl1->id = 666;
    strcpy(empl1->name,"bJuan");
    strcpy(empl1->lastName,"Gomez");
    empl1->isEmpty=1;

    al_add(lista,empl1);
    //
    Aux = al_len(lista);
    //printf("Size Array:%d",Aux);

    //Muestro los valores dentro de la estructura
    //emplAux = (Employee*)al_get(lista,0);
    //employee_print(emplAux);


    empl2->id = 667;
    strcpy(empl2->name,"aLuis");
    strcpy(empl2->lastName,"Perez");
    empl2->isEmpty=1;

    al_add(lista,empl2);

    for(i=0;i<2;i++)
    {
        emplAux = (Employee*)al_get(lista,i);
        employee_print(emplAux);
    }

    Aux = al_len(lista);

    al_sort(lista,employee_compare,1);

    printf("\nDespues de ordenar\n");
    for(i=0;i<2;i++)
    {
        emplAux = (Employee*)al_get(lista,i);
        employee_print(emplAux);
    }



    return 0;
}
