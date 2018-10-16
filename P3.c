/* P3.c */
/* Anna Karolinna */
/* 11811EBI009 */

#include <stdio.h>

int main ()
{
	char frase[100], num[100];
	int i, j, k=0, ow;
	printf ("\nDigite a frase: ");
	fgets(frase, 100, stdin);
	for (i=0; frase[i]!='\0'; i++)
	{
		for (j=48; j<58; j++)
		{
			if (frase[i] == j)
			{
				num[k] = j;
				k++;
			}
		}
	}
	ow = atoi(num);
	printf ("\n %d", ow);
	

	return 0;
}

