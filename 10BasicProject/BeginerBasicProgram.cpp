#include <iostream>
#include <conio.h>

using namespace std;

//Global Data Types
int num1 ,num2 ,num3;
float nm1 ,nm2 ,mn3;
char prgrm, val;
string name;

//This Function is created for Intro of programmer
void gretting();
//This Function Ask About User and tell him about Programs Which were included
void usr();
//Hello World
void hlw();
//Display OutPut
void display();
//Add two numbers
void sum();
//temperature
void temp();
//Simple Interest
void interest();
//ASCII Converter
void ascii();
//Swap two numbers
void swap();
//Area Of circle
void aoc();
//Positive or negative
void chck();
//Even or odd
void EoO();
//Exit
void exit();


int main(){
    //intro of programmer
   gretting();
   
    //information about user
    usr();

    //Exit
    exit();
    return 0;
}

void gretting(){
    cout<<"\n\n\n\n\n\n\t\t\t\t\tThis Program is Created By Syed Mansoor ul Hassan Bukhari";
    cout<<"\n\n\n\t\t\t\t\t\tPress Enter For Opening Program ";
    getch();
    //Sleep(3000);
    system("clear");
}

void usr(){
    cout<<"\n\n\n\n\n\t\t\t\t\tWhat is Your name ?? ";
    cin>>::name;
    getch();
    system("clear");
    //Sleep(1000);
    cout<<"\n\nHello "<<name<<" Welcome to our program ";

    //Programs are shown in function
    cout<<"\n\nHere you find these programs \n\n\t\t\t\t1. Hello World\n\t\t\t\t2. Marks\n\t\t\t\t3. Sum of two Numbers\n\t\t\t\t4. Faranhite to Celcius\n\t\t\t\t5. Simple Interest\n\t\t\t\t6. ASCII Value\n\t\t\t\t7. Swap two Numbers\n\t\t\t\t8. Area of Circle\n\t\t\t\t9. Positive or Negative\n\t\t\t\t10. Even or Odd\n\t\t\t\t00. Exit ";
    cout<<endl;

    //take input for program
    cout<<"\n\n\tPrint 1,2,3,4,5,6,7,8,9,10,00 For program ";
    cin>>::num1;
    getch();
    system("clear");
    //Sleep(1000);

    switch (num1)
    {
    case 1:
        hlw();
        break;

    case 2:
        display();
    break;

    case 3:
        sum();
    break;

    case 4:
        temp();
    break;

    case 5:
	interest();
        
    break;

    case 6:
       ascii(); 
    break;

    case 7:
       swap();
    break;

    case 8:
        aoc();
    break;

    case 9:
        chck();
    break;

    case 10:
        EoO();
    break;

	case 00:
	exit();
	break;
    
    default:
    cout<<"\n\n\n\n\n\t\t\t\t\tSorry "<<name<<" No such command is found in my memory .You Can retry.\n\n";
	  getch();
   	 system("clear");
	   usr();
	   break;
    }
}

void hlw(){
    cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
    cout<<endl<<"\n1. Write a program to print Hello World on screen ";
    //Sleep(3000);
    getch();
    system("clear");
    cout<<"\n\n\n\n\t\t\t\t\tHello World";
    getch();
	system("clear");
	getch();
	usr();
}

void display(){
    cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
    cout<<endl<<"\n2. Write a program to display output ";
    cout<<"\n\nPress Enter For Program ";
    getch();
    system("clear");
    cout<<"\n\n\t\tSubject\t\t\tMarks\n\t\tMathematics\t\t90\n\t\tComputer\t\t77\n\t\tChemistry\t\t69\n";
    getch();
	system("clear");
	getch();
	usr();
}

void sum(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n3. Write a program which accept two numbers and print their sum";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Enter the value of num1 ";
	cin>>::num1;
	cout<<"\nEnter the value of num2 ";
	cin>>::num2;
	system("clear");
		cout<<"Your given numbers are "<<num1<<" and "<<num2 ;
	getch();
	system("clear");
			cout<<"\n\n\n\n\t\t\t\t\t\t"<<num1<<" + "<<num2<<" = "<<num1+num2;
			getch();
			system("clear");
			getch();
			usr();
			
}

void temp(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";	
	cout<<"\n\n4. Write a program which accept temperature in faranhite and print in celcius ";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Enter temperature in faranhite ";
	cin>>::nm1;
	getch();
	system("clear");
	cout<<" \n\n\n\t\t\t\tYour given temperature is "<<nm1<<"F and "<<(nm1-32)*5/9<<"C";
		getch();
		system("clear");
		getch();
		usr();
			
}

void interest(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n5. Write a program which accept principle,time and rate from user and print the simple interest ";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Enter Principle ";
	cin>>::nm1;
	cout<<"\nEnter time ";
	cin>>::num1;
	cout<<"\nEnter rate ";
	cin>>::nm2;
	getch();
	system("clear");
	getch();
	cout<<"The Simple Interest is "<<(nm1*num1*nm2)/100<<endl;
	getch();
	system("clear");
		getch();
	usr();

}


void ascii(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n6. Print a program which accept a character and print its ASCII value ";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Give me a character and i give you its ASCII value ";
	cin>>::val;
	system("clear");
	getch();
	cout<<"\n\n\n\t\t\tThe ASCII value of "<<val<<" is "<<int(val);
	getch();
	system("clear");
	getch();
	usr();
	
}

void swap(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n7. Write a program to swap the values of two variables ";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Enter two values for swap \nEnter the value of a ";
	cin>>::num1;
	cout<<"\nEnter the value of b ";
	cin>>::num2;
	getch();
	system("clear");
		cout<<"Before swap the value of a is "<<num1<<" and the value of b is "<<num2<<endl;
	int c = num1;
	    num1 = num2;
       	    num2 = c;
		cout<<"After swap the value of a is "<<num1<<" and the value of b is "<<num2<<endl;
		getch();
		system("clear");
		getch();
		usr();
	
}

void aoc(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n8. Write a program to calculate area of circle ";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Enter the radius of circle ";
		cin>>nm1;
		getch();
	system("clear");
	cout<<"As the Radius of Circle is "<<nm1<<". So Area of Circle "<<3.14*nm1*nm1;
	getch();
	system("clear");
	getch();
	usr();
}

void chck(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n9. Write a program to check whether number is positive or negative using ternary operator";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Chose a number ";
	cin>>::num1;
	getch();
	system("clear");
	string chk = (num1>0) ? "Positive " : "Negative" ;
	cout<<"\n\n\n\t\t\t\tHello "<<name<<" ,Your chosen number is "<<num1<<" which is "<<chk;
	getch();
	system("clear");
	getch();
	usr();
}

void EoO(){
	cout<<"\n\n\n\t\t\tHello "<<name<<" Thanks for opening Program ";
	cout<<"\n\n10. Write a program to check whether number is even or odd ";
	cout<<"\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear");
	cout<<"Chose a number ";
	cin>>::num1;
	getch();
	system("clear");
	string chk = (num1%2==0) ? "Even" : "Odd" ;
	cout<<"\n\n\n\t\t\t\tHello "<<name<<" ,Your chosen number is "<<num1<<" which is "<<chk;
	getch();
	system("clear");
	getch();
	usr();
	
}

void exit(){
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\tThanks "<<name<<" for using our Program.";
}

