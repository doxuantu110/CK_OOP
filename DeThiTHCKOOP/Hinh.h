#pragma once
#include "Point.h"
class Hinh: public Point
{
protected:
	Point O;
public:
	Hinh() {};
	~Hinh() {};
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual float TinhChuVi() = 0;
	virtual float TinhDienTich() = 0;
};

