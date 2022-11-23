#include <iostream>

int main(){
    unsigned short small;
    unsigned long large;
    const unsigned short MAXSMALL=65535;

    std::cout << "Give me a smaller number: ";
    std::cin >> small;
    std::cout << "Give me a larger number: ";
    std::cin >> large;

    std::cout << "Smaller: " << small << "..." << std::endl;

    while (small < large && large > 0 && small < MAXSMALL){
        if (small % 5000 == 0){
            std::cout << "." << std::endl;
        }
        small++;
        large-=2;
    }

    std::cout << "Smaller: " << small << " Larger: " << large << std::endl;

    return 0;
}