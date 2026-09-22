#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define A 63241.077
void main() {
	setlocale(LC_ALL, "RUS");
	int lightYear;
	float result;
	puts("Введите число световых лет");
	scanf("%d", &lightYear);
	result = A*lightYear;
	printf("%d световых лет равняется %.2f в астрономических единицах", lightYear, result);
}