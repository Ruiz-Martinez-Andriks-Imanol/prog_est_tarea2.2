/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 10/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Condicionales
    -Espaciado \t y el salto de renglón \n
    -Operadores lógicos
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
int ejemplar;
	//Declaración de variables
	float opcion, opcion2, opcion3,excedente, valor;
	//Entrada de datos
	printf("Introduce precio: ");
	scanf("%f", &valor);
	printf("Introduce ejemplares a vender: ");
	scanf("%d", &ejemplar);
	//Procedimiento
		opcion=5000+20000;
		opcion2=valor*0.125*ejemplar;
	if(ejemplar>4000){ //Condicionales
		opcion3=4000*valor*0.10;
		excedente=(ejemplar-4000)*valor*0.14;
		opcion3=opcion3+excedente;
	} else {
		opcion3=ejemplar*valor*0.10;
	}
	//Salida
printf("\t\t La primera opcion vale:\t-$%10.2f\n", opcion);
printf("\t\t La segunda opcion  vale:\t-$%10.2f\n", opcion2);
printf("\t\t La tercera opcion vale:\t-$%10.2f\n", opcion3);
	if ((opcion>opcion2) && (opcion > opcion3)) {
	printf("La primera opcion es la mejor ");
} else if ((opcion2>opcion) && (opcion2 > opcion3)) {
	printf("La segunda opcion es la mejor ");
} else {
	printf("La tercera opcion es la mejor ");
}
	return 0;
}
