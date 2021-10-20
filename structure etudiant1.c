#include<stdio.h>
#include<stdlib.h>


typedef struct element
{
    int val;
	struct element*suivant;
}element;
typedef element *listEntier;

listEntier insere_debut(listEntier new_list,element *new_element,element *tete )
{
    tete=malloc(sizeof(element));
	new_element=malloc(sizeof(element));
	new_element->suivant=tete;
}

    

int main()
{
	listEntier L=NULL;
	element *tete=malloc(sizeof(element));
	element *a=malloc(sizeof(element));
	element *b=malloc(sizeof(element));
	element *c=malloc(sizeof(element));
	tete->val=1;
	tete->suivant=a;
	a->val=2;
	a->suivant=b;
	b->val=3;
	b->suivant=c;
	c->val=4;
	c->suivant=NULL;
//	L=insere_debut(L,x,tete);
	while(tete!=NULL)
	{
		printf("%d\n",tete->val);
		tete=tete->suivant;
	}

	
}
