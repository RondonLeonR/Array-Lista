#include "ArrayListUrgentes.h"

void TramiteUrgente(eUrgentes* this)
{
    //int i=0;
    int j;

    j=this->ArraListUrgentes->add(this,1);
    if(j!=-1)
    {

        //i++;

    printf("Su turno es: %d",1);
    this->estado=1;
    }

}
