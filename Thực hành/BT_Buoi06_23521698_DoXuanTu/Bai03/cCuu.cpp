#include "cCuu.h"
int cCuu::getLoai() {
    return 2;
}
int cCuu::SinhCon() {
    return 1 + rand() % 2;
}
int cCuu::Sua() {
    return rand() % 5;
}
void cCuu::Keu() {
    cout << "Cuu keu: ";
    PlaySound(TEXT("BTH5_06_Sheep.wav"), NULL, SND_SYNC);
}

