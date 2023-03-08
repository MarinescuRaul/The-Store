#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>

void Afis_toata_list()
{
    int i;
    for(i=0;i<=Q;i++)
    {
        printf("%s,%d,%.2lf\n",p[i].nume,p[i].nr_buc,p[i].pret);
    }

    Afis_prod();
}

void scrie_in_fisier()
{
    fpa=fopen("afisare_fisier.txt","w");
    int i;
    for(i=0;i<=Q;i++)
    {
        fprintf(fpa,"%s,%d,%.2lf\n",p[i].nume,p[i].nr_buc,p[i].pret);

    }
    fclose(fpa);
}

void Afis_dupa_nume()
{
    char s[100];
   printf("Introduceti numele: ");
   scanf("%s",s);
   int k=0;
   for(int i=0;i<Q;i++)
    if(strstr(p[i].nume,s)!=NULL)
    {
      printf("%s,%d,%.2lf\n",p[i].nume,p[i].nr_buc,p[i].pret);
      k++;
    }
    if(k==0)
        printf("\nNU exista niciun produs cu acest subsir in componenta numelui!!!\n");
    Afis_prod();

}

void Afis_dupa_nr_buc()
{
    int n,i,k=0;
    printf("Citerse numarul de bucati: ");
    scanf("%d",&n);
    for(i=0;i<=Q;i++)
        if(p[i].nr_buc==n)
        {
        printf("%s,%d,%.2lf\n",p[i].nume,p[i].nr_buc,p[i].pret);
         k++;
        }
     if(k==0)
        printf("\nNu exista produse cu acest numar de bucati!\n");
    Afis_prod();
}

void Afis_dupa_pret()
{
    fpa=fopen("afisare_fisier.txt","w");
    int i,k=0;
    double n;
    printf("Citerse pretul: ");
    scanf("%lf",&n);
    for(i=0;i<=Q;i++)
        if(p[i].pret==n)
        {
         printf("%s,%d,%.2lf\n",p[i].nume,p[i].nr_buc,p[i].pret);
         k++;
        }
    if(k==0)
        printf("\nNu exista produse cu acest pret!\n");
    fclose(fpa);
    Afis_prod();
}

void Afis_alf()
{
    int i,j;
    for(i=0;i<Q;i++)
        for(j=i;j<=Q;j++)
         if(strcmp(p[i].nume,p[j].nume)>0)
            swap1(i,j);
    Afis_toata_list();

}
void swap1(int i,int j)
{
   // int pret;
  // double nr_buc;
   // char nume[100];
    produs p1;
    p1=p[i];
    p[i]=p[j];
    p[j]=p1;

}
void Afis_cresc()
{
     int i,j;
    for(i=0;i<Q;i++)
        for(j=i;j<=Q;j++)
         if(p[i].pret>p[j].pret)
            swap1(i,j);
    Afis_toata_list();
}

void Afis_prod()
{
   int i=0,n;
   printf("\n1. Afisare toata lista");
   printf("\n2. Afisare lista dupa nume");
   printf("\n3. Afisare lista dupa pret");
   printf("\n4. Afisare lista dupa numarul de bucati");
   printf("\n5. Afisare lista alfabetic");
   printf("\n6. Afisare lista crescator dupa pret");
   printf("\n7. Inapoi\n");
   printf("Introduceti nr corespunzator operatiei: ");
   do{
     if(i>0)
        printf("\nIntroduceti un numar  cuprins intre 1 si 5!!!\n");
     i++;
      scanf("%d",&n);
   } while(n<1||n>7);
   switch(n)
   {
       case 1:
            Afis_toata_list();
              break;
       case 2:
              Afis_dupa_nume();
              break;
       case 3:
              Afis_dupa_pret();
              break;
       case 4:
              Afis_dupa_nr_buc();
              break;
       case 5:
              Afis_alf();
              break;
       case 6:
            Afis_cresc();
              break;
       case 7:
              cazuri();
              break;
   }

}
