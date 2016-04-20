#include<stdio.h>
#include<conio.h>
main()
{
  int a[100],count=0,i;
  printf("enter the number of bits youwill enter");
  scanf("%d",&n);
  printf("enter bits");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]==1)
      {
        count++;
      }
  }
  for(i=count;i>0;i--)
  {
    printf("1");
    
  }
  for(i=n-count;i>0;i--)
  {
    printf("0");
    
  }
  }
