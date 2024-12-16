#pragma once
#include <iostream>
using namespace std;
class Point
{
protected:
	float x;
	float y;
public:
	Point() {};
	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}
	void Nhap();
	void Xuat();
};

