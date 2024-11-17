/*Write a function that receives a sorted array of integers and an integer value, and inserts the
value in its correct place.*/
#include<stdio.h>
#include<stdlib.h>
int *array(int *p1,int n,int m)
{
   int *array= (int*)calloc(n+1,sizeof(int));
   int i,j;
   for (i=0;i<n+1;i++)
   {
    if (p1[i]>m)
    {
        array[i]=m;
        for (j=i;j<n;j++)
        {
            array[j+1]=p1[j];
        }
        break;
    }
    else
    array[i]=p1[i];
   }
    return array;    
}


int main(){
	int n,t,i,j,k;
	int sum=0;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int *a = (int*)calloc(n,sizeof(int));
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
	for(i=0;i<n-1;i++)
	 {
	 for ( j=0;j<n-i-1;j++)
	  {
	  if (a[j]>a[j+1])
	  {
	    t=a[j+1];
	    a[j+1]=a[j];
	    a[j]=t;
      }
       }
     }
     
     int z;
     printf("enter the integer you want to add");
     scanf("%d",&z);
     int *p2= array(a,n,z);

     printf("now the new array is \n");

     for(i=0;i<n+1;i++)
     {
        printf("%5d",*(p2+i));
     }

    free(p2);
    free(a);
    return 0;

}