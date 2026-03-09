#include <iostream>
using namespace std;

class Calculator
{
public:
    float num1, num2;

    float add()
    {
        return num1 + num2;
    }

    float subtract()
    {
        return num1 - num2;
    }

    float multiply()
    {
        return num1 * num2;
    }

    float divide()
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator c;
    int choice;

    cout<<"Enter first number: ";
    cin>>c.num1;

    cout<<"Enter second number: ";
    cin>>c.num2;

    cout<<"\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cout<<"Choose operation: ";
    cin>>choice;

    if(choice==1)
        cout<<"Result: "<<c.add();
    else if(choice==2)
        cout<<"Result: "<<c.subtract();
    else if(choice==3)
        cout<<"Result: "<<c.multiply();
    else if(choice==4)
        cout<<"Result: "<<c.divide();

    return 0;
}
