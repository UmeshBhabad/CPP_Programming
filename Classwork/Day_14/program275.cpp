#include <iostream>
using namespace std;

template <class T, class W>
void Display(T No1, W No2)  // Function defination
{
    cout << No1 << endl;
    cout << No2 << endl;
}

int main()                  // Main method
{
    int A = 11;             // Local Variables
    double B = 90.9987;

    Display(A, B);          // Function call

    return 0;
}