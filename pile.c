#include<stdio.h>
#include<stdlib.h>
typedef struct element element;
struct element
{
	int valeur;
	element *suivant;
};
typedef struct pile pile;
struct pile
{
	element *first;
};

void empiler(pile *P,int a)
{
 element *new_element=malloc(sizeof(element));
 new_element->valeur=a;
 if(P==NULL||new_element==NULL)
 exit(-1);
 new_element->suivant=P->first;
 P->first=new_element;
}
 
 void afficher(pile *P)
 {
  if(P==NULL)
  printf("NULL\n");
  else
  {
  element *a = P->first;
  while(a!=NULL)
  {
  	printf("%d\t",a->valeur);
  	a=a->suivant;
  }
 }
}

void depiler(pile *P)
{
	if(P==NULL)
	{
		printf("NULL\n");
		exit(-1);
	}
	element *delete_element=P->first;
	if(P->first != NULL)
	{
	P->first=delete_element->suivant;
	free(delete_element);
	}
}
int main()
{
	pile *P1=malloc(sizeof(pile));
	P1->first=NULL;
	printf("EMPILLAGE\n");
	empiler(P1,500);
	empiler(P1,250);
	empiler(P1,200);
	empiler(P1,100);
	empiler(P1,50);
	empiler(P1,25);
	empiler(P1,10);
	empiler(P1,5);
	empiler(P1,1);
	afficher(P1);
	depiler(P1);
	depiler(P1);
	depiler(P1);
	afficher(P1);
	
}

