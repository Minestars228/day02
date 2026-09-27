#include <iostream>

int main() {
    int strength = 5;
    int agility = 3;
    int another = strength;
    strength = agility;
    agility = another;
    std::cout << agility << std::endl;
    std::cout << strength << std::endl;
    

}




//#include <iostream>

//int main() {
//    int strength = 5;
//    int agility = 3;
    
//    strength = strength + agility; // strength = 8 (5+3)
//    agility = strength - agility;  // agility = 5 (8-3)
//    strength = strength - agility; // strength = 3 (8-5)
    
//    std::cout << agility << std::endl;
//    std::cout << strength << std::endl;
//}