// Funkcja do określania stawki prowizji
double determineCommisionRate(double wart_s) {
    double p;

    if (wart_s < 10000) {
        p = 0.1;
    } else if (wart_s > 10000 && wart_s < 14999.99) {
        p = 0.12;
    } else if (wart_s > 15000 && wart_s < 17999.99) {
        p = 0.14;
    } else if (wart_s > 18000 && wart_s < 21999.99) {
        p = 0.16;
    } else {
        p = 0.18;
    }

    return p;
}
