#include<stdio.h>
/**procedure tri_bulle*/
void tri_bulle(int tab[50],int n)
{
 int tmp,i,j;
 for(j=1;j<=n;j++)
 {

   for(i=0;i<=n-2;i++)
   {
     if(tab[i]>tab[i+1])
     {
      tmp=tab[i];
      tab[i]=tab[i+1];
      tab[i+1]=tmp;
     }
   }
 }
}
/**procedure d'initialisation*/
void initab_dim1(int tab[50],int n)
{
int i;
printf("\n");
  for(i=0;i<=n-1;i++)
  {
      printf("entrer un entier : ");
      scanf("%d",&tab[i]);
      printf("\n");
  }
}
/**procedure d'affichage du tableau*/
void afftab_dim1(int tab[50],int n)
{
 int i;
 for(i=0;i<=n-1;i++)
   printf("%d ",tab[i]);
}
/**procedure tri_indice*/
void tri_indice(int tab[50],int n)
{
 int i,j,tmp,indMin;
for(i=0;i<=n-1;i++)
{
    indMin=i;
    for(j=i+1;j<=n;j++)
    {
        if(tab[j]<tab[indMin])
        indMin=j;

    }
    tmp=tab[indMin];
    tab[indMin]=tab[i];
    tab[i]=tmp;
}

}
/**procedure tri_fusion*/
void tri_fusion(int tab0[50],int tab1[50] ,int tab2[50],int a,int b)
{
    int i=0,j=0,k=0;
    while(i<a && j<b)
    {
        if(tab0[i]<tab1[j])
        {
            tab2[k]=tab0[i];
            i++;
            k++;
        }
        else
        {
            tab2[k]=tab1[j];
            j++;
            k++;
        }
      }

 while (i<a)
    {
     tab2[k]=tab0[i];
     i++;
     k++;
    }
    while (j<b)
    {
        tab2[k]=tab1[j];
        j++;
        k++;
    }
}

/**procedure tri_insertion*/
void tri_insertion(int tab[50],int n)
{
 int i,j,front;
for(i=1;i<=n-1;i++)
{
    front=tab[i];
    j=i;
    while(j>0 && tab[i-1]>front)
    {
        tab[j]=tab[j-1];
        j--;
    }
    tab[j]=front;
}
}
/**programme principal*/
int main()
{
  int t[50],t0[50],t1[50],t2[50],m;
  printf("entrer le nombre d'element du tableau: ");
  scanf("%d",&m);
  printf("\n");
  initab_dim1(t,m);
  tri_bulle(t,m);
  printf("affichage du tableau tri_bulles :");
  afftab_dim1(t,m);
  printf("\n");
  tri_indice(t,m);
  printf("\n");
  printf("affichage du tableau tri_indice :");
  afftab_dim1(t,m);
  printf("\n");
  tri_insertion(t,m);
  printf("\n");
  printf("affichage du tableau tri_insertion :");
  afftab_dim1(t,m);
  printf("\n");
  printf("\n");
  printf("initialisation et tri du tableau t1(10):");
  printf("\n");
  initab_dim1(t1,10);
  tri_indice(t1,10);
  printf("initialisation et tri termine ...\n");
  printf("\n");
  printf("affichage du tableau trie t1: ");
  afftab_dim1(t1,10);
  printf("\n");
  printf("\n");
  printf("initialisation et tri du tableau t2(5):");
  printf("\n");
  initab_dim1(t2,5);
  tri_indice(t2,5);
  printf("initialisation et tri termine ...");
  printf("\n");
  printf("\n");
  printf("affichage du tableau trie t2: ");
  afftab_dim1(t2,5);
  printf("\n");
  printf("\n");
  printf("tri par fusion sur t2 , t1 dans t0:\n");
  tri_fusion(t2,t1,t0,5,10);/**pas besoin d'initialiser t0*/
  printf("\n");
  printf("affichage du tableau trie par fusion t0: ");
  afftab_dim1(t0,15);
  printf("\n");
  return 0;
}
