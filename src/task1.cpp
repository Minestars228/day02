#include <cassert>
#include <iostream>

void swap(int& a, int& b) {
    // Реализуйте функцию swap, которая меняет местами значения двух переменных a и b.
}

/*
    Не менять код в функции main.
*/

int main() {
    int a = 5;
    int b = 10;

    swap(a, b);

    assert(a == 10);
    assert(b == 5);

    return 0;
}