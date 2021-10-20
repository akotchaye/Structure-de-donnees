#include<stdio.h>
#include<math.h>

typedef struct
{
int x,y;

}point;
double distance(point a, point b)
{
    double d,d1,d2;
    d1=b.x-a.x;
    d2=b.y-a.y;
    d=sqrt((double)((d1*d1)+(d2*d2)));
    return d;
}
int compare(point a,point b)
{
    if(a.x==b.x && a.y==b.y)
    return 1;
    return 0;
}

void saisie(point a,point b)
{
    printf("coordonnees des points: \n");
    printf("abscisse de A: ");
    scanf("%d",&a.x);
     printf("abscisse de B: ");
    scanf("%d",&b.x);
     printf("ordonnee de A: ");
    scanf("%d",&a.y);
     printf("ordonnee de B: ");
    scanf("%d",&b.y);

}
double affichage(point a,point b)
{ int r;
    printf("la distance entre A et B est: %lf \n",distance(a,b));
    r=compare(a,b);
    if(r==1)
    printf("le point A est confondu au point B.");
    else
    printf("les points A et B sont distant.");

}
int main()
{
    point e;
    point f;
saisie(e,f);
affichage(e,f);
}
