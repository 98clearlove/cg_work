#include <iostream>
#include <string>
using namespace std;
class Date {
public:
	Date(string str):year((str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0') * 10+str[3]-'0'),
					month((str[4]-'0')*10+str[5]-'0'),
					day((str[6]-'0')*10+str[7]-'0'){}
	Date(int year, int month, int day) :year(year), month(month), day(day) {}
	Date operator +(int n) {
		for (int i = 1; i <= n; i++) {
			day = day + 1;
			if (month == 2) {
				if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
					if (day > 29) {
						day = day - 29;
						month++;
					}
				}
				else if (day > 28) {
					day = day - 28;
					month++;
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				if (day > 30) {
					day = day - 30;
					month++;
				}
			}
			else {
				if (day > 31) {
					day = day - 31;
					month++;
				}
			}
			if (month > 12) {
				month = month - 12;
				year++;
			}
			if (year > 9999) {
				cout << "out of limitation!";
				exit(0);
			}
		}
		Date newdate(year, month, day);
		return newdate;
	}
	void showdate() {
		cout.fill('0');
		cout.width(4);
		cout << year;
		cout.width(2);
		cout << month;
		cout.width(2);
		cout<< day;
	}
private:
	int year;
	int month;
	int day;
};
int main18() {
	string str;
	int n;
	cin >> str >> n;
	Date date(str);
	Date newdate = date + n;
	newdate.showdate();
	return 0;
}