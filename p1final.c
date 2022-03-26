#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter two fractions\n");
  scanf("%d %d %d %d",num1,den1,num2,den2);
}
int gcd(int a,int b)
{
  int i;
  if(a>b)
  {
    
    i=b;
  }
  else
  {
    i=a;
  }
  for(;i>0;i--)
    {
      if(a%i==0&&b%i==0)
      {
        
       return i;
      } 
    } 
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{ 
  int Rf;
  *num3=(den2*num1)+(den1*num2);
  *den3=(den1*den2);
  Rf=gcd(*num3,*den3);
  *num3=(*num3/Rf);
  *den3=(*den3/Rf);
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
}