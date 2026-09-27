#include <iostream>

bool canEnter(int age, bool withAdult);

int main() {
    int age;
    bool withAdult;

    std::cout << "Введите возраст: ";
    std::cin >> age;

    std::cout << "Пришел со взрослым? (1 - да, 0 - нет): ";
    std::cin >> withAdult;

    if (canEnter(age, withAdult)) {
        std::cout << "Можно войти в таверну." << std::endl;
    } else {
        std::cout << "Вход запрещен." << std::endl;
    }

    return 0;
}

/* Реализуйте функцию canEnter, которая проверяет, может ли человек войти в таверну:
    Можно, если ему 18 лет или больше,
    или если ему больше 14 лет и он пришел с взрослым (withAdult == true).
    */
bool canEnter(int age, bool withAdult) {}