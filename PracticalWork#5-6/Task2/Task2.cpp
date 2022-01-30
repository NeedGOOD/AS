#include <iostream>

int main() {
    srand(time(0));
    int Key;

    std::cout << "Key: ";
    std::cin >> Key;    // Задаю число, яке буду шукати
    std::cout << '\n';

    const int N = 6;   // Розмір масиву

    int a[N];  // Масив чисел

    for (int i = 0; i < N; ++i) {
        a[i] = rand() % (10 - -10) + -10;   // Рандомні числа
    }

    for (int i = 0; i < N; ++i) {
        std::cout << "a[" << i << "] = " << a[i] << '\n';   // Виведення чисел
    }
    std::cout << '\n';

    a[N] = Key; // Проблема: вихід за границю масиву

    int i = 0;  // Початок масиву

    while (a[i] != Key) {   // Закінчення циклу
        ++i;    // Крок
    }

    if (i == N) {   // Якщо не знайшов елемент масиву
        std::cout << "Element doesn't exist";
    } else {        // Якщо знайшов елемент масиву
        std::cout << "Element array has number " << i;
    }
    std::cout << '\n';
    return 0;
}