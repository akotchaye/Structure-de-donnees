#include<stdio.h>
#include<stdlib.h>
typedef struct element element;
struct element
{
	int valeur;
	element *suivant;
};
typedef struct file file;
struct file
{
	element *first;
};

void enfiler(file *F,int a)
{
element *new_element=malloc(sizeof(element));
// new_element->valeur=a;
if(F==NULL)
exit(-1);
new_element->valeur=a;
new_element->suivant=NULL;
element *cpt=F->first;
while(cpt->suivant!=NULL)
{
	cpt=cpt->suivant;
	
}
cpt->suivant=new_element;
}

int main()
{
	file *F1=malloc(sizeof(file));
   // F1->first=NULL;
	printf("ENFILLAGE\n");
	enfiler(F1,500);
	enfiler(F1,100);
	enfiler(F1,200);
}


