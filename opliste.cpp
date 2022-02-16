#include <stdio.h>
#include <stdlib.h>
 struct Elemento 
{	int El;
	struct Elemento *prox;};
typedef struct Elemento *Lista;
Lista lista;
int e,scelta,risp;
bool listavuota(Lista l)
{
	return (l== NULL);
}
Lista inseriscicoda (Lista l)
	{Lista temp,coda;
	int risp=1;
	l=NULL;
	while (risp==1) {
	printf("\n Inserisci il valore:");
	temp=(Elemento*)malloc(sizeof(Elemento));
	scanf("%d",&temp->El);
	temp->prox=NULL;
	if (l)
		coda->prox=temp;
	else
		l=temp;
	coda=temp;
	printf("\n Altri elementi 1-Si 0-No\t");
	scanf("%d",&risp);
	printf("\n");
		}
		return l;
	}
	
void cancella(Lista *l, int x)
	{Lista temp, pcorr=*l,prec=NULL;
	temp=(Elemento*)malloc(sizeof(Elemento));
	while (pcorr)
	{
		if (pcorr->El==x) {
			temp=pcorr;
			if (!prec)
				*l=(*l)->prox;
			else
				prec->prox=temp->prox;
		pcorr=pcorr->prox;
		free(temp);
		}
		else
		{
			prec=pcorr;
			pcorr=pcorr->prox;
		}
	}
	} 
void stampalista (Lista l)
{
	if (listavuota(l))
		printf("La lista è vuota niente da fare\n");
	while (l)
	{
		printf("Elemento della lista:\t %d\n",l->El);
		l=l->prox;
	}
	printf("\n");
}
int main ()
{ 	
	lista=NULL;
	do {
	printf("Benevenuto nel programma di gestione della Lista\n");
	printf("Scegli l'operazione da svolgere:\n");
	printf("3- Aggiunta Elemento in Coda alla Lista\n");
	printf("4- Cancellazione Elemento dalla Lista\n");
	printf("5- Stampa Elementi della Lista\n");
	printf("6-Fine programma\n");
	do {
	printf("Effettua la tua scelta: [3..6]\n");
	scanf("%d",&scelta);
	if (scelta >6 or scelta <3)
		printf("\n Scelta non Valida ripeti per favore !\n");
	} while (scelta<3 or scelta>6 );
	switch (scelta)
	{
		case 3: {
			lista=inseriscicoda(lista);
			break;
		}
		case 4: {
			printf("Digita l'elemento da cancellare nella lista:\n");
			scanf("%d",&e);
			cancella(&lista,e);
			break;
		}
		case 5: 
		{
			stampalista(lista);
			break;
		}
		case 6: {
			printf("Arrivederci\n");
			break;
		}
	}
	printf("Altra operazione?  1-si 0-no\t");
	scanf("%d",&risp);}
	while (risp==1);
	return 0;
}
