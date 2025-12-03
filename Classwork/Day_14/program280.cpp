// OOP Approach(Generic)

#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    public:
        T No1;
        T No2;

    Arithmetic(T A, T B)
    {
        No1 = A;
        No2 = B;
    }

    int Addition()                 // Function defination
    {
        T Ans = 0;                                   // Local Variables

        Ans = No1 + No2;

        return Ans;
    }

    int Subtraction()                 // Function defination
    {
        T Ans = 0;                                   // Local Variables

        Ans = No1 - No2;

        return Ans;
    }
};

int main()                                          // Main method
{
    Arithmetic <int> aobj1(11,10);                    // Object Instantiation
    Arithmetic <double> aobj2(101.5,50.3);

    cout << aobj1.Addition()<< "\n";
    cout<< aobj1.Subtraction()<<"\n";

    cout << aobj2.Addition()<< "\n";
    cout<< aobj2.Subtraction()<<"\n";

    return 0;
}