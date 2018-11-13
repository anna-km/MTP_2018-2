/* P4.c */
/* Anna Karolinna */
/* 11811EBI009 */

#include <stdio.h>

int FAckermann(int m, int n)
{
	if(m==0) 
		return n+1;
	else if(m>0 && n==0) 
		FAckermann(m-1,1);
	else if(m>0 && n>0) 
		FAckermann(m-1, FAckermann(m, n-1));
}

int main ()
{
	int a, b;
	printf("digite o valor m:");
	scanf("%d", &a);
	printf("digite o valor n:");
	scanf("%d", &b);
        printf(": \nresulta em: %d", FAckermann(a,b));
	return 0;
}
