#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *day_name(int i)
{
    

    static char x[7][10]={"monday","tuesday","wednesday","thursday","friday","sateday","sunday"};
    
    return x[i-1];

}

int main()
{
	int d;
	printf("enter the day  number: ");
	scanf("%d",&d);

    char *day=day_name(d);
	puts(day);
	return 0;
}