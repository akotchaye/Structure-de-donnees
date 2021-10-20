#include<stdio.h>
#include<string.h>
int main()
{
 char ch[50],c,*p;
 printf("un mot:\n");
 gets(ch);
 printf("caractere a supprimer: ");
 c=getchar();
 for(p=ch;p!="\0";p++)
{
    if(*p!=c)
    strcpy(ch,*p);
}
printf("%s",ch);


}
