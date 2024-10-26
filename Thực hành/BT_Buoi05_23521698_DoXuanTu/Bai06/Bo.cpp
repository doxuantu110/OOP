#include "Bo.h"
void Bo::setTen() {
    TenGiaSuc = "Bo";
}
int Bo::SoLuongSinh() {
    return 1;
}
float Bo::LuongSua() {
    return rand() % 20;
}
void Bo::Keu() {
    setTen();
    GiaSuc::Keu();
    PlaySound(TEXT("BTH5_06_Cow.wav"), NULL, SND_SYNC);
}
