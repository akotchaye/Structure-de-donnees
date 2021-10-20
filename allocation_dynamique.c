#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *tab[10],texte[200],*aide;
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("phrase %d : ",i+1);
		gets(texte);
		tab[i]=malloc(strlen(texte)+1);
		if(tab[i])
		strcpy(tab[i],texte);
		else
		{
			printf("erreur d'allocation!\n");
			exit(-1);
			
		}
	}
	puts("\n ordre initial");
	for(i=0;i<10;i++)
	{
		printf("phrase %d:",i+1);
		puts(tab[i]);
		
	}
	for(i=0,j=9;i<j;i++,j--)
	{
		aide=tab[i];
		tab[i]=tab[j];
		tab[j]=aide;
	}
	puts("\n nouvel ordre:");
	for(i=0;i<10;i++)
	{
		printf("phrase %d: ",i+1);
		puts(tab[i]);
	}
	return 0;
}


