#include <iostream>

int main() {
    double base_damage = 47.8; // int damage {47.8}; - компилятор выдаст ошибку
    double multiplier = 1.5;
    
    double final_damage = base_damage * multiplier; 
    
    std::cout << "Итоговый урон: " << final_damage << std::endl;
}