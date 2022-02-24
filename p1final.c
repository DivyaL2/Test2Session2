#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the values of x and y\n ");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  *distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("The distance between the two points (%f,%f) and (%f,%f)is %f\n",x1,y1,x2,y2,distance);
}
int main()
{
  float a1,b1,a2,b2,distance;
  input(&a1,&b1,&a2,&b2);
  find_distance(a1,b1,a2,b2,&distance);
  output(a1,b1,a2,b2,distance);
  return 0;    
}


