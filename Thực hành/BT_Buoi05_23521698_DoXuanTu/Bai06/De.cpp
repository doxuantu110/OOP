#include "De.h"
void De::setTen() {
    TenGiaSuc = "De";
}
int De::SoLuongSinh() {
    return GiaSuc::SoLuongSinh();
}
float De::LuongSua() {
    return rand() % 10;
}
void De::Keu() {
    setTen();
    GiaSuc::Keu();
    PlaySound(TEXT("BTH5_06_Goat.wav"), NULL, SND_SYNC);
}
