#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include<math.h>

 int main ( )
{  int n,m,i=0,flag=0,t;

  scanf("%d",&n);
  
  int len=(int)(log10(n)+1);
  printf("%d\n",len);
  int arr[len];
while(i<len)
{
  arr[len-1-i]=n%10;
  n=n/10;
  i++;
}

for(i=0;i<len-1;i++)
{
    if(arr[i]<arr[i+1]);
    {
      flag=1;
      break;
    }
}
if (flag==1)
printf("this is maxium possible number ");
else
{

for(i=0;i<len;i++)
{
    printf("%d",arr[i]);
}

}
}