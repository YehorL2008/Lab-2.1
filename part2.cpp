#include <iostream>
using namespace std;

int main() {
    char a[10], b[10], c[10];
    int count = 0;

    // Заповнення першого та другого масивів
    for (int i = 0; i < 10; i++) {
        a[i] = 120 - i;
        b[i] = 110 + i;
    }

    // Формування третього масиву
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            c[i] = a[i];
        else
            c[i] = b[i];
    }

    cout << "Перший масив: ";
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";

    cout << "\nДругий масив: ";
    for (int i = 0; i < 10; i++)
        cout << b[i] << " ";

    cout << "\nТретій масив: ";
    for (int i = 0; i < 10; i++) {
        cout << c[i] << " ";
        if ((int)c[i] < 115)
            count++;
    }

    cout << "\nКількість елементів з кодом менше 115: " << count;

    return 0;
}