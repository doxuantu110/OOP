#include "cBo.h"
int cBo::getLoai() {
    return 1;
}
int cBo::SinhCon() {
    return 1;
}
int cBo::Sua() {
    return rand() % 20;
}
void cBo::Keu() {
    cout << "Bo keu: ";
    PlaySound(TEXT("BTH5_06_Cow.wav"), NULL, SND_SYNC);
}
