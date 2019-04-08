#pragma once
#include <iostream>
#include <string>
#include <math.h>

class Vichis {
private:
	int xx1 = 0;
	int xx2 = 0;
	int d = 0;
	int er = 0;
public:
	//Конструктор класса
	Vichis(int q1, int q2, int q3, int znn1, int znn2) {
		if (znn1 == '-' && q2 > 0) q2 = q2 * (-1);
		if (znn2 == '-' && q3 > 0) q3 = q3 * (-1);
		//Получаем дискрименант
		getDis(q1, q2, q3);
		
		//Если дискрименант больше нуля, тогда два корня
		if (d > 0) er = 0;
		//Если дискрименант равен нулю, то один корень
		if (d == 0) er = 1;
		//Если дискрименант отрицательный, то корней нет
		if (d < 0) er = 2;
		//Получаем корни
		getXX(q1, q2);
	}
	//Вычисляем Дискрименант
	void getDis(int w1, int w2, int w3) {
		d = w2 * w2 - 4 * w1 * w3;
	}
	//Вычисляем корни уравнения
	void getXX(int w1, int w2) {
		xx1 = ((__int64)w2 * (-1) + sqrt(d)) / 2 * w1;
		xx2 = ((__int64)w2 * (-1) - sqrt(d)) / 2 * w1;
	}
	//Получение значений из класса
	int getZnachX1() {
		return xx1;
	}

	int getZnachX2() {
		return xx2;
	}

	int getZnachErr() {
		return er;
	}
};