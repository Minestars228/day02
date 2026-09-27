#include <iostream>

void task2() {
    double baseDamage = 47.8;
    double critMultiplier = 1.5;

    // Исправь баг, чтобы урон считался корректно.
    int damage = baseDamage * critMultiplier;

    std::cout << "Урон: " << damage << std::endl;

    // TODO: попробуй объявить так же, но через фигурные скобки:
    // int damage2 {baseDamage * critMultiplier};
    // Что произошло? Почему компилятор реагирует иначе, чем на "="?
    // Напиши ответ в комментарии ниже:
    //
    // Ответ:
}