 #include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
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
