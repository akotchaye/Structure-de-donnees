#include<stdio.h>
typedef struct
{
  char nom[20] ;
  char prenom[20];
  char sexe[20];
  int  age;
}personne;
void saisie(personne t[],int n)
{
int i;
for (i=0;i<n;i++)
{
    printf("entrer le nom de l'etudiant %d: ",i+1);
    scanf("%s",t[i].nom);
    printf("entrer le prenom de l'etudiant %d: ",i+1);
    scanf("%s",t[i].prenom);
    printf("entrer le sexe de l'etudiant %d: ",i+1);
    scanf("%s",t[i].sexe);
    printf("entrer l'age de l'etudiant %d: ",i+1);
    scanf("%d",&t[i].age);
    printf("\n");
}
}
void affichage(personne t[],int n)
{
 int i;
  printf("nom     prenom     sexe    age \n");
 for (i=0;i<=n-1;i++)
 {
   /* printf("etudiant %d",i+1);**/

    printf("%s  %s  %s  %d",t[i].nom,t[i].prenom,t[i].sexe,t[i].age);
    printf("\n");
 }

}
int main()
{ int n,i;
  personne etudiant[50];

  printf("entrer le nombre d'etudiant: ");
  scanf("%d",&n);
  printf("\n");
  saisie(etudiant,n);
  printf("\n");
  affichage(etudiant,n);
}
