#include <iostream>
#include <cstdlib>

// Instead of a vector I will be using the database (SQLite) to be a storage container

// This will be the base class for every other special user moving forward
class User {
public:


private:

};

void loginPortal();
void registrationPortal();

int main() {

    // The "Main Menu" section of the program
    std::cout << "\n\tPersistence Banking\n";
    std::cout << "----------------------------\n";
    std::cout << "\t\t1.) Register\n";
    std::cout << "\t\t2.) Login\n";
    std::cout << "\t\t3.) Exit\n";
    std::cout << "\n\t\t> ";
    int userInputValue{};
    std::cin >> userInputValue;

    // The logic for what to do when the user inputs the value
    switch (userInputValue) {
        case 1:
            break;

        case 2:
            loginPortal();
            break;

        case 3:
            break;

        default:
        std::cout << "error\n";
    }

    return EXIT_SUCCESS;
}

void loginPortal() {
    system("cls");
    std::cout <<"\tLogin Portal\n";
    std::cout << "--------------------\n";
    std::cout << "\tEmail: ";
    std::string email{};
    std::cin >> email;
    std::cout << "\tPassword: ";
    std::string password{};
    std::cin >> password;
}

void registrationPortal() {

}

