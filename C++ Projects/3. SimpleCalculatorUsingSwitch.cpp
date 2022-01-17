#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b;
    char o;


    cout<<"Put any operator in one of these signs +, -, *, /, % "<<endl;
    cin>>o;
    cout <<"Enter the value of first number ";
    cin>>a;
    cout<<"\n\nEnter the value of second number ";
    cin>>b;

    switch (o)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;

    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;

    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;

    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
        break;


    default:
        break;
    }
    return 0;
}