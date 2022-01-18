#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    string name,city,pet,dish;
    cout<<"What is your name? ";
    cin>>name;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\tWelcome "<<name<<" in band name generator."<<endl;
    cout<<"\n\nWhat is your city name? ";
    cin>>city;
    cout<<"What is your pet name? ";
    cin>>pet;
    cout<<"What is your favourite dish? ";
    cin>>dish;
    system("cls");
    cout<<"\n\n\t\t\tHello "<<name<<" Your Band Name Could Be "<<city<<" "<<pet<<" or "<<dish<<" "<<pet<<" or "<<dish<<" "<<city<<" or "<<pet<<" "<<dish;
    getch();
    return 0;
}
