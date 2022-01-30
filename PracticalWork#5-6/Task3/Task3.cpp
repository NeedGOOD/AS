#include <iostream>

int main() {
    srand(time(0));
    int Key;

    std::cout << "Key: ";
    std::cin >> Key;    // Задаю число, яке буду шукати
    std::cout << '\n';

    const int N = 6;   // Розмір масиву

    int a[N];  // Масив чисел
    // Масив має бути відсортованим

    for (int i = 0; i < N; ++i) {
        a[i] = rand() % (10 - -10) + -10;   // Рандомні числа
    }

    for (int j = 0; j < N; ++j) {
        int min = j;

        for (int i = j; i < N; ++i) {
            if (a[min] > a[i]) {
                min = i;
            }
        }
        std::swap(a[min], a[j]);
    }

    for (int i = 0; i < N; ++i) {
        std::cout << "a[" << i << "] = " << a[i] << '\n';   // Виведення чисел
    }
    std::cout << '\n';

    int L = 0;          // Початок масиву
    
    int R = N - 1;      // Останій індекс масиву

    int m = 0;

    while (L < R) {         // Закінчення циклу
        m = (L + R) / 2;    // Пошук середнього числа

        if (a[m] < Key) {   // Якщо середнє число менше шуканого
            L = m + 1;      // Зсув індекса вправоруч
        } else {            // Якщо середнє число більше шуканого
            R = m;          // Зсув індекса вліворуч
        }
    }

    if (a[R] == Key) {  // Якщо знайшов елемент масиву
        std::cout << "Element array has number " << R;
    } else {            // Якщо не знайшов елемент масиву
        std::cout << "Element doesn't exist";
    }
    std::cout << '\n';
    return 0;
}