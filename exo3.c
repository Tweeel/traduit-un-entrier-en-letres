#include <stdio.h>
#include <stdlib.h>
#include<string.h>


    int traduire(int nombre)
{
    int unites, dizaine, centaine;
    char lettre[100];
    strcpy(lettre, "");

    centaine = nombre / 100;
    dizaine = (nombre - (centaine * 100)) / 10;
    unites = nombre - (centaine * 100) - (dizaine * 10);

    switch(centaine) /*Ecriture des centaines*/
    {
        case 1:
        strcat(lettre,"cent ");
        break;
        case 2:
        strcat(lettre,"deux cent ");
        break;
        case 3:
        strcat(lettre,"trois cent ");
        break;
        case 4:
        strcat(lettre,"quatre cent ");
        break;
        case 5:
        strcat(lettre,"cinq cent ");
        break;
        case 6:
        strcat(lettre,"six cent ");
        break;
        case 7:
        strcat(lettre,"sept cent ");
        break;
        case 8:
        strcat(lettre,"huit cent ");
        break;
        case 9:
        strcat(lettre,"neufcent ");
        break;
        case 0:
        strcat(lettre," ");
        break;
    }

    switch(dizaine) /*Ecriture des dizaines*/
    {
        case 1:
        strcat(lettre,"dix ");
        break;
        case 2:
        strcat(lettre,"vingt ");
        break;
        case 3:
        strcat(lettre,"trente ");
        break;
        case 4:
        strcat(lettre,"quarante ");
        break;
        case 5:
        strcat(lettre,"cinquante");
        break;
        case 6:
        strcat(lettre,"soixante ");
        break;
        case 7:
        strcat(lettre,"soixante-dix ");
        break;
        case 8:
        strcat(lettre,"quatre-vingt ");
        break;
        case 9:
        strcat(lettre,"quatre-vingt dix ");
        break;
        case 0:
        strcat(lettre," ");
        break;
    }

    switch(unites) /*Ecriture des unites*/
    {
        case 1:
        strcat(lettre,"un ");
        break;
        case 2:
        strcat(lettre,"deux ");
        break;
        case 3:
        strcat(lettre,"trois ");
        break;
        case 4:
        strcat(lettre,"quatre ");
        break;
        case 5:
        strcat(lettre,"cinq");
        break;
        case 6:
        strcat(lettre,"six ");
        break;
        case 7:
        strcat(lettre,"sept-dix ");
        break;
        case 8:
        strcat(lettre,"huit ");
        break;
        case 9:
        strcat(lettre,"neuf ");
        break;
        case 0:
        strcat(lettre," ");
        break;
    }


    puts(lettre);
    return 0;

}

int main()
{
    int z;
    do{
int n=0;
printf("saisir le nombre:\n");
scanf("%d",&n);
traduire(n);
    
    printf("si vous voulez reeseyer taaper '1' sinon tapez'0':"); scanf("%d",&z);
    }while (z);
    return 0;
}
