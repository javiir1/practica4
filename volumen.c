#include <stdio.h>
#define Pi 3.1415
int main()
	{
	int a;
	float r, h, l1, l2, sol1, sol2;
	printf("Dame una opcion\n");
	scanf("%d",&a);
	switch (a)
	{
	case 1: 
		printf("dame el radio\n");
		scanf("%f",&r);
		printf("dame la altura\n");
		scanf("%f",&h);
		sol1=(Pi/3)*(r*r)*h;
		printf("El volumen del cono es %f\n", sol1);
		break;
	case 2: 
		printf("dame el lado1\n");
		scanf("%f",&l1);
		printf("dame el lado2\n");
		scanf("%f",&l2);
		printf("dame la altura\n");
		scanf("%f",&h);
		sol2=l1*l2*h;
		printf("El volumen del ortoedro es %f\n", sol2);
		break;
	default:printf("Error\n");
	}
return 0;
}
