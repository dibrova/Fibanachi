#include <iostream>
using namespace std;

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...
void Fibanschi(int F1,int F2) {
	if (F1 > 10000) return;
	F1 += F2;
	cout << F1 << endl;
	Fibanschi(F1,F1-F2);
}

void main() {
	Fibanschi(0,1);
	system("pause");
}