#include<stdio.h>
#include<math.h>
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
    {
      a[i]=i+1;
    }
  }
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=1;i<n;i++)
    {
      if(a[i]==0)
        continue;
      for(j=1+1;j<=n;j++)
        {
          if(j%a[i]==0)
            a[j]=0;
          } 
        }
          
    }
}
