#include <iostream>
using namespace std;

class Arithematic
{
    private:
        int iNo1, iNo2;
    public:
        Arithematic(int A, int B)
        {
            this -> iNo1 = A;
            this -> iNo2 = B;
        }

        int Addition()
        {
            return iNo1 + iNo2;
        }

        int Substraction()
        {
            return iNo1 - iNo2;
        }
};

// Error
Arithematic(int A, int B);

int Addition();

int Substraction();

int main()
{
    Arithematic obj(11,10);

    cout << obj.Addition()<<"\n";
    cout << obj.Substraction()<<"\n";

    return 0;
}

/*

*/