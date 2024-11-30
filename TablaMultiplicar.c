 #include <stdio.h>
 #include <stdlib.h>
 
  int main()
 {
	 	 
	 int numero=0;
	 int r=0;
	 
	 printf ("Introduce un numero \n");
	 scanf("%d",&numero);
	 
	 for (int i=0;i<=10;i++)
	 {
		 r=numero*i;
		 printf ("%d X %d = %d\n",numero,i,r);
	 	
		
	 }
		
	 	 
	 return 0;
}
