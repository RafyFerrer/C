/* Este programa es para resolver la Ley de Dolbear, es decir, dado el número de chirridos por minuto de un grillo calcular la temperatura exterior
 * 
 * Primero tenemos en cuenta la inclusión de librerías (archivos que contienen las sentencias que usaremos). Usaremos dos librerías base:
 * stdlib.h y stdio.h
 * Segundo tenemos en cuenta la definición de bloques de código (funciones, procedimientos o métodos). En este programa básico utilizamos
 * un solo bloque. Este es el bloque principal que siempre ha de existir y se llama main.
 * 
 * El programa realiza lo siguiente:
 * Escribir en pantalla Introduce el valor del número de chirridos por minuto de un grillo
 * leer N60
 * TC=10+((N60-40)/7)
 * Escribir en pantalla La Temperatura exterior es (valor de TC)
 */
 
 // Primero empezamos con la inclusión de librerías en el programa
 
 #include <stdio.h>
 #include <stdlib.h>
 
 // Segundo definimos el bloque principal de código. En este ejemplo, el bloque devuelve un resultado de tipo entero
 
 int main()
 {
	 // Lo primero que hemos de hacer es definir las variables que hay en el programa. En este caso son 2 que son: N60 y TC
	 
	 int N=0;
	 float T=0;
	 	 
	 // Lo siguiente que hacemos es solicitar al teclado que espere la entrada de un dato y lo asigne a la variable N60.
	 
	 printf("Introduce el valor del numero de chirridos por minuto del grillo\n");
	 scanf("%d",&N);
	
	 
	 // Lo siguiente es calcular la formula y asignar el resultado a la variable que guarda la temperatura TC
	 
	 T=10+((N-40)/7);
	 
	 // por último escribimos por pantalla lo que tiene TC (es decir, el resultado de la formula)
	 
	 printf("El resultado de la temperatura para %d chirridos por minuto es %f\n",N,T);
	 
	 // El programa ya lo tenemos terminado, pero nos falta la última instrucción que es devolver el resultado a la función main
	 
	 return 0;
}
