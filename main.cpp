 #include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void circle()
{
	int Radius, Area, Perimetr;
	printf("Enter Radius");
	cin >> ("%d", Radius);
	Area = 3.14 * Radius * Radius;
	Perimetr = Radius * 2 * 3.14;
	printf("perimetr: ");
	cout << ("%d", Perimetr);
	printf(" area: ");
	cout << ("%d", Area);
}

int main()
{
	int n;
	printf("Enter type of Fucntion \n");
	cin >> ("%d", n);
	switch (n) {
	case 1:
		circle();
		break;
	default:
		printf("Error");
	}
}
