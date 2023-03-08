#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


void Modific_nume();
void Modific_nr_buc();
void Modific_pret();
void Modifc_prod();

void cazuri();
int Citire_meniu_principal();
void Meniu_Principal();

int Cautare(char s[]);

void Afis_toata_list();
void Afis_prod();
void Afis_dupa_nr_buc();
void Afis_dupa_nume();
void Afis_dupa_pret();
void Afis_alf();
void Afis_cresc();
void scrie_in_fisier();

void Adaug_prod1();
void Iesire();      ///adaugat prototip
void Sterg_prod();
void swap1();

typedef struct Produs{
  int nr_buc;
  double pret;
  char nume[100];
}produs;

produs p[1000];
extern int Q;
FILE *fpc,*fpa;

#endif // HEADER_H_INCLUDED
