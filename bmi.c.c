#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
	
	printf("indice\t\t| Condicion\n");
	printf("-----------------------------\n");
	printf("<18.5\t\t| Bajo peso\n");
	printf("18.5 a 24.9\t| Normal\n");
	printf("25.0 a 29.9\t| Sobrepeso\n");
	printf(">=30.0\t\t| Obesidad\n");
	
	return 0;
}

