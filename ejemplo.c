#include <stdio.h>
int sumar (int a,int b);
    
int main() {
    int i,c;
    

    printf("Hola Mundo\n");
    scanf("%d",&i);
    c=sumar (i,i);
    printf("el valor suma del numero %d consigo mismo es %d\n",i,c);
    return 0;
}
int sumar (int a,int b){
    return a+b;
    }
