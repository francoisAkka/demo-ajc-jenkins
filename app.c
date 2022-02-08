#include <stdio.h>

int square(int a) {
	return a * a;
}


int main() {

	printf("%s", "Simple programme en C\n");
  printf("%s", " .... pour apprendre le CI/CD ... avec Jenkins");
  printf("\nLe resultat de 4 au carre est %d\n", square(4));
  printf("\nLe resultat de 25 au carre est %d\n", square(25));

	return 0;
}
