/* student */
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

class student {
public:
	student(char* name,
		int age,
		char* number,
		int ave_year_1,
		int ave_year_2,
		int ave_year_3,
		int ave_year_4) :
		age_(age),
		ave_year_1_(ave_year_1),
		ave_year_2_(ave_year_2),
		ave_year_3_(ave_year_3),
		ave_year_4_(ave_year_4) {
			strcpy(name_, name);
			strcpy(number_, number);
		}
	int CalculateAve() {
		return (int) ((ave_year_1_ * 1.0 + ave_year_2_ + ave_year_3_ + ave_year_4_) / 4);
	}
	char* GetName() { return name_; }
	int GetAge() { return age_; }
	char* GetNumber() { return number_; }
private:
	char name_[30];
	int age_;
	char number_[10];
	int ave_year_1_;
	int ave_year_2_;
	int ave_year_3_;
	int ave_year_4_;
};

int main() {
	char name[30];
	int age;
	char number[10];
	int ave_year_1;
	int ave_year_2;
	int ave_year_3;
	int ave_year_4;
	char c;
	cin.getline(name, 30, ',');
	cin >> age >> c;
	cin.getline(number, 10, ',');
	cin >> ave_year_1 >> c >>  ave_year_2 >> c >> ave_year_3 >> c >> ave_year_4;
	student s(name, age, number, ave_year_1, ave_year_2, ave_year_3, ave_year_4);
	cout << s.GetName() << "," << s.GetAge() << "," 
		<< s.GetNumber() << "," << s.CalculateAve() << endl;
	return 0;
}