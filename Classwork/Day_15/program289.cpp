#include <iostream>
using namespace std;

void auto_demo()                            // Function defination 
{
    auto i = 1;                             // Local Variable(auto storage class)

    cout << "auto_demo : " << i << "\n";    // Logic
    i++;
}

void static_demo()                          // Function defination
{
    static int i = 1;                       // Local Variable

    cout << "static_demo : " << i << "\n";  // Logic
    i++;
}

int main()                                  // Main Method
{
    auto_demo();    // 1                    // Function call
    auto_demo();    // 1
    auto_demo();    // 1
    auto_demo();    // 1

    static_demo();  // 1                    // Function call
    static_demo();  // 2
    static_demo();  // 3
    static_demo();  // 4

    return 0;
}