#include "Cuu.h"
void Cuu::setTen() {
    TenGiaSuc = "Cuu";
}
int Cuu::SoLuongSinh() {
    return GiaSuc::SoLuongSinh();
}
float Cuu::LuongSua() {
    return rand() % 5;
}
void Cuu::Keu() {
    setTen();
    GiaSuc::Keu();
    PlaySound(TEXT("BTH5_06_Sheep"), NULL, SND_SYNC);
}
