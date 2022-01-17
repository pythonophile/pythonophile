#include<iostream>
using namespace std;

int main(){
     cout<<"\n\n\n\t\t\t\t\t\tHere you can print table of your choice\n\n ";
    int n,r;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"Enter a range: ";
    cin>>r;
    for (int i = 1; i <= r ; i++)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<n<<" * "<<i <<" = "<<n * i<<endl;
    }
    /*Here we take two integers and then we take the values from user from where he want to print table. then by using for loop we print tables*/
    return 0;
}