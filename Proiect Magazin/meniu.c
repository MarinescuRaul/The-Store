#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>



void Meniu_Principal()
{
    printf("1. Adaugare produs\n");
    printf("2. Stergere produs\n");
    printf("3. Modificare produs\n");
    printf("4. Afisare lista de produse\n");
    printf("5. Iesire aplicatie\n");

}
int Citire_meniu_principal()
{
    int n,i=0;
    do
    {
        if(i>0)
            printf("\n!!!Introduceti un numar cuprins intre 1 si 5!!!\n");
        i++;
        printf("\n");
        Meniu_Principal();
        printf("introduceti numarul corespunzator operatiei ce se doreste a fi efectuata: ");
        scanf("%d",&n);
    }
    while(n<1||n>5);
    return n;
}
void cazuri()
{
    int n;
    n=Citire_meniu_principal();
    switch(n)
    {
    case 1:
        Adaug_prod1();
        break;
    case 2:
        Sterg_prod();
        break;
    case 3:
        Modifc_prod();
        break;
    case 4:
        Afis_prod();
        break;
    case 5:
        Iesire();
        break;


    }
}

