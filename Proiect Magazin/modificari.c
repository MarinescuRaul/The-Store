#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void Modific_nume(int i)
{
    char nume[100];
    printf("\nIntroduceti noul nume: ");
    fflush(stdin);
    gets(nume);
    strcpy(p[i].nume,nume);
    cazuri();
}
void Modific_nr_buc(int i)
{
    int n;
    printf("\nIntroduceti noul numar de bucati: ");
    scanf("%d",&n);
    p[i].nr_buc=n;
    cazuri();
}
void Modific_pret(int i)
{
    double n;
    printf("\nIntroduceti noul pret: ");
    scanf("%lf",&n);
    p[i].pret=n;
    cazuri();
}
void Modifc_prod()
{
    char nume[100];
    int n,i=0,k;
    printf("\nIntroduceti numele produsului cautat: ");
    fflush(stdin);
    gets(nume);
    k=Cautare(nume);
    if(k!=-1)
    {
    printf("\nAlegeti ce anume vreti sa modificati");
    printf("\n1. Numele");
    printf("\n2. Numarul de bucati");
    printf("\n3. Pretul");
    printf("\n4. Inapoi\n");
    do{
     if(i>0)
        printf("\nIntroduceti un numar mai cuprins intre 1 si 4!!!\n");
     i++;
     scanf("%d",&n);
     }while(n<1||n>4);

    switch(n)
    {
    case 1:
        Modific_nume(k);
        break;
    case 2:
        Modific_nr_buc(k);
        break;
    case 3:
        Modific_pret(k);
        break;
    case 4:
        cazuri();
        break;
    }
    }
    else
    {
        printf("\nProdusul nu a fost gasit!!");
        cazuri();
    }


}
