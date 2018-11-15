/* P6.c */
/* Anna Karolinna */
/* 11811EBI009 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
  double x, y;
}ponto;

ponto *gerar_pontos(int N)
{
	int i;
	ponto *p = (ponto*) malloc(N*sizeof(ponto));
	for(i = 0; i < N; i++)
	{
    	p->x = cos(i * 2.0 * M_PI / (N - 1));
		p->y = sin(i * 2.0 * M_PI / (N - 1));
		printf("(%.3lf, %.3lf)\n", p->x, p->y);
	}
	return p;
}

int main()
{
	int N;
	ponto *p;
	printf("Entre com o numero de pontos: ");
	scanf("%d", &N); 
	getchar();
	p = gerar_pontos(N);
	free(p);
	return 0;
}


