#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    bool validInput = false;

    do {
        cout << "Enter a number: ";
        if( !(std::cin >> number) ) {
          cout << "Invalid input. Please try again.\n";
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else {
          validInput = true;
        }
        
    } while ( !validInput );

    std::cout << "You entered: " << number << '\n';
    return 0;
}
