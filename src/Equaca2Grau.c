#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(void){
	int grau;
	float ax, bn, x;
	double a, b, c, delta, x1, x2;
	printf("escolha o grau da equação:\n");
	scanf("%d\n", &grau);
	if(grau == 1){
		printf("Escreva o valor de X da equação:\n");
		scanf("%f\n", &ax);
		printf("Escreva o valor de B da equação:\n");
		scanf("%f\n", &bn);
		while(a != 0){
			x = (-bn) / ax;
			printf("Seu X é: %.3f \n", x);
			break;
		}
		if(a == 0){
			printf("O valor de X não pode ser igual a 0\n");
		}
	}
	if(grau == 2){
		printf("Escreva o A da equação:\n");
		scanf("%lf\n", &a);
		printf("Escreva o B da equação:\n");
		scanf("%lf\n", &b);
		printf("Escreva o C da equação:\n");
		scanf("%lf\n", &c);
		delta = (b*b) - 4 * a * c;
		printf("Seu delta é : %.3lf \n", delta);
		while(a != 0 && delta >= 0){
			x1 = ((-b) + sqrt(delta)) / 2 * a;
			x2 = ((-b) - sqrt(delta)) / 2 * a;
			printf("Seu x' = %.3lf e seu x'' = %.3lf", x1, x2);
			break;
		}	
		if(a == 0 && delta < 0){
			printf("O valor de A não pode ser igual a 0 e o delta não pode ser negativo\n");
		}
	}
	if(grau != 1 && grau != 2){
		printf("Digite um número válido");
	}	
	return 0;
}