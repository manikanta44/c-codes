#include<stdio.h>
main()
{
  int a[100],n,high,low,sum=0,sum1=0,c,i;
  printf("enter the number of members ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("enter the nubmbers");
      scanf("%d",&a[i]);
       sum=sum+a[i];
  }
  high=a[0];
  low=a[0];
  for(i=1;i<n;i++)
  {
      if(a[i]<low)
      {
        low=a[i];
      }
      if(a[i]>high)
      {
          high=a[i];
      }
  
  }
  sum1=n/2*((2*low)+(n-1));
  c=sum1-sum;
  printf("the missed number is %d",c);
}  
