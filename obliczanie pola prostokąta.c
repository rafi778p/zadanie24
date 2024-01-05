#include <stdio.h>
#include <math.h>

float pole_kola(float r) {
    return(M_PI*r*r);
}

void pole_kola_obsluga() {
    float r, area;

    printf("Wprowadz promien: ");
    scanf("%f", &r);

    area = pole_kola(r);

    printf("Pole kola = %f\n", pole_kola(r));
}

float pole_prostokata(float length, float width) {
	return(length * width);
}

void pole_prostokata_obsluga() {
    float length, width, area;

    printf("Wprowadz dlugosc prostokata: ");
    scanf("%f", &length);
    printf("Wprowadz szerokosc prostokata: ");
    scanf("%f", &width);

    area = pole_prostokata(length, width);

    printf("Pole prostokata = %f", area);
}

int main()
{
	pole_prostokata_obsluga();
	pole_kola_obsluga();

    return 0;
}
