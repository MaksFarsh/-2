#include <stdio.h>
#include <locale.h>
void main() {
	//Задание № 15
	setlocale(LC_ALL, "RUS");
	int x, s, l, price, length;
	x = 50;
	s = 400;
	l = 100;
	length = s / (l / 100);
	price = length * x;
	printf("Грей заплатил за %d метров ткани %d золотых", length, price);
}