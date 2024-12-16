
#include "Hinh.h"
class HinhChuNhat :
    public Hinh
{
private:
    float D;
    float R;
public:
    HinhChuNhat() {};
    void Nhap();
    void Xuat();
    float TinhChuVi();
    float TinhDienTich();
};
