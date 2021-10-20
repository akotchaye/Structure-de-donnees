#include<stdio.h>
int main()
{
 int A[50],B[50],*pa,*pb,n,m;
 printf("dimmension de A: ");
 scanf("%d",&n);
 printf("dimmension de B: ");
 scanf("%d",&m);
 printf("enter les elements du tableau A:\n");
 for(pa=A;pa<A+n;pa++)
 {
  printf("entrer l'element %d: ",pa-A+1);
  scanf("%d",pa);
 }
 printf("enter les elements du tableau B:\n");
 for(pb=B;pb<B+m;pb++)
 {
  printf("entrer l'element %d: ",pb-B+1);
  scanf("%d",pb);
 }
 printf("patienter...\n");
 for(pa=A,pb=B;pa<A+n+m;pa++,pb++)
 {
     *(pa+n)=*pb;

 }
 printf("affichage du tableau concaténé:\n");
 for(pa=A;pa<A+n+m;pa++)
 {
     printf("%d_: %d \n",pa-A+1,*pa);
 }
 return 0;

}
