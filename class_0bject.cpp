#include <iostream>
using namespace std;
// public--> can be access anywhere
// private ---> use within class
//  protected--> same a private  but we can access throug class (inheritance)

class A
{
private:
    int z;

public:
    int a = 3;
    // void setval()
    // {
    // cout << "enter : " << endl;
    // cin >> z;
    // }

    int getval()
    {
        cout << "enter : " << endl;
        cin >> z;
        return z;
    }

protected:
    int i = 4;
};
class B : public A
{ // single inheritance

public:
    int j = 10;
    void print()
    {
        cout << j << endl;
        cout << i << endl;
        // setval();
        getval();
        cout << a << endl;
        // function calling
        // STUB -  << z << endl;
    }
};

int main()
{
    B obj;
    obj.a;
    obj.print();

    return 0;
}