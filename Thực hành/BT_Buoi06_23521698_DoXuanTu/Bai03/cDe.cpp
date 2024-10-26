#include "cDe.h"
int cDe::getLoai() {
    return 3;
}
int cDe::SinhCon() {
    return 1 + rand() % 2;
}
int cDe::Sua() {
    return rand() % 10;
}
void cDe::Keu() {
    cout << "De keu: ";
    PlaySound(TEXT("BTH5_06_Goat.wav"), NULL, SND_SYNC);
}

