#include "mamonov.h"

// ===== Реализация расчётных функций =====

double currentWork(double U, double I, double t) {
    return U * I * t;
}

double jouleHeat(double I, double R, double t) {
    return I * I * R * t;
}
