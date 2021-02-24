#include <iostream>
#include <random>
#include <time.h>

int main() 
{
	int num = rand() % 7 + 1;
	if (num == 1) {
		system("color 01");
	} else if (num == 2) {
		system("color 02");
	} else if (num == 3) {
		system("color 03");
	} else if (num == 4) {
		system("color 04");
	} else if (num == 5) {
		system("color 05");
	} else if (num == 6) {
		system("color 06");
	} else if (num == 7) {
		system("color 07");
	}
	std::cout << "Hello world!";
	system("cls");
	return main();
}
