#include <stdio.h>
#include <stdlib.h>

void funcionBienvenida(char* nombre);
void funcionDespedida(char* nombre);
void fDel(void(*punteroFuncion)(char* elDato),char* nombre);

void fDespedidaSin();


int main()
{
    fDel(funcionBienvenida,"natalia natalia");
    getche();
    fDel(funcionDespedida,"natalia natalia");
    getche();
    fDespedidaSin(funcionDespedida,"nat");
    return 0;
}

void funcionBienvenida(char* nombre)
{
    printf("Bienvenida %s , a la empresa.",nombre);
}

void funcionDespedida(char* nombre)
{
    printf("adasdsa %s",nombre);
}

void fDel(void(*punteroFuncion)(char* elDato),char* nombre)
{
    punteroFuncion(nombre);
}

void fDespedidaSin()
{

}
