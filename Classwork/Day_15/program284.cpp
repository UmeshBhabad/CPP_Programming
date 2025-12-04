#include <iostream>
using namespace std;

void Display()                          // Function defination
{
    cout << "Jay Ganesh...." << endl;   // Business Logic

    Display();                          // Recursive call
}

int main()                              // Main Method
{
    Display();                          // Function call(infinite iteration)

    return 0;
}