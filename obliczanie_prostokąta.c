#include <stdio.h>

float cuboid_volume(float a, float b, float h) {
	return(a*b*h);
}

int main() {
	float a, b, h;
	
	printf("Podaj dlugosc podstawy a: ");
	scanf("%f", &a);
	
	printf("Podaj dlugosc podstawy b: ");
	scanf("%f", &b);

	printf("Podaj wysokosc h: ");
	scanf("%f", &h);
	
	if (a > 0 && b > 0 && h > 0.0) {
		printf("Objetosc prostopadloscianu: %f\n", cuboid_volume(a, b, h));
	}
	else {
		printf("Nieprawidlowe dane wejsciowe!\n");
	}
	
	return(0);
}
