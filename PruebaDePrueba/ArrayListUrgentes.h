#ifndef ARRAYLISTURGENTES_H_INCLUDED
#define ARRAYLISTURGENTES_H_INCLUDED
#include "ArrayList.h"

typedef struct{
    ArrayList* ArraListUrgentes;
    int dni;
    int estado;

}eUrgentes;

void TramiteUrgente(eUrgentes* this);

#endif

