#pragma once
#include "Hinh.h"
#include "HinhChuNhat.h"
#include "HinhTron.h"
#include <vector>
class MatPhang
{
private:
	vector<Hinh*> DS;
public:
	MatPhang() {};
	void Nhap();
	void Xuat();
	void XuatChuVi();
	void XuatDienTich();
	float TinhTongDT();
};

