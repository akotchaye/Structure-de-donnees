#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char M[50];
    char *mot[10];
    char *phrase;
    int i,j,l,max;
    for(i=0; i<10; i++)
    {
        printf("Mot %d : ",i+1);
        gets(M);
        mot[i]=malloc(strlen(M)+1);
        if(mot[i])
        {
            strcpy(mot[i], M);
        }
        else
        {
            printf("Erreur dallocation\n");
            exit(-1);
        }

    }
    printf("\t\t1 AFFICHAGE\n");
    for(i=0; i<10; i++)
    printf("%s\t", mot[i]);
    printf("\n");

    l= 11;
    for(i=0; i<10; i++)
        l+=(strlen(mot[i])+1);
    phrase=malloc(l);
    if (!phrase)
     {
      printf("\aPas assez de mémoire pour"
             " mémoriser la phrase.\n");
      exit(-1);
     }
    phrase[0]='\0';
    for(i=0; i<10; i++)
    {
        for(max=0; !mot[max]; max++);
        for(j=max; j<10; j++)
            if(mot[j] && strcmp(mot[max], mot[j])>0)
            max=j;
            strcat(phrase, mot[max]);
            strcat(phrase, " ");
            free(mot[max]);
            mot[max]=0;
    }
    printf("Phrase : %s", phrase);
    return 0;
}
