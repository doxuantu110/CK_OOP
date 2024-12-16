#include "HinhTron.h"
#define  pi  3.14
void HinhTron::Nhap() {
	cout << "Nhap trong tam O(x, y) : ";
	O.Nhap();
	cout << "Nhap ban kinh: ";
	cin >> R;
}
void HinhTron::Xuat() {
	cout << "Hinh tron co trong tam O ";
	O.Xuat();
	cout << ", R = " << R << endl;
}
float HinhTron::TinhChuVi() {
	return 2 * R * pi;
}
float HinhTron::TinhDienTich() {
	return pi * R * R;
}
