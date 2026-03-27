#include <iostream>
using namespace std;

class Arithematic
{
    private:
        int iNo1, iNo2;
    
    public:
        Arithematic(int A, int B);
        int Addition();
        int Substraction();
};

Arithematic :: Arithematic(int A, int B)
{
    this -> iNo1 = A;
    this -> iNo2 = B;
}

int Arithematic :: Addition()
{
    return iNo1 + iNo2;
}

int Arithematic :: Substraction()
{
    return iNo1 - iNo2;
}

int main()
{
    Arithematic obj(11,10);

    cout << "Addition is : "<< obj.Addition()<<"\n";
    cout << "Substraction is : " << obj.Substraction()<<"\n";

    return 0;
}

/*
Language    |   SinglyLL    |   SinglyCL    |   DoublyLL    |   DoublyCL
-----------------------------------------------------------------------------
    C       |   Done        |   Done        |   Done        |   Done
    CPP     |   Done        |               |   Done        |   Done
    Java    |   Done        |               |               |
------------------------------------------------------------------------------
*/