#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

float *root(int *p1)
{
   float *z =(float*)calloc(2,sizeof(float));
   int a = *(p1);
   int b = *(p1+1);
   int c = *(p1+2);
   float d = sqrt(b*b-(4*a*c));
   if (d>=0&&a!=0)
   {z[0]= (-b+d)/(2.0*a);
   z[1]=  (-b-d)/(2.0*a);}

   else
   { 
    if (a==0)
     printf("only one root possible");
    else
     printf("the roots of the given equation are imaginaray ");
    exit(1);
   }

   float *p2=z;

   return p2;

}

 int main ( )
{ 
  
  int qua[3];
  printf("enter the coefficents of the quadratic equation\n");
  for(int i=0;i<3;i++)
  {
   scanf("%d",&qua[i]);
  }
  int *p1 = qua;

  float *p2 = root(p1);

  printf("roots of the equation are ");
  for(int i=0;i<2;i++)
  {
    printf("%f\n",*(p2+i));
  }
  free(p2);
  return 0;
}
