
#include "cNhanVien.h"
class NhanVienVanPhong :
    public cNhanVien
{
private:
    int SoNgayLamViec;
public:
    NhanVienVanPhong() {};
    void Nhap();
    void Xuat();
    static const int LuongNgay = 100000;
    int TinhLuong();
};
