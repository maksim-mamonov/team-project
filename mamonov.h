#ifndef MAMONOV_H
#define MAMONOV_H

// ===== Прототипы расчётных функций (Вариант 38) =====

// Работа тока (U — напряжение, I — сила тока, t — время)
double currentWork(double U, double I, double t);

// Количество теплоты (закон Джоуля — Ленца: I — сила тока, R — сопротивление, t — время)
double jouleHeat(double I, double R, double t);

#endif // MAMONOV_H
