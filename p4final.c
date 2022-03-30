#include<stdio.h>
int input()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int temp,n2=0,n1=1;
  for(int i=1;i<=n;i++)
    {
      temp=n1;
      n1=n1+n2;
      n2=temp;
    }
  return n2;
}
void output(int fibo)
{
  printf("The nth number of the given fibonacci series is %d\n",fibo);
  
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(fibo);
  return 0;
}