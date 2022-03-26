#include<stdio.h>
typedef struct _fraction
{
  int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction a;
  printf("Enter the values\n");
  scanf("%d %d",&a.num,&a.den);
  return a;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{ 
  float a,b,c;
  float A=(1/f1.den),B=(1/f2.den),C=(1/f3.den);
  a=(f1.num)*A;
  b=(f2.num)*B;
  c=(f3.num)*C;
  if(a<b && a<c)
  {
    return f1;
  }
  else if(b<c)
  {
    return f2;
  }
  else
  {
    return f3;
  }
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("The smallest number among %d/%d,%d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
  Fraction a,b,c,lar;
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
  lar=Largest_fraction(a,b,c);
  output(a,b,c,lar);
  return 0;
}