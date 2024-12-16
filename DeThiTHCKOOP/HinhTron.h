#pragma once
#include "Hinh.h"
class HinhTron :
    public Hinh
{
private:
    float R;
public:
    HinhTron() {};
    void Nhap();
    void Xuat();
    float TinhChuVi();
    float TinhDienTich();
};

