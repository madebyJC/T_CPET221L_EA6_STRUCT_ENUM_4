#include <iostream>

struct bank {
    std::string Name;
    std::string Password;
    int Balance;
};

int main() {
    bank bank1;
    bank bank2;

    std::string pass;

    bank1.Password = "232425";
    bank2.Password = "022724";

    bank1.Balance = 24000;
    bank2.Balance = 10000;


    while (true) {
        std::cout << "Enter the password: " << std::endl;
        std::cin >> pass;

        if (pass == bank1.Password) {
            std::cout << "Enter the name: " << std::endl;
            std::cin >> bank1.Name;
            std::cout << "Welcome " << bank1.Name << std::endl;
            break;
        } else if (pass == bank2.Password) {
            std::cout << "Enter the name: " << std::endl;
            std::cin >> bank2.Name;
            std::cout << "Welcome " << bank2.Name << std::endl;
            break;
        } else {
            std::cout << "Invalid password" << std::endl;
        }
    }

    if (pass == "232425") {
        std::cout << "Balance is: " << bank1.Balance << std::endl;
    } else if (pass == "022724") {
        std::cout << "Balance is: " << bank2.Balance << std::endl;
    }


    return 0;
}
