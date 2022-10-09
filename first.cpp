#include<iostream>
using namespace std;
class sum
{
    public:int a,b,add;
    void Add()
    {
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    }
    void print()
    {
    add=a+b;
    cout<<"Sum of 2 number is"<<add;
    }
};
int main()
{
    sum s;
    s.Add();
    s.print();
    return 0;
}
