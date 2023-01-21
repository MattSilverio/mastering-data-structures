// O que aconteceria se você incrementasse os valores dos parâmetros, dentro da função? Quais seriam seus valores dentro da função? E fora dela? Teste e explique por quê.

#include <stdio.h>
#include <stdLib.h>
void inc(int m, int n)
{
	m++;
	n++;
	printf ("\ninc M: %d\n",m); 
	printf ("inc N: %d\n",n);
}

int main()
{
	int n, m;
	printf("Digite m: ");
	scanf ("%d", &m);

	printf("Digite n: ");
	scanf ("%d", &n);

	//passando 'm' e 'n' por parametros
	inc(m, n); 
	printf ("\nMain M: %d\n",m); 
	printf ("Main N: %d\n",n);

	return 0;
}

// Com as variáveis sendo passadas por parâmetro é feito uma cópia das mesma para a função logo ao incrementá-las dentro da função são alteradas somente as cópias por isso que ao imprimí-las dentro da função temos valores diferentes das impressas no Main.