#include <iostream>
using namespace std;

template <class T>                                              // Template Defination
class Arithematic                                               // Logic class
{
    public:
        T No1;                                                  // Members Declaration
        T No2;

        Arithematic(T A, T B)                                   // Constructor
        {
            No1 = A;                                            // Assigning values
            No2 = B;
        }

        T Addition()                                            // Function Defination
        {
            T Ans;
            Ans = No1 + No2;                                    // Logic
            return Ans;
        }

        T Substraction()                                        // Function Defination
        {
            T Ans;
            Ans = No1 - No2;                                    // Logic
            return Ans;
        }
};

int main()                                                      // Main Method
{
    Arithematic <int>obj(11,10);                                // Object Instantiation

    cout << "Addition is : " << obj.Addition() << "\n";         // Function call
    
    cout << "Substraction is : " << obj.Substraction() << "\n"; // Function call

    return 0;
}