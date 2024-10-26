
#include "Nguoi.h"
class CongNhan :
    public Nguoi
{
private:
    string CongTy;
    int SoNgayLamViec;
    int LuongCanBan;
public:
    CongNhan() {};
    void Nhap();
    void Xuat();
};
