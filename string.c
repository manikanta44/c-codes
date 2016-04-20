#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    clrscr();
    printf("enter characters");
    scanf("%s",a);
    printf("enter limits");
    scanf("%d%d",&n,&m);
    for(i=n;i<m;i++)
    {
      printf("%c",a[i]);
    }getch();
}
