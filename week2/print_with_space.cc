/* print_with_space */
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char a;
	int b;
	float c;
	double d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	printf("%c %d %f %lf\n", a, b, c, d);
}