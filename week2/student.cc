/* student */
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

class student {
public:
	student(string name,
		int age,
		string number,
		int ave_year_1,
		int ave_year_2,
		int ave_year_3,
		int ave_year_4) :
		name_(name),
		age_(age),
		number_(number),
		ave_year_1_(ave_year_1),
		ave_year_2_(ave_year_2),
		ave_year_3_(ave_year_3),
		ave_year_4_(ave_year_4) {}
	int CalculateAve() {
		return (int) ((ave_year_1_ * 1.0 + ave_year_2_ + ave_year_3_ + ave_year_4_) / 4);
	}
	string GetName() { return name_; }
	int GetAge() { return age_; }
	string GetNumber() { return number_; }
private:
	string name_;
	int age_;
	string number_;
	int ave_year_1_;
	int ave_year_2_;
	int ave_year_3_;
	int ave_year_4_;
};

int main() {
	string name;
	int age;
	string number;
	int ave_year_1;
	int ave_year_2;
	int ave_year_3;
	int ave_year_4;
	cin >> name >> age >> number >> ave_year_1 >> ave_year_2 >> ave_year_3 >> ave_year_4;
	student s(name, age, number, ave_year_1, ave_year_2, ave_year_3, ave_year_4);
	cout << s.GetName() << "," << s.GetAge() << "," 
		<< s.GetNumber() << "," << s.CalculateAve() << endl;
	return 0;
}