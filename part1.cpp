#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[10];

    // Заповнення масиву
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            a[i] = i + 5;
        else
            a[i] = i - 5;
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";

    // Сортування за зростанням
    sort(a, a + 10);

    cout << "\nВідсортований масив: ";
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}