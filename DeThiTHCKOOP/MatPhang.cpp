#include "MatPhang.h"
void MatPhang::Nhap() {
	cout << "Nhap so luong hinh trong mat phang: ";
	int n;
	cin >> n;
	DS.resize(n);
	for (int i = 0; i < n; i++) {
		int sel;
		cout << "Hinh thu " << i + 1 << " la hinh: " << "\n 1. Hinh chu nhat" << "\n 2. Hinh tron" << endl;
		cin >> sel;
		cin.ignore();
		if (sel == 1) {
			DS[i] = new HinhChuNhat;
			DS[i]->Nhap();
		}
		else
		{
			DS[i] = new HinhTron;
			DS[i]->Nhap();
		}
	}
	cout << endl;
}

void MatPhang::Xuat() {
	for (int i = 0; i < DS.size(); i++) {
		cout << "Hinh thu " << i + 1 << " la: ";
		DS[i]->Xuat();
	}
}
void MatPhang::XuatChuVi() {
	for (int i = 0; i < DS.size(); i++) {
		cout << "Hinh thu " << i + 1 << " la: ";
		DS[i]->Xuat();
		cout << "Chu vi la: " << DS[i]->TinhChuVi() << endl;
	}
}
void MatPhang::XuatDienTich() {
	for (int i = 0; i < DS.size(); i++) {
		cout << "Hinh thu " << i + 1 << " la: ";
		DS[i]->Xuat();
		cout << "Dien tich la: " << DS[i]->TinhDienTich() << endl;
	}
}
float MatPhang::TinhTongDT() {
	float tong = 0;
	for (int i = 0; i < DS.size(); i++) {
		tong += DS[i]->TinhDienTich();
	}
	return tong;
}