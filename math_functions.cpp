#include "math_functions.h"
#include <iostream>
using namespace std;
int add(int a, int b) {
	return a + b;
}
int subt(int a, int b) {
	return a - b;
}
int mult(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}
int power(int a, int b) {
	int value=1;
	for (int i = 0; i < b; i++) {
		value *= a;
	}
	return value ;
}
void operation_selection(int oper,int a,int b) {
	if (oper == 1) {
		cout << a << " + " << b << " = " << add(a, b);
	}
	else if(oper == 2) {
		cout << a << " - " << b << " = " << subt(a, b);
	}
	else if (oper == 3) {
		cout << a << " * " << b << " = " << mult(a, b);
	}
	else if (oper == 4) {
		cout << a << " / " << b << " = " << division(a, b);
	}
	else if (oper == 5) {
		cout << a << " в степени " << b << " = " << power(a, b);
	}
}