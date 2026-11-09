#include <iostream>
using namespace std;

int main() {
    char a[10], b[10], c[10];
    int count = 0;
    int count3 = 0;

    // Заповнення першого та другого масивів
    for (int i = 0; i < 10; i++) {
        a[i] = 120 - i;
        b[i] = 110 + i;
    }

    // Пошук однакових елементів у двох масивах
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a[i] == b[j]) {
                c[count3] = a[i];
                count3++;
                break;
            }
        }
    }

    // Виведення першого масиву
    cout << "Перший масив: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

    // Виведення другого масиву
    cout << "\nДругий масив: ";
    for (int i = 0; i < 10; i++) {
        cout << b[i] << " ";
    }

    // Виведення третього масиву та підрахунок
    cout << "\nТретій масив: ";
    for (int i = 0; i < count3; i++) {
        cout << c[i] << " ";

        if ((int)c[i] < 115) {
            count++;
        }
    }

    cout << "\nКількість елементів з кодом менше 115: "
         << count;

    return 0;
}
