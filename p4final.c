#include<stdio.h>
int input_degree()
{
  int n;
  printf("Enter the degree\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter the value of x\t");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
 for(int i=0;i<n;i++)
   {
     printf("Enter the coefficients\t");
     scanf("%f",&a[i]);
   }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  int res=a[0];
  for(int i=1;i<n;i++)
    {
      res=res*x+a[i];
    }
  return res;
}
void output(int n,float a[n],float x,float res)
{
  for(int i=0,j=n;i<n;i++,j--)
  { 
   printf("%.1fx^%d+",a[i],j-1);
  }
  printf("at x=%.1f =%.1f",x,res);
}
int main()
{
  int x,y,z;
  x=input_degree()+1;
  y=input_x();
  float a[x];
  input_coefficients(x,a);
  z=evaluate_polynomial(x,a,y);
  output(x,a,y,z);
  return 0;
}