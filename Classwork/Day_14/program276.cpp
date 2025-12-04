#include <iostream>
using namespace std;


int Addition(int No1, int No2)          // Function defination
{
    int Ans = 0;                        // Local Variables

    Ans = No1 + No2;                    // Business Logic
    
    return Ans;
}

int main()                              // Main method
{
    cout<< Addition(10,11) << endl;     // Function call

    return 0;
}