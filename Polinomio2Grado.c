/* Este programa es para resolver un polinomio de 2º grado solicitando X por pantalla
 * 
 * Primero tenemos en cuenta la inclusión de librerías (archivos que contienen las sentencias que usaremos). Usaremos dos librerías base:
 * stdlib.h y stdio.h
 * Segundo tenemos en cuenta la definición de bloques de código (funciones, procedimientos o métodos). En este programa básico utilizamos
 * un solo bloque. Este es el bloque principal que siempre ha de existir y se llama main.
 * 
 * El programa realiza lo siguiente:
 * Escribir en pantalla Introduce el valor de X
 * leer X
 * R=5*X*X+10*X+6 es decir 5X2 + 10X + 6
 * Escribir en pantalla El resultado del polinomio 5X2 + 10X +6 es (valor de R)
 */
 
 // Primero empezamos con la inclusión de librerías en el programa
 
 #include <stdio.h>
 #include <stdlib.h>
 
 // Segundo definimos el bloque principal de código. En este ejemplo, el bloque devuelve un resultado de tipo entero
 
 int main()
 {
	 // Lo primero que hemos de hacer es definir las variables que hay en el programa. En este caso son 3 que son: X y R
	 
	 int X=0;
	 int R=0;
	 	 
	 // Lo siguiente que hacemos es solicitar al teclado que espere la entrada de un dato y lo asigne a la variable X.
	 
	 printf("Introduce el valor de X\n");
	 scanf("%d",&X);
	
	 
	 // Lo siguiente es calcular el polinomio y asignarlo a la variable que guarda el resultado R
	 
	 R=(5*X*X)+(10*X)+6;
	 
	 // por último escribimos por pantalla lo que tiene R (es decir, el resultado del polinomio)
	 
	 printf("El resultado del polinomio 5X2 + 10X +6 es %d\n",R);
	 
	 // El programa ya lo tenemos terminado, pero nos falta la última instrucción que es devolver el resultado a la función main
	 
	 return 0;
}
