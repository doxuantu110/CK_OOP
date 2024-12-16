
#include "HinhChuNhat.h"
void HinhChuNhat::Nhap() {
	cout << "Nhap trong tam O (x, y) :";
	O.Nhap();
	cout << "Nhap chieu dai: ";
	cin >> D;
	cout << "Nhap chieu rong: ";
	cin >> R;
}

void HinhChuNhat::Xuat() {  
	cout << "Hinh chu nhat co trong tam O "; O.Xuat(); 
	cout << " ,D = " << D << " ,R = " << R << endl;
}
float HinhChuNhat::TinhChuVi() {
	return 2 * (D + R);
}
float HinhChuNhat::TinhDienTich() {
	return D * R;
}
