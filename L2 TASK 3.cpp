#include <iostream>
using namespace std;

class Voter
{
public:
    string name;
    int age;

    bool isEligible();
};

bool Voter::isEligible()
{
    if(age > 18)
        return true;
    else
        return false;
}

int main()
{
    Voter v;

    cout<<"Enter name: ";
    cin>>v.name;

    cout<<"Enter age: ";
    cin>>v.age;

    if(v.isEligible())
        cout<<"You are eligible to vote."<<endl;
    else
        cout<<"You are not eligible to vote."<<endl;

    return 0;
}
