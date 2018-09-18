/* elephant */
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

const double pi = 3.14159;
const double feed = 20000;

int main() {
	double h, r;
	cin >> h >> r;
	double v = pi * pow(r, 2) * h;
	printf("%d", (int) ceil(feed / v));
}