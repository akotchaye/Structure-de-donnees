#include<stdio.h>
#include<stdlib.h>
typedef struct element
{
    int val;
	struct element*suivant;
}element;
typedef element *liste;

liste inserer_fin(liste l,int a)
{
	element *new_element=malloc(sizeof(element));
	new_element->val=a;
	new_element->suivant=NULL;
	if(l==NULL)
	return new_element;
	else
	{
		element *p=l;
		while(p->suivant!=NULL)
		p=p->suivant;
		p->suivant=new_element;
		return l;
	}
}
void supprime_debut(liste l)
{
	free(l);
}
void supprime_fin(liste l,int )
{
	int i;
	for(i=0;i<pos;i++) 
	{
		l
	}
}



liste inserer_debut(liste l,int a)
{
	element *new_element=malloc(sizeof(element));
	new_element->val=a;
	new_element->suivant=l;
	return new_element;
}

void afficher_liste(liste l)
{
	element *new_element=l;
	while(new_element!=NULL)
	{
		printf("%d\n",new_element->val);
		new_element=new_element->suivant;
	}
}


int main()
{
	liste l=NULL;
	int i;
	for(i=1;i<=5;i++)
	l=inserer_debut(l,i);
	afficher_liste(l);
	l=inserer_fin(l,200);
	afficher_liste(l);
}
