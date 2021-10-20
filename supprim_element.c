#include<stdio.h>
int main()
{
    int A[50],*p1,*p2,x,n;
    printf("entrer le nomre d'element du tableau: ");
    scanf("%d",&n);
    for(p1=A;p1<A+n;p1++)
    {
        printf("entrer l'element %d :",p1-A+1);
        scanf("%d",p1);
    }
    printf("element a supprimer :");
    scanf("%d",&x);
    for(p1=A,p2=A;p1<A+n;p1++)
    {
        if(*p1!=x)
        {
         *p2=*p1;
        p2++;
        }

    }
    printf("nouvelle liste : \n");
    for(p1=A;p1<p2;p1++)
    printf("element %d : %d \n",p1-A+1,*p1);
}
