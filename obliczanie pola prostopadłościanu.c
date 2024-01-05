#include <stdio.h>

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
	
    return 0;
}
