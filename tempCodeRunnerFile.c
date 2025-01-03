#include <stdio.h>
#include <stdlib.h>


#include<string.h>
int romanToInt(char* s) {
    int n = strlen(s);
    int sum=0,i=0;
    while(i<n)
    {
        if(s[n-i-1]=='I')
        sum+=1;
        if(s[n-i-1]=='V')
        sum+=5;
         if(s[n-i-1]=='X')
        sum+=10;
         if(s[n-i-1]=='L')
        sum+=50;
         if(s[n-i-1]=='C')
        sum+=100;
         if(s[n-i-1]=='D')
        sum+=500;
         if(s[n-i-1]=='M')
        sum+=1000;
        i++;
    }
    return sum;
}
int main() {
    // Write C code here
 
   char c[]="XI";
printf( "%d",romanToInt(c));

    return 0;
}
