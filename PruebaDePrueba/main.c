#include <stdio.h>
#include <stdlib.h>
#include "ArrayListUrgentes.h"

int main()
{
    eUrgentes* PacienteMuriendose;
    int opci;
        printf("1- Tramite Urgente\n");
        printf("2- Tramite Regular\n");
        printf("3- Proximo Cliente\n");
        printf("4- Listar\n");
        printf("5- Informar\n");
        scanf("%d",&opci);

    switch(opci)
    {
        case 1:
            {
            TramiteUrgente(PacienteMuriendose);
            break;
            }
        case 2:
            {
                printf("Chau");
            break;
            }
    }
    return 0;
}
