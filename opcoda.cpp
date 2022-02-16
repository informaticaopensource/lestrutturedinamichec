#include <stdio.h>
#include <stdlib.h>
const int MAX=10000;
int scelta;
struct coda 
{
	int *c;
	int last;
	int nmax;
};
coda ncoda;
void creacoda(coda &x)
{	
	printf("\n Inserisci la dimensione massima della coda:\t");
	scanf("%d",&x.nmax);
	x.c=(int *)malloc(x.nmax*sizeof(int));
	x.last=-1;
	}
bool codaVuota(coda &x)
{
	bool vuota=false;
	if (x.last==-1)
	{
		printf("\n Coda Vuota !\n");
		vuota=true;
	}
	return vuota;
}
bool codaPiena(coda &x)
{
	bool piena=false;
	if (x.last==x.nmax-1)
	{
		printf("\n Coda Piena\n");
		piena=true;
	}
	return piena;
}
void pushCoda (coda &x, int e)
{
	if (not(codaPiena(x)))
	{
		x.last++;
		x.c[x.last]=e;
	}
}
void popCoda (coda &x)
{
	int k;
	if (not(codaVuota(x)))
	{
		printf("\n Elemento Estratto:\t %d",x.c[0]);
		for (k=1;k<=x.last;k++)
			x.c[k-1]=x.c[k];
	x.last--; 
	}
			}
void stampaCoda(coda &x)
{   int k;
	if (not(codaVuota(x))) {
		printf("\n Stampa degli elementi dalla coda:\n");
	for (k=0;k<=x.last;k++)
		printf("%d - ",x.c[k]);
	}
}
void cancellaCoda (coda &x)
{
	if (x.c!=NULL)
	free (x.c);
	else
		printf("\n La coda è stata già eliminata dalla memoria RAM\n");
}
int main ()
{
	do {
	printf("\n Benvenuto nel programma di gestione di una struttura\n dati dinamica di tipo coda\n");
	printf("Elenco delle scelte possibili:\n");
	printf("1- Creazione della Coda\n");
	printf("2- Inserimento elemento nella coda\n");
	printf("3- Estrazione Elmmento della coda\n");
	printf("4- Stampa della Coda\n");
	printf("5- Cancellazione della Coda dalla Memoria");
	printf("\n6- Uscita dal programma\n");
	printf("Fai la tua scelta 1..6:\n");
	scanf("%d",&scelta);
	switch (scelta)
	{
		case 1: {
			creacoda(ncoda);
			break;
		}
		case 2: 
		{
			int y;
			printf("\n Digita il valore da accodare:\n");
			scanf("%d",&y);
			pushCoda(ncoda,y);
			printf("\n Valore di ritorno do di x.last\t %d",ncoda.last);
			break;
		}
		case 3:
			{
				popCoda(ncoda);
				break;
			}
		case 4:
			{
				stampaCoda(ncoda);
				break;
			}
		case 5:
			{
				cancellaCoda(ncoda);
				break;
			}
		case 6:
			{
				printf("\nCancellazione delle strutture dati in Memoria Ram\n");
				cancellaCoda(ncoda);
				printf("\n Arrivederci e grazie per aver utilizzato il programma\n");
				return 0;
			}
		default:
			{
				printf("\nScelta non valida");
				printf("Ripeti la scelta:\t");
				scanf("%d",&scelta);
				break;
			}
	}}
	while ((scelta>0)&&(scelta<7));
	return 0;
}
