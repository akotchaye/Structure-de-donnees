#include<stdio.h>
#include<stdlib.h>

 typedef struct Element Element;
 struct Element{
 	int nombre;
 	Element *suivant;
 };
 typedef Element *Liste;
 
int EstVide(Liste L)
{
	if(L==NULL)
	return 1;
	return 0;
}

Liste InsereEnTete(Liste L,int val)
{
	Element *new_element=malloc(sizeof(Element));
	new_element->nombre=val;
	new_element->suivant=L;
	return L;
}

Liste SupprimerEnQueue(Liste L)
{
	if (EstVide(L)==1)
	exit(-1);
	else
	{
     Element *del_element=malloc(sizeof(Element));
	 del_element=L;
	 while(del_element->suivant!=NULL)
	 del_element=del_element->suivant;
     free(del_element);
	}	
}
 
void AfficheListe(Liste L)
{
	if (EstVide(L)==1)
	exit(-1);
	else
	{
     Element *get_element=malloc(sizeof(Element));
	 get_element=L;
	 printf("liste des elements:\n");
	 while(get_element!=NULL)
	 {
	 	printf("%d ",get_element->nombre);
	 	get_element=get_element->suivant;
	 }
	 
	}	
}
 
 /*void AfficheInvListe(Liste L)
 {
 	Liste NL=L;
 	if (EstVide(L)==1)
	exit(-1);
	else
	{
     Element *getL_element=malloc(sizeof(Element));
	 getL_element=L;
	  Element *getNL_element=malloc(sizeof(Element));
	 getNL_element=NL;
	 while(getL_element!=NULL)
	 {  getL_element->suivant=getNL_element;
	 	getNL_element=getNL_element->suivant;
	 	getL_element=getL_element->suivant;
	 }
	 
	}
	 AfficheListe(NL);	
 }*/
 
 void AfficheInvListe(Liste L)
 {
 	Liste L1;
 	if (EstVide(L)==1)
	exit(-1);
	else
	{
     Element *getL_element=malloc(sizeof(Element));
	 getL_element=L;
	 Element *getL1_element=malloc(sizeof(Element));
	 getL1_element=L1;
	 while(getL_element!=NULL)
	 {
	 	 InsereEnTete(L1,getL_element->nombre);
	 	 getL_element=getL_element->suivant;
	 }
	 
    }
    AfficheListe(L1);
 }
 
 int Recherche(Liste L,int val)
 {
 	int pos=1;
 	Element *get_element=malloc(sizeof(Element));
 	get_element=L;
 	while(get_element!=NULL)
 	{ 
 	if(get_element->nombre==val)
 	exit(pos);
 	get_element=get_element->suivant;
 	pos++;
    }
    return -1;
 }
 
 int Minimum(Liste L)
 {
 	if(L==NULL)
 	exit(-1);
 	Element *get_element=malloc(sizeof(Element));
 	Element *get_suivant=malloc(sizeof(Element));
 	get_element=L;
 	get_suivant=L;
 	get_suivant=get_element->suivant;
 	while(get_suivant!=NULL)
 	{
    	if(get_element->nombre > get_suivant->nombre)
        get_element->nombre=get_suivant->nombre;
    	get_suivant=get_suivant->suivant;
    }
 	return get_element->nombre;
 }
 
 int NbOccur(Liste L,int val)
 {
 	int nboc=0;
 	Element *get_element=malloc(sizeof(Element));
 	get_element=L;
 	while(get_element!=NULL)
	 {
	 	if(get_element->nombre==val)
	 	nboc++;
	 	get_element=get_element->suivant;
	 }
 	return nboc;
 }
 
 void ConcateneListes(Liste L1,Liste L2)
 {
   Element *get_element=malloc(sizeof(Element));
   get_element=L1;
   while(get_element->suivant!=NULL)
   get_element=get_element->suivant;
   get_element->suivant=L2;
   
 }
  
int main()
{
	
	
}
 
