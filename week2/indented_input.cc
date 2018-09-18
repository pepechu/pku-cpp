/* indented input */
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

string pad(int size) {
	string result = "";
	for (int i = 0; i < size; i++) {
		result += " ";
	}
	return result;
}

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	cout << pad(8 - a.size()) << a << " "
		 << pad(8 - b.size()) << b << " "
		 << pad(8 - c.size()) << c << endl;
	return 0;
}