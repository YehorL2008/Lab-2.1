#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Перша матриця 4x4
    int a[4][4];
    int b[4];
    int k = 0;

    cout << "Введіть елементи матриці 4x4:\n";

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];

    // Вибір додатних елементів головної діагоналі
    for (int i = 0; i < 4; i++)
        if (a[i][i] > 0)
            b[k++] = a[i][i];

    cout << "\nДодатні елементи головної діагоналі:\n";

    for (int i = 0; i < k; i++)
        cout << b[i] << " ";

    if (k == 0)
        cout << "Додатніх елементів немає";

    // Друга матриця 4x5
    double c[4][5];
    double d[5];

    cout << "\n\nВведіть елементи матриці 4x5:\n";

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cin >> c[i][j];

    // Пошук мінімуму кожного стовпця
    for (int j = 0; j < 5; j++) {
        d[j] = c[0][j];

        for (int i = 1; i < 4; i++)
            if (c[i][j] < d[j])
                d[j] = c[i][j];
    }

    cout << "\nМінімальні елементи стовпців:\n";

    for (int j = 0; j < 5; j++)
        cout << d[j] << " ";

    cout << endl;

    return 0;
}