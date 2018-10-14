/* P3.c */
/* Anna Karolinna */
/* 11811EBI009 */

#include <stdio.h>

int main ()
{
	char frase[100];
	int num[100]={0}, i, j, k=0, cont=0, flag=0;
	printf ("\nDigite a frase: ");
	fgets(frase, 100, stdin);
	for (i=0; frase[i]!='\0'; i++)
	{
		for (j=48; j<58; j++)
		{
			if (frase[i] == j)
			{
				flag++;
				num[k] = j;
				k++;
			}
		}
	}

	for (k=0; k<flag; k++)
	{
		for (i=0, j=48; j<58; i++, j++)
		{
			if (num[k] == j)
			{
				num[k] = i;
				printf ("%d", num[k]);	
				cont++;
			}
		}
	}
	if (cont ==0)
		printf ("0");
	

	return 0;
}

