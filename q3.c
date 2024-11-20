#include<stdio.h>
#include<stdlib.h>

int **add(int **x,int **y,int n)
{ int i,j;
  //how to declare two dimenstional array using dma
    
    int** a = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
   { 
    for(j=0;j<n;j++)
    { 
       a[i][j]=x[i][j]+y[i][j];
    }
   }

 return a;
}

int main(){
    int i, j,k;
    int n;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int** x = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        x[i] = (int*)malloc(n * sizeof(int));
    
    int** y = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        y[i] = (int*)malloc(n * sizeof(int));

    printf("enter the elements for 1st matrix in row-wise fasion: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&x[i][j]);
        
        }
    }
        printf("enter the elements for second matrix in row-wise fasion: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&y[i][j]);
        
        }
    }
    

   printf("the addition matrix is  matrix is :\n");
   int **s= add(x,y,n);
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
    printf("%4d  ",*(*(s + i) + j));
    } 
    printf("\n");
   }

   return 0;
}
