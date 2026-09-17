#include "shakalov.h"
#include <cmath>
#include <iostream>
using namespace std;

const double g = 9.81;

double fallSpeed(double t) {
    return g * t;
}

double fallHeight(double t) {
    return g * t * t / 2.0;
}

double fallTime(double h) {
    if (h < 0) {
        cout << "Ошибка: высота не может быть отрицательной.\n";
        return -1;
    }
    return sqrt(2.0 * h / g);
}
