#include <iostream>
using namespace std;

template <class T>                                                              // Template defiantion
T Addition(T No1, T No2)                                                        // Function Defination
{
    T Ans;                                                                      // Local Variable

    Ans = No1 + No2;                                                            // Business Logic

    return Ans;
}

int main()
{
    cout << "Addition of Characters : "<< Addition('a', 'b')<< "\n";            // Display Output

    cout << "Addition of Integers : "<< Addition(11,10)<< "\n";                 // Display Output
    
    cout << "Addition of Floats : "<< Addition(90.3f,78.5f)<< "\n";             // Display Output
    
    cout << "Addition of Doubles : "<< Addition(78.67897,45.76454)<< "\n";      // Display Output

    return 0;
}