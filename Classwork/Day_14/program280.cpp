// OOP Approach(Generic)

#include <iostream>
using namespace std;

// Logic class
template <class T>                          // Template Instantiation
class Arithmetic                            // Class defination
{
    public:                                 // Local Variables
        T No1;
        T No2;

    Arithmetic(T A, T B)                    // Constructor
    {
        No1 = A;
        No2 = B;
    }

    int Addition()                          // Function defination
    {
        T Ans = 0;                          // Local Variable

        Ans = No1 + No2;                    // Business Logic

        return Ans;
    }

    int Subtraction()                       // Function defination
    {
        T Ans = 0;                          // Local Variables

        Ans = No1 - No2;                    // Business Logic

        return Ans;
    }
};

int main()                                  // Main method
{
    Arithmetic <int> aobj1(11,10);          // Object Instantiation(with type parameter int)
    Arithmetic <double> aobj2(101.5,50.3);  // Object Instantiation(with type parameter double)

    cout << aobj1.Addition()<< "\n";        // Function call
    cout<< aobj1.Subtraction()<<"\n";

    cout << aobj2.Addition()<< "\n";        // Function call
    cout<< aobj2.Subtraction()<<"\n";

    return 0;
}