#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("enter the number\n");
  scanf("%d %d",n,r);
}
int fact(int n)
{
  int mul=1;
  for(int i=1;i<n+1;i++)
    {
      mul=mul*i;
    } 
  return mul;
}
int ncr(int n,int r)
{
  int result;
  result=fact(n)/(fact(n-r)*fact(r));
  return result;
}
void output(int n,int r,int result)
{
  printf("%d c %d=%d",n,r,result);
}
int main()
{
  int x,y,z;
  input_n_and_r(&x,&y);
  z=ncr(x,y);
  output(x,y,z);
  return 0;
}