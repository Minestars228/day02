#include <iostream>
#include <vector>
#include <string>
using std::vector, std::string, std::cout, std::endl;
 
// TODO: допиши сигнатуру функции так, чтобы компилятор
// не позволил менять items внутри функции

void printInventory(vector<string>& items) {
    // Если раскомментировать строку ниже, должна быть ОШИБКА КОМПИЛЯЦИИ
    items.push_back("баг");


    for (const auto& item : items) {
        cout << item << endl;
    }
}
 
int main() {
    vector<string> bag = {"sword", "potion", "shield"};
    printInventory(bag);

    return 0;
}