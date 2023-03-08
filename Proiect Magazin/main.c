#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <ctype.h>
#include <string.h>

int Q=-1;

void Adaug_prod1()
{
    char s[100];
    printf("\nIntroduceti numele produsului: ");
    fflush(stdin);
    gets(s);
    if(Cautare(s)==-1)
    {
     Q++;
     strcpy(p[Q].nume,s);
    printf("Introduceti numarul de bucati: ");
    fflush(stdin);
    scanf("%d", &p[Q].nr_buc);
    printf("Introduceti pretul pentru o unitate: ");
    scanf("%lf", &p[Q].pret);
    printf("\nProdusul a fost adaugat cu succes!!\n");
    }
    else
     printf("\nAcest produs exista deja!\n");
    cazuri();

}

void Adaug_prod2()
{

    fpc=fopen("citire_fisier.txt","r");
    if(fpc != NULL) {
        printf("Se incarca datele!\n");

        char s[300],*c;

        while(fgets(s,300,fpc) != NULL)
        {
            Q++;
            c=strtok(s,",");
            strcpy(p[Q].nume,c);
            c=strtok(NULL,",");
            p[Q].nr_buc=atoi(c);
            c=strtok(NULL,",");
            p[Q].pret=atof(c);

        }

        fclose(fpc);
    }
    else {
        printf("Eroare. Nu gasesc fisierul!\n");


    }

}

void Sterg_prod()
{
    int i,j;
    char nume[100];
    if(Q==-1)
    {
        printf("\nLista este goala!\n");
        cazuri();

    }

    printf("\nIntroduceti numele produsului: ");
    fflush(stdin);
    gets(nume);
    if(Cautare(nume))
    {
        for(i=0;i<Q;i++)
        if(strcmp(p[i].nume,nume)==0)
        {
            char nume_produs[100];
            strcpy(nume_produs,p[i].nume);
          for(j=i;j<Q-1;j++)
            p[j]=p[j+1];
    printf("\nProdusul %s a fost sters cu succes!!\n",nume_produs);
    Q--;
    }
    else
        printf("Produsul nu a fost gasit!\n");
    cazuri();

}
}


int Cautare(char s[])
{
    int i;
  for(i=0;i<=Q;i++)
        {
        if(strcmp(p[i].nume,s)==0)
           {
            return i;
           }
        }
    return -1;
}

void Iesire()
{
    scrie_in_fisier();
    printf("\nLa revedere!!!");

}

int main()
{
    Adaug_prod2();
    printf("Bine ati venit!\n");
    cazuri();
    return 0;
}
