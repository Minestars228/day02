#include <iostream>

void check(int age, bool has_adult) {
    bool ok = (age >= 18) || (age >= 14 && has_adult);
    std::cout << age << " лет, с взрослым: " << (has_adult ? "Да" : "Нет") 
              << " -> " << (ok ? "Пущен" : "Отказано") << "\n";
}

int main() {
    check(20, false); 
    check(15, true);  
    check(15, false); 
    check(10, true);  
    return 0;
}