#include <stdio.h>
#include <ctype.h>
// #include <math.h>
// #include <stdbool.h>

// #include <uxhw.h>

int
main()
{
	// printf("1\t2\t3\n4\t5\t6\n7\t8\t0");
	// printf("Queres meter 0que j0vem\n");
	// Vars
	// int x; 		//decarati0n
	// x = 20; 	//initiaizati0n
	// int y = 30;	//decarti0n and initiazati0n

	// int currentyear = 2023; 		//intir0
	// int bornyear = 2000; 		//intir0
	// int age = (currentyear - bornyear); 	//f0ating p0int number
	// // // float age = 2.12; 	//f0ating p0int number
	// // char grade = 'C'; 	// singe character
	// char name[] = "Felix"; 	// array 0f character

	// // // printf("f0ating in %f \n", age);

	// printf("Hello %s\n", name);
	// printf("You were born in %d \n", bornyear);
	// printf("we are in %d \n", currentyear);
	// // bool age1 = true;
	// if (age < 20)
	// {
	// 	printf("and actualy you are %d years old\n", age);
	// 	printf("and you need t0 be ab0ve 20 years old");
	// }else
	// {
	// 	printf("and actualy you are %d years old\n", age);
	// 	printf("you are apr0ved");
	// }
	
	int currentyear;
	int bornyear; 
	char name[25]; 

	printf("Ensere o teu nome:\t");
	scanf("%s",&name);
	printf("\nEnsere o teu ano de nascimento:\t");
	scanf("%d",&bornyear);
	printf("\nEnsere o ano atual:\t");
	scanf("%d",&currentyear);

	int age = (currentyear - bornyear); 
	printf("Hello %s\n", name);
	printf("You were born in %d \n", bornyear);
	printf("we are in %d \n", currentyear);
	if (age < 20)
	{
		printf("and actualy you are %d years old\n", age);
		printf("and you need to be above 20 years old to get a independece");
	}else
	{
		printf("and actualy you are %d years old\n", age);
		printf("you are aproved");
	}
	// char letter;
	// printf("Ensere uma letra:\t");
	// scanf("%s",&letter);
	// switch (letter)
	// {
	// case 'A':
	// printf("Tudo esta correndo  bem em A!\n");
	// 	break;
	// case 'B':
	// printf("Tudo esta correndo  bem em B!\n");
	// 	break;
	// case 'C':
	// printf("Tudo esta correndo  bem em C!\n");
	// 	break;
	
	// default:
	// 	break;
	// }
	// char unit;
	// float temp;
	// unit = toupper(unit);
	// printf("qua e a temperatura de hj!\n");
	// scanf("%c", &unit);
	// printf("A temperatura esta em %cc!\n", unit);



	// char operador;
	// double numb1;
	// double numb2;
	// double result;


	// printf("Escolha um operador! (+ - * /) : \t");
	// scanf("%c", &operador);
	
	// printf("digite o primeiro valor :\t");
	// scanf("%lf", &numb1);
	// printf("digite o segundo valor :\t");
	// scanf("%lf", &numb2);

	// switch (operador)
	// {
	// case '+' :
	// 	result = numb1 + numb2;
	// 	printf("A soma e = %.2lf", result);
	// 	break;
	
	// case '-' :
	// 	result = numb1 - numb2;
	// 	printf("A subtracao e = %.2lf", result);
	// 	break;
	
	// case '*' :
	// 	result = numb1 * numb2;
	// 	printf("A multiplicacao e = %.2lf", result);
	// 	break;
	
	// case '/' :
	// 	result = numb1 / numb2;
	// 	printf("A divisao e = %.2lf", result);
	// 	break;
	
	// default:
	// 	break;
	// }
	// // printf("qua e a temperatura de hj!\n");
	// // scanf("%c", &);
	// // printf("A temperatura esta em %cc!\n", unit);

	// return 0;

}
