#include<stdio.h>
#include<math.h>
int input_number()
{
   int n;
   printf("enter any number\n");
   scanf("%d",&n);
   return n;
}
int is_prime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
     return 0; 
    }
    
  } 
  return 1;  
}
void output(int n, int is_prime)
{
  if(is_prime==0)
  {
    printf("%d is not a prime number\n",n);
  }
  else
  {
    printf("%d is a prime number\n",n);
    
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
}
