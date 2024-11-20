#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *string2(char *string,char s,int n)
{  char *x=(char*)calloc(n,sizeof(char));
    int m=0;
    for(int i=0;i<n;i++)
    {
      if (string[i]!=s)
      {
        x[m]=string[i];
        m++;
      }
    }

    return x;

}
int main(){
    int i=0;
    char string[50],s;
 
    printf("enter the string1: ");
    fgets(string,50,stdin);
    string[strlen(string)-1]='\0';
    int y=strlen(string);

    printf("enter the character");
    scanf("%c",&s);

    char *k =string2(string,s,y);

    puts(k);
   
    
    return 0;



}