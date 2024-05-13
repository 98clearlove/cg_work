#include <iostream>
#include <string>
using namespace std;
int main110() {
	string str;
	char ch;
	cin >> str >> ch;
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ch) {
			cout << i << ' ';
			count++;
		}
	}
	if (count == 0)
		cout << "NULL";
	return 0;
}