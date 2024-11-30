// JUEGO ADIVINA UN NUMERO
// VERSIÓN 1. METO YO EL NÚMERO A ADIVINAR
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n = 0; //este es el numero a adivinar
	int m = 0; // esta es la modalidad del juego: 1 hasta que aciertes y 2 tienes 10 oportunidades
	int j = 0; // este es la variable que guarda el numero que vas metiendo a ver si lo adivinas
	
	printf ("Introduce el numero que se ha de adivinar: ");
	scanf ("%d",&n);
	system ("cls");
	
	printf ("Introduce la modalidad del juego\n");
	printf ("1.- Prueba hasta que aciertes\n");
	printf ("2.- Tienes 10 oportunidades\n");
	scanf ("%d",&m);
	
	if (m==1)
	{
		system ("cls");
		printf ("MODALIDAD PRUEBA HASTA QUE ACIERTES\n");
		printf ("\n");
		while (j!=n)
		{
			
			printf ("Introduce numero: ");
			scanf ("%d",&j);
			if (j<n)
				printf ("TE HAS QUEDADO CORTO\n");
			else if (j>n)
				printf ("TE HAS PASADO\n");
			else
				printf ("ACERTASTE");
		}
	}
	else if (m==2)
	{
		system ("cls");
		printf("MODALIDAD TIENES 10 OPORTUNIDADES\n");
		printf("\n");
		for (int i=1; i<=10; i++)
		{
			printf ("Introduce numero: ");
			scanf ("%d",&j);
			if (j<n)
				printf ("TE HAS QUEDADO CORTO\n");
			else if (j>n)
				printf ("TE HAS PASADO\n");
			else
			{
				printf ("ACERTASTE");
				break;
			}
		}
	}
	else
	printf ("MODALIDAD ELEGIDAD NO VALIDA");
	
}
		
		
		
	
