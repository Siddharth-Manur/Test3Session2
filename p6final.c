#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter the string\n");
  scanf("%s",a);
}
int count_words(char *a)
{
  int count = 0;
  char* token = strtok(a, " ");
  while (token!= NULL) 
  {
    count++;
    token = strtok(NULL, " ");
  }

  return count;
}
void output(char *a, int count)
{
  printf("%s has %d",a,count);
}
int main()
{
  char a[100];
  int x;
  input_string(a);
  x=count_words(a);
  output(a,x);
}