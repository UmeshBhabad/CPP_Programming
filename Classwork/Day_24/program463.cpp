#include <iostream>
using namespace std;

// Logic class
class Arithematic
{
    public:                                                         // Class member variables declaration
        int No1;
        int No2;

        Arithematic(int A, int B)                                   // Parameterized Constructor
        {
            No1 = A;                                                // Assigning values
            No2 = B;
        }

        int Addition()                                              // Function Defination
        {
            int Ans;                                                // Local Variable

            Ans = No1 + No2;                                        // Business logic
            
            return Ans;
        }
};

int main()                                                          // Main Method
{
    // Arithematic obj ();                                          // object Instantiation
    
    Arithematic obj(11,10);                                         // Static Object Instantiation

    cout << "Addition is : " << obj.Addition() << "\n";             // Display Output

    return 0;
}