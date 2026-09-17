// Команда: Мамонов (в. 38 техлид), Шакалов (в. 30)
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===

#include "mamonov.h"
#include "shakalov.h"

// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
int choice = -1;
double U, I, R, t;

do {
cout << "\n=== Командный проект: сборник расчётов ===\n";
// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
// === КОНЕЦ БЛОКА МЕНЮ ===
cout << "1. Скорость падения через время t\n";
cout << "2. Высота падения за время t\n";
cout << "3. Время падения с высоты h\n";
cout << "4. Работа тока\n";
cout << "5. Количество теплоты (закон Джоуля — Ленца)\n";
cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;

if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            choice = -1;
            cout << "Ошибка: введите номер пункта цифрами!\n";
            continue;
        }

        // Чистим остаток строки (Enter) после успешного ввода числа
        cin.ignore(1000, '\n');

        // 2. Проверка на существование пункта меню
        if (choice != 0 && (choice < 1 || choice > 5)) {
            cout << "Ошибка: такого пункта нет в меню! Попробуйте снова.\n";
            continue;
        }

switch (choice) {
// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
     case 1: {
            double t;
            cout << "Введите время t (сек): ";
            cin >> t;
            cout << "Скорость = " << fallSpeed(t) << " м/с\n";
            break;
        }
        case 2: {
            double t;
            cout << "Введите время t (сек): ";
            cin >> t;
            cout << "Высота = " << fallHeight(t) << " м\n";
            break;
        }
        case 3: {
            double h;
            cout << "Введите высоту h (м): ";
            cin >> h;
            double result = fallTime(h);
            if (result >= 0)
                cout << "Время = " << result << " с\n";
            break;
        }

	      case 4: {
                cout << "Введите U (В), I (А), t (с): ";
                cin >> U >> I >> t;
                if (t < 0) {
                    cout << "Ошибка: время t не может быть отрицательным!\n";
                } else {
                    cout << "Работа тока = " << currentWork(U, I, t) << " Дж\n";
                }
                break;
        }
    
        case 5: {
                cout << "Введите I (А), R (Ом), t (с): ";
                cin >> I >> R >> t;
                if (R < 0) {
                    cout << "Ошибка: сопротивление R не может быть отрицательным!\n";
                } else if (t < 0) {
                    cout << "Ошибка: время t не может быть отрицательным!\n";
                } else {
                    cout << "Количество теплоты = " << jouleHeat(I, R, t) << " Дж\n";
                }
                break;
        }

// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
case 0:
cout << "Работа завершена.\n";
break;
default:
cout << "Такого пункта нет.\n";
}
} while (choice != 0);
return 0;
}
