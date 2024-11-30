/* Este programa es para calcular si un año es bisiesto viendo si el resto de la división entre 4 es 0, con lo cual es año bisiesto
 * 
 * Primero tenemos en cuenta la inclusión de librerías (archivos que contienen las sentencias que usaremos). Usaremos dos librerías base:
 * stdlib.h y stdio.h
 * Segundo tenemos en cuenta la definición de bloques de código (funciones, procedimientos o métodos). En este programa básico utilizamos
 * un solo bloque. Este es el bloque principal que siempre ha de existir y se llama main.
 * 
 * El programa realiza lo siguiente:
 * Escribir Introduce el año
 * leer anio
 * resto = anio % 4
 * si el resto es 0 el año es bisiesto
 */
 
 // Primero empezamos con la inclusión de librerías en el programa
 
 #include <stdio.h>
 #include <stdlib.h>
 
 // Segundo definimos el bloque principal de código. En este ejemplo, el bloque devuelve un resultado de tipo entero
 
 int main()
 {
	 // Lo primero que hemos de hacer es definir las variables que hay en el programa. En este caso son 2 que son: N60 y TC
	 
	 int anio=0;
	 int resto=0;
	 
	 	 
	 // Lo siguiente que hacemos es solicitar al teclado que espere la entrada del año.
	 
	 printf("Introduce el anio\n");
	 scanf("%d",&anio);
	 
	 
	 // Lo siguiente es calcular el resto
	 
	 resto=anio%4;
	 
	 // A continuación hacemos las comprobaciones con If
	 
	 if (resto==0)
	 
		printf("El anio es bisiesto"); 
		
	 else 
	 
		printf("El anio no es bisiesto");
		
	  
	 // El programa ya lo tenemos terminado, pero nos falta la última instrucción que es devolver el resultado a la función main
	 
	 return 0;
}
