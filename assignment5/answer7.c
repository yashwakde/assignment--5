#include<stdio.h>
int main()
{
  int i,n;
   printf("enter a number:\n");
  scanf("%d%d",&i,&n);
  
  for (i;i>=n;i-=2)
  {
    printf("%d\n",i);
  }
  return 0;
}