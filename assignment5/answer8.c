#include<stdio.h>
int main()
{
  int i,n;
   printf("enter a number:\n");
  scanf("%d%d",&i,&n);
  
  for (i;i<=n;i++)
  {
    printf("%d\n",i*i);
  }
  return 0;
}