#include <iostream>
#include <string>
using namespace std;


class Binary
{
private:
    string s;

public:
    void name(void);
    void check(void);
    void convrt(void);
    void display(void);
};


void Binary::name(void)
{
    cout<<"Enter number to check whether it is binary or not\n ";
    cin>>s;

}

void Binary::check(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Your given number is not a binary number .";
            exit(0);
        }
        
    }
    
}

void Binary ::convrt(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
           s.at(i)='0';
        }
    }
    
}

void Binary::display(void){
     for (int i = 0; i < s.length(); i++){
    cout<<s.at(i);
     }
}

int main(){
    Binary b;
    b.name();
    b.check();
    b.convrt();
    b.display();
    return 0;
}