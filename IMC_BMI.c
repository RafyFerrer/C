/* Este programa es para calcular el IMC (o BMI en ingles) dado peso y altura del individuo
 * 
 * Primero tenemos en cuenta la inclusión de librerías (archivos que contienen las sentencias que usaremos). Usaremos dos librerías base:
 * stdlib.h y stdio.h
 * Segundo tenemos en cuenta la definición de bloques de código (funciones, procedimientos o métodos). En este programa básico utilizamos
 * un solo bloque. Este es el bloque principal que siempre ha de existir y se llama main.
 * 
 * El programa realiza lo siguiente:
 * Escribir en pantalla Introduce el Peso en Kg
 * leer Kg
 * Escribir en pantalla Introduce la altura en m
 * leer m
 * BMI=kg/(m*m)
 * Escribir en pantalla el IMC es (valor de BMI)
 */
 
 // Primero empezamos con la inclusión de librerías en el programa
 
 #include <stdio.h>
 #include <stdlib.h>
 
 // Segundo definimos el bloque principal de código. En este ejemplo, el bloque devuelve un resultado de tipo entero
 
 int main()
 {
	 // Lo primero que hemos de hacer es definir las variables que hay en el programa. En este caso son 2 que son: N60 y TC
	 
	 float kg=0;
	 float m=0;
	 float bmi=0;
	 	 
	 // Lo siguiente que hacemos es solicitar al teclado que espere la entrada de un dato y lo asigne a la variable Kg y la altura a la variable m.
	 
	 printf("Introduce el peso en Kg\n");
	 scanf("%f",&kg);
	 printf("Introduce la altura en m\n");
	 scanf("%f",&m);
	
	 
	 // Lo siguiente es calcular la formula y asignar el resultado a la variable que guarda el IMC
	 
	 bmi=kg/(m*m);
	 
	 // A continuación hacemos las comprobaciones con If
	 
	 if (bmi<18.5)
	 
		printf("El IMC es %f y por lo tanto es de Bajo Peso\n",bmi); 
		
	 else if (bmi>=18.5 && bmi<24.9)
	 
		printf("El IMC es %f y por lo tanto es de peso normal\n",bmi);
		
	 else if (bmi>=24.9 && bmi<29.9)
		
		printf("El IMC es %f y por lo tanto tiene sobrepeso\n",bmi);
		
	 else
	 
		printf("El IMC es %f y por lo tanto es Obeso\n",bmi);
	 
	
	 
	 // El programa ya lo tenemos terminado, pero nos falta la última instrucción que es devolver el resultado a la función main
	 
	 return 0;
}
