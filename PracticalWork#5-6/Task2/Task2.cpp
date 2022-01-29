#include <iostream>

int main() {
    int Key;

    std::cout << "Key: ";
    std::cin >> Key;    // Задаю число, яке буду шукати
    std::cout << '\n';

    const int N = 10;   // Розмір масиву

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};  // Масив чисел

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