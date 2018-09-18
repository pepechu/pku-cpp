/* sphere */
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

const double pi = 3.14;

int main() {
	double r;
	cin >> r;
	double v = (4.0 / 3) * pi * pow(r, 3);
	printf("%.2lf\n", v);
}