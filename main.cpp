// Командный проект. Группа ПИ-51.
// Команда: Мамонов (в. 38б техлид), Шакалов (в. 30)
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===
#include "shakalov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
int choice;
do {
cout << "\n=== Командный проект: сборник расчётов ===\n";
// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
cout << "1. Скорость падения через время t\n";
cout << "2. Высота падения за время t\n";
cout << "3. Время падения с высоты h\n";
// === КОНЕЦ БЛОКА МЕНЮ ===
cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;
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
