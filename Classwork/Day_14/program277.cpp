
#include <iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

    Arithmetic(int A, int B)
    {
        No1 = A;
        No2 = B;
    }

    int Addition()                 // Function defination
    {
        int Ans = 0;                                   // Local Variables

        Ans = No1 + No2;

        return Ans;
    }

    int Subtraction()                 // Function defination
    {
        int Ans = 0;                                   // Local Variables

        Ans = No1 - No2;

        return Ans;
    }
};

int main()                                          // Main method
{
    Arithmetic aobj(11,10);

    cout << aobj.Addition()<< "\n";
    cout<< aobj.Subtraction()<<"\n";

    return 0;
}