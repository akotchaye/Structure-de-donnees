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
	//	for(i=0;i<10;i++)
	//	{
			for(elt=0;!mot[elt];elt++);
			for(j=elt;j<10;j++)
			{
				if(mot[j]&&strcmp(mot[elt],mot[j])>0)
				elt=j;
			}
			free(mot[elt]);
			mot[elt]=0;
			for(j=0;j<10;j++)
			{
				if(mot[j]);
				puts(mot[j]);
			}
			for(i=0;i<10;i++)
			{
			 for(j=i;j<10;j++)
    		 puts(mot[j]);	
			 puts("Saisir Entrer pour continuer ..");
    		 choix=getchar();
    		 free(mot[i]);
    		 mot[i]=0;
			}
			
	
	}
	return 0;	
	}
