#include<stdio.h>
int input_size()
{ 
  int n;
  printf("Enter the size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{ 
  printf("Enter the numbers\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
 int lar=a[0],id=0;
 for(int i=1;i<n;i++)
   {
     if(lar<a[i])
     {
       lar=a[i];
       id=i;
     }
   }
  return id;
}
void output(int n,int a[n],int largest)
{
  printf("The index of the largest number among [");
  for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("]is %d",largest);
}
int main()
{
  int x,y,z;
  x=input_size();
  int a[x];
  input_array(x,a);
  y=find_largest(x,a);
  output(x,a,y);
  return 0;
}