#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *mot[10],texte[51],*aide,choix;
int i,j,elt;
for(i=0;i<10;i++)
	{
		printf("phrase %d : ",i+1);
		gets(texte);
		mot[i]=malloc(strlen(texte)+1);
		if(mot[i])
		strcpy(mot[i],texte);
		else
		{
			puts("erreur d'allocation!\n");
			exit(-1);
		}
			for(elt=0;!mot[elt];elt++);
			for(j=elt;j<10;j++)
			{
				if(mot[j]&&strcmp(mot[elt],mot[j])>0)
				elt=j;
			}	&zz
	return 0;	
	}
