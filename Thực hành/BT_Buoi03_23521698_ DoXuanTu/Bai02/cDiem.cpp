#include "cDiem.h"
cDiem::cDiem(float x, float y) {
	this->x = x;
	this->y = y;
}
void cDiem::Nhap() {
	cin >> x >> y;
}
void cDiem::Xuat() {
	cout << "(" << x << " , " << y << ") ";
}
void cDiem::setxy(float x, float y) {
	this->x = x;
	this->y = y;
}
float cDiem::getx() {
	return x;
}
float cDiem::gety() {
	return y;
}
cDiem cDiem::Vector(cDiem A) {
	cDiem B;
	B.setxy(A.getx() - x, A.gety() - y);
	return B;
}
void cDiem::TinhTien(float a, float b) {
	x += a;
	y += b;
}
void cDiem::Quay(float rad) {
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}
void cDiem::PhongTo(float k) {
	x *= k;
	y *= k;
}
void cDiem::ThuNho(float k) {
	x /= k;
	y /= k;
}
