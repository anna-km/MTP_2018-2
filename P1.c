/* P1.c */
/* Anna Karolinna de Sousa Machado */
/* 11811EBI009 */

#include <stdio.h>
int main ()
{
	int auxe = 0, a = 0;
	char bits [256];
	printf ("Digite o numero binario a ser verificado: \n");
	fgets (bits, 256, stdin);
	while (bits[a] != '\0')
	{
		if (auxe == 0 && bits [a] == '0')
			auxe = 0;
		else if (auxe == 0 && bits [a] == '1')
			auxe = 1;
		else if (auxe == 1 && bits [a] == '1')
			auxe = 0;
		else if (auxe == 1 && bits [a] == '0')
			auxe = 2;
		else if (auxe == 2 && bits [a] == '0')
			auxe = 1;
		else if (auxe == 2 && bits [a] == '1')
			auxe = 2;
		a++;
	}

	printf ("Sequencia original: %s \n", bits);
	if (auxe == 0)
		printf ("Eh multiplo de 3.");
	else
		printf ("Nao eh.");

	return 0;
}
