#include <stdio.h>
int main()
	{
	int a;
	printf("Introduce un numero del 1 al 10\n");
	scanf("%d",&a);
	switch (a)
		{
		case 1: 
			printf("Suspenso\n");
			break;
		case 2: 
			printf("Suspenso\n");
			break;
		case 3: 
			printf("Suspenso\n");
			break;
		case 4: 
			printf("Suspenso\n");
			break;
		case 5: 
			printf("Aprobado\n");
			break;
		case 6: 
			printf("Aprobado\n");
			break;
		case 7:
			printf("Notable\n");
			break;
		case 8:
			printf("Notable\n");
			break;
		case 9:
			printf("Sobresaliente\n");
			break;
		case 10:
			printf("Sobresaliente\n");
			break;
	
		default:
			printf("Error\n");
		}
		return 0;
	}

