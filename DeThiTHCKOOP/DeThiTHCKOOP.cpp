// DeThiTHCKOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MatPhang.h"
int main()
{
    MatPhang P;
    P.Nhap();
    P.Xuat();
    cout << "\nXuat thong tin n hinh trong mat phang bao gom chu vi: " << endl;
    P.XuatChuVi();
    cout << "\nXuat thong tin n hinh trong mat phang bao gom chu vi: " << endl;
    P.XuatDienTich();
    cout << "\nTong dien tich cac hinh tren mat phang : " << P.TinhTongDT();
}

