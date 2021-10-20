#include<stdio.h>
int main()
{
  int A[50],*p1,*p2,aide,n;
  printf("entrer le nombre d'element:");
  scanf("%d",&n);
  for(p1=A;p1<A+n;p1++)
  {
   printf("entrer l'element_%d: ",p1-A+1);
   scanf("%d",p1);
  }
  printf("voici la liste des elements sisies: " );
  for(p1=A;p1<A+n;p1++)
  printf("%d ",*p1);
  printf("\n");
  for(p1=A,p2=A+n-1;p1<p2;p1++,p2--)
  {
    aide=*p1;
    *p1=*p2;
    *p2=aide;
   }
printf("les contenus du nouveau tableau sont:");
    for(p1=A;p1<A+n;p1++)
    printf("%d ",*p1);


}
