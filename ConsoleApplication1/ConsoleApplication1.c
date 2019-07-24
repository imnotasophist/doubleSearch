#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int guess = 50;
	int max = 100, min = 0;

	printf("Загадайте число от 1 до 100\n");
	printf("Ваше число %d?\n", guess);

	while (getchar() != 'y') {
		printf("Ваше число больше?\n");
		getchar();
		if (getchar() == 'y') {
			min = guess;
			guess += (max - min) / 2;
		}
		else {
			max = guess;
			guess -= (max - min) / 2;
		}
		printf("Ваше число %d?\n", guess);
		while (getchar() != '\n') continue;
	}

	return 0;
}