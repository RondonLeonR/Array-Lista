#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int retorno;
    Employee* Emple1;
    Employee* Emple2;

    Emple1=(Employee*)pEmployeeA;
    Emple2=(Employee*)pEmployeeB;

    retorno=strcmp(Emple1->name,Emple2->name);

    return retorno;
}


void employee_print(Employee* this)
{
    printf("\nId:%d \nName:%s \nLast Name:%s \nEstado:%d\n",this->id,this->name,this->lastName,this->isEmpty);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


