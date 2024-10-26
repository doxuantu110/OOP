#pragma once
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include <vector>
class DanhSachNhanVien
{
private:
	vector<NhanVienVanPhong> DSVanPhong;
	vector<NhanVienSanXuat> DSSanXuat;
public:
	DanhSachNhanVien() {};
	void Nhap();
	void Xuat();
	long long TinhTongLuong();
};

