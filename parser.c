#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , Employee* pArrayListEmployee)
{
    int r,i;
    FILE* auxFile;
    char var1[50],var2[50],var3[50],var4[50];

    auxFile = fopen(pFile,"r");

    if(auxFile == NULL)
    {
        return -1;
    }
    do{
        r=fscanf(auxFile,"%[^,],%[^,],%[^,],%[^,]\n",var1,var2,var3,var4);
        if(r==4)
            {
            pArrayListEmployee[i].id=
            }

    }

    return 0;
}
