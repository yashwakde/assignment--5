#include<stdio.h>
int main()
{
  int i,n,x;
   printf("enter a number:\n");
  scanf("%d%d",&n,&x);
  
  for (i=1;i<=n;i++)
  {
    printf("%dx%d=%d\n",x,i,x*i);
  }
  return 0;
}