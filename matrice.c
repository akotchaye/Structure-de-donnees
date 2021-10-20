#include<stdio.h>
typedef struct matrice
{
 int a,b,c,d;
}carre;
void saisie(carre X[1][1])
{
printf("entrer a");
scanf("%d",&X[0][0].a);
printf("entrer b");
scanf("%d",&X[0][1].b);
printf("entrer c");
scanf("%d",&X[1][0].c);
printf("entrer d");
scanf("%d",&X[1][1].d);

}
void produit (carre E[1][1],carre F[1][1],carre G[1][1])
{
     G[0][0]=(E[0][0]*)*(F[0][0]*)+(E[0][1]*)*(F[1][0]*);

}
int main()
{
carre A[1][1], B[1][1], C[1][1] ;
saisie(A);
saisie(B);


}
