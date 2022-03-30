#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  
  for(int i=0;i<n;i++)
    a[i]=i;
    a[0]=0;
    a[1]=0;
}
void erotosthenes_sieve(int n, int a[n])
{
  int i=2;
  while(i<sqrt(n))
  {
    while(a[i]==0)
    i++;
    for(int k=i+i;i<n;k+=i)
    { 
      a[k]=0;
    }
  }  
}
void out_put(int n, int a[n]);
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      printf("%d",a[i]);
    } 
    printf("/n");
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n, a);
  out_put(n,a);
  return 0;
}
