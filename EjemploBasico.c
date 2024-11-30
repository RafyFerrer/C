/* Este programa muestra la estructura básica de un programa C es decir:
 * Primero tenemos en cuenta la inclusión de librerías (archivos que contienen las sentencias que usaremos). Usaremos dos librerías base:
 * stdlib.h y stdio.h
 * Segundo tenemos en cuenta la definición de bloques de código (funciones, procedimientos o métodos). En este programa básico utilizamos
 * un solo bloque. Este es el bloque principal que siempre ha de existir y se llama main.
 * El programa realiza lo siguiente:
 * leer A
 * leer B
 * C=A+B
 * Escribir en pantalla C
 */
 
 // Primero empezamos con la inclusión de librerías en el programa
 
 #include <stdio.h>
 #include <stdlib.h>
 
 // Segundo definimos el bloque principal de código. En este ejemplo, el bloque devuelve un resultado de tipo entero
 
 int main()
 {
	 // Lo primero que hemos de hacer es definir las variables que hay en el programa. En este caso son 3 que son: A, B y C
	 
	 int A=0;
	 int B=0;
	 int C=0;
	 
	 // Lo siguiente que hacemos es solicitar al teclado que espere la entrada de un dato y lo asigne a cada variable. En este caso a A y a B.
	 
	 scanf("%d",&A);
	 scanf("%d",&B);
	 
	 // Lo siguiente es sumar el contenido de A + el de B y asignarlo a la variable C
	 
	 C=A+B;
	 
	 // por último escribimos por pantalla lo que tiene C (es decir, la suma de los dos números
	 
	 printf("El resultado de sumar el contenido de %d y el contenido de %d es igual a %d",A,B,C);
	 
	 // El programa ya lo tenemos terminado, pero nos falta la última instrucción que es devolver el resultado a la función main
	 
	 return C;
}
