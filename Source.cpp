#include<iostream>
#include<string>
#include<ctime>
#include "Header.h"
using namespace std;
int main() {
	//18
	/*srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x1 = rand() % 101 * 0.1;
		cout << "x = " << x1 << " s = " << CircleS(x1) << endl;
	}
	*/
	//19
	/*srand(time(nullptr));
		double x1 = rand() % 101 * 0.1;
		double x2 = rand() % 101 * 0.1;
		cout << "x1 = " << x1 << "x2 = " << x2 <<" s = " << RingS(x1,x2) << endl;*/
	//20
	/*srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double a = rand() % 101 * 0.1;
		double h = rand() % 101 * 0.1;
		cout << "a = " << a << " p = " << TriangleP(a,h)<< endl;
	}*/
	//25
	srand(time(nullptr));
	int m = 0;
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 26;
		cout << x1 << endl;
		if (IsSquare(x1) == 1) {
			m++;
			cout << "qwert" << endl;
		}
	}
	cout << " " << endl;
	cout << m << endl;

	return 0;
}
