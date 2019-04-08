#include <iostream>
#include <string>
#include <cstdlib>
#include "Header.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int a = 0;
	int b = 0;
	int c = 0;
	int x1 = 0;
	int x2 = 0;
	int err = 0;
	char zn1;
	char zn2;

	//Получаем ввод от пользователя
	cout << "__x^2*__x*__=0" << endl;
	cin >> a;
	cout << a << "x^2*__x*__=0" << endl;
	cin >> zn1;
	if (zn1 != '-' && zn1 != '+') err = 3;
	cout << a << "x^2" << zn1 << "__x*__=0" << endl;
	cin >> b;
	cout << a << "x^2" << zn1 << b << "x*__=0" << endl;
	cin >> zn2;
	if (zn2 != '-' && zn2 != '+') err = 4;
	cout << a << "x^2" << zn1 << b << "x" << zn2 << "__=0" << endl;
	cin >> c;
	cout << a << "x^2" << zn1 << b << "x" << zn2 << c << "=0" << endl;

	//Создам объект и вносим данные
	Vichis urav(a, b, c, zn1, zn2);

	//Результат программы
	if (err == 3 || err == 4) cout << "Неверно ввели данные." << endl;
	if (err == 0) {

		err = urav.getZnachErr();
		
		if (err == 0) {
			x1 = urav.getZnachX1();
			x2 = urav.getZnachX2();

			cout << "Корни уравнения: " << x1 << ", " << x2 << "." << endl;
		}

		if (err == 1) {
			x1 = urav.getZnachX1();

			cout << "Корень уравнения: " << x1 << "." << endl;
		}

		if (err == 0) cout << "Корней нет." << endl;
	}

	system("pause");

	return 0;
}