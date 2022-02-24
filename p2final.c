#include <stdio.h>
#include <math.h>
void input_line(float *x1, float *y1, float *x2, float *y2,float *x3,float *y3)
{
  printf("enter the values of x and y\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int input_triangle(float x1, float y1, float x2, float y2, float x3,float y3)
{
  int a,b,c;
  a=sqrt(pow((x2-x1),2)+pow((y2-y2),2));
  b=sqrt(pow((x2-x1),2)+pow((y2-y2),2));
  c=sqrt(pow((x2-x1),2)+pow((y2-y2),2));
  if((a+b)>c && (b+c)>a && (c+a)>b)
    return 1;
  else
    return 0;
}    
void output(float x1, float y1,float x2, float y2, float x3,float y3,int is_triangle)
{
  if(is_triangle==1)
    printf("the points (%f,%f),(%f,%f)and (%f,%f) form 
    a  triangle",x1,y1,x2,y2,x3,y3);
  else
    printf("the points (%f,%f),(%f,%f)and (%f,%f) do not 
    form a triangle \n",x1,y1,x2,y2,x3,y3);
    
}
int main()
{
  float x1,y1,x2,y2,x3,y3,;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  int t=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,t);
  return 0;
}
