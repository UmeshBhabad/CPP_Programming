#include <iostream>
using namespace std;

void auto_demo()                            // Function defination
{
    auto i = 1;                             // Local Variable

    cout << "auto_demo : " << i << "\n";    // Logic
    i++;

}

int main()
{
    // Function call
    auto_demo();    // 1
    auto_demo();    // 1
    auto_demo();    // 1
    auto_demo();    // 1

    return 0;
}