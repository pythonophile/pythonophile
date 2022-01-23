#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

//Global Data Types
int num1, num2, num3;
float nm1, nm2, nm3, nm4, nm5;
char prgrm, val, name[50];

//This Function is created for Intro of programmer
void gretting();
//For output of program
void output();
void output1();
//Intoduction about programmer
void programmer();
//For Code of Program
void code();
void code1();
//This Function Ask About User and tell him about Programs Which were included
void usr();

//These are the programs for code taask1
//Hello World
void hlw1();
//Display OutPut
void display1();
//manages task
void taskmanager();
//Task01
void task01();
//Task02
void task02();
//Add two numbers
void sum1();
//temperature
void temp1();
//Simple Interest
void interest1();
//ASCII Converter
void ascii1();
//Swap two numbers
void swap1();
//Area Of circle
void aoc1();
//Positive or negative
void chck1();
//Even or odd
void EoO1();
//2nd project
void eoood1();
//Swap In Adition And Subtraction
void swaap1();

//These are the programs for taking output task 01
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
//for task 02
void eoood();
//Swap In Adition And Subtraction
void swaap();

//task 02
//for absolute value
void abso();
void abso1();
//For 10% discount
void discount();
void discount1();
//Finding Profit or loss
void profit();
void profit1();
//Checking age
void age();
void age1();
//Triangle
void triangle();
void triangle1();
//leap year
void leap();
void leap1();
//Gross Sallery
void gross();
void gross1();
//phone bill
void phone();
void phone1();
//root
void root();
void root1();
//division
void divson();
void divson1();
//Character
void character();
void character1();
//Exit
void exit();

int main()
{
	//intro of programmer
	gretting();

	//information about user
	usr();

	//Exit
	exit();
	return 0;
}

void gretting()
{
	cout << "\n\n\n\n\n\n\t\t\t\t\tThis Program is Created By Syed Mansoor ul Hassan Bukhari";
	cout << "\n\n\n\t\t\t\t\t\tPress Enter For Opening Program ";
	getch();
	//Sleep(3000);
	system("clear||cls");
}

void usr()
{
	cout << "\n\n\n\n\n\t\t\t\t\tWhat is Your name ?? ";
	cin.getline(::name, 50);
	system("clear||cls");
	taskmanager();
	system("clear||cls");
}

void taskmanager()
{
	cout << "\n\n\t\t\t\tWelcome " << name << ", here is the list of tasks\n\n\n\t\t\t\t1. Task No 01\n\t\t\t\t2. Task No 02\n\t\t\t\t3. Programmer\n\t\t\t\t0. Exit" << endl;
	cin >> ::num1;
	switch (num1)
	{
	case 1:
		task01();
		break;

	case 2:
		task02();
		break;

	case 3:
		programmer();
		break;

	case 0:
		exit();
		break;

	default:
		break;
	}
}

void task01()
{
	system("clear||cls");
	cout << "\n\n\n\n\t\t\nHello " << name << "\n\t\t\tPress '1' for code \n\t\t\tPress '2' for its output \n\t\t\t\t\t\tpress '0' for exit\n\n";
	cin >> ::num1;
	system("clear||cls");
	switch (num1)
	{
	case 1:
		code();
		break;

	case 2:
		output();
		break;

	case 0:
		exit();
		break;

	default:
		cout << "\n\n\n\n\n\t\t\t\t\tSorry " << name << " No such command is found in my memory .You Can retry.\n\n";
		getch();
		system("clear||cls");
		taskmanager();
		break;
	}
}

void task02()
{
	system("clear||cls");
	cout << "\n\n\n\n\t\t\nHello " << name << "\n\t\t\tPress '1' for code \n\t\t\tPress '2' for its output \n\t\t\t\t\t\tpress '0' for exit\n\n";
	cin >> ::num1;
	system("clear||cls");
	switch (num1)
	{
	case 1:
		code1();
		break;

	case 2:
		output1();
		break;

	case 0:
		exit();
		break;

	default:
		cout << "\n\n\n\n\n\t\t\t\t\tSorry " << name << " No such command is found in my memory .You Can retry.\n\n";
		getch();
		system("clear||cls");
		taskmanager();
		break;
	}
}

//task 01 code
void code()
{
	cout << "\n\nHello " << name << " Welcome to our program ";

	//Programs are shown in function
	cout << "\n\nHere you find these codes of programs \n\n\t\t\t\t1. Hello World\n\t\t\t\t2. Marks\n\t\t\t\t3. Sum of two Numbers\n\t\t\t\t4. Faranhite to Celcius\n\t\t\t\t5. Simple Interest\n\t\t\t\t6. ASCII Value\n\t\t\t\t7. Swap two Numbers\n\t\t\t\t8. Area of Circle\n\t\t\t\t9. Positive or Negative\n\t\t\t\t10. Even or Odd\n\t\t\t\t11. Swap Addition Into Subtraction And Subtraction Into Addition\n\t\t\t\t12. User\n\t\t\t\t00. Exit ";
	cout << endl;

	//take input for program
	cout << "\n\n\tPrint 1,2,3,4,5,6,7,8,9,10,11,00 For program ";
	cin >> ::num1;
	getch();
	system("clear||cls");
	//Sleep(1000);

	switch (num1)
	{
	case 1:
		hlw1();
		break;

	case 2:
		display1();
		break;

	case 3:
		sum1();
		break;

	case 4:
		temp1();
		break;

	case 5:
		interest1();

		break;

	case 6:
		ascii1();
		break;

	case 7:
		swap1();
		break;

	case 8:
		aoc1();
		break;

	case 9:
		chck1();
		break;

	case 10:
		EoO1();
		break;

	case 11:
		swaap1();
		break;

	case 12:
		taskmanager();
		break;

	case 00:
		exit();
		break;

	default:
		cout << "\n\n\n\n\n\t\t\t\t\tSorry " << name << " No such command is found in my memory .You Can retry.\n\n";
		getch();
		system("clear||cls");
		code();
		break;
	}
}

//task 02 code
void code1()
{
	cout << "\n\nHello " << name << " Welcome to our program ";

	//Programs are shown in function
	cout << "\n\nHere you find these codes of programs \n\n\t\t\t\t1. Even Odd\n\t\t\t\t2. Absolute Value\n\t\t\t\t3. 10% discount if expence is more than 5000\n\t\t\t\t4. Check Profit or loss\n\t\t\t\t5. Checking Age and tell who is youngest\n\t\t\t\t6. Check Triangle is valid or not\n\t\t\t\t7. Check leap year\n\t\t\t\t8. Gross Swalry\n\t\t\t\t9. Check Telephone Bill\n\t\t\t\t10. Root\n\t\t\t\t11. Check Division\n\t\t\t\t12. Recognize Character\n\t\t\t\t13. User\n\t\t\t\t00. Exit ";
	cout << endl;

	//take input for program
	cout << "\n\n\tPrint 1,2,3,4,5,6,7,8,9,10,11,00 For program ";
	cin >> ::num1;
	getch();
	system("clear||cls");
	//Sleep(1000);

	switch (num1)
	{
	case 1:
		eoood1();
		break;

	case 2:
		abso1();
		break;

	case 3:
		discount1();
		break;

	case 4:
		profit1();
		break;

	case 5:
		age1();

		break;

	case 6:
		triangle1();
		break;

	case 7:
		leap1();
		break;

	case 8:
		gross1();
		break;

	case 9:
		phone1();
		break;

	case 10:
		root1();
		break;

	case 11:
		divson1();
		break;

	case 12:
		character1();

		break;

	case 13:
		taskmanager();
		break;

	case 00:
		exit();
		break;

	default:
		cout << "\n\n\n\n\n\t\t\t\t\tSorry " << name << " No such command is found in my memory .You Can retry.\n\n";
		getch();
		system("clear||cls");
		code();
		break;
	}
}

//task 01 output
void output()
{
	//Sleep(1000);
	cout << "\n\nHello " << name << " Welcome to our program ";

	//Programs are shown in function
	cout << "\n\nHere you find these output programs \n\n\t\t\t\t1. Hello World\n\t\t\t\t2. Marks\n\t\t\t\t3. Sum of two Numbers\n\t\t\t\t4. Faranhite to Celcius\n\t\t\t\t5. Simple Interest\n\t\t\t\t6. ASCII Value\n\t\t\t\t7. Swap two Numbers\n\t\t\t\t8. Area of Circle\n\t\t\t\t9. Positive or Negative\n\t\t\t\t10. Even or Odd\n\t\t\t\t11. Swap Addition Into Subtraction And Subtraction Into Addition\n\t\t\t\t12. User\n\t\t\t\t00. Exit ";
	cout << endl;

	//take input for program
	cout << "\n\n\tPrint 1,2,3,4,5,6,7,8,9,10,11,00 For program ";
	cin >> ::num1;
	getch();
	system("clear||cls");
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

	case 11:
		swaap();
		break;

	case 12:
		taskmanager();
		break;

	case 00:
		exit();
		break;

	default:
		cout << "\n\n\n\n\n\t\t\t\t\tSorry " << name << " No such command is found in my memory .You Can retry.\n\n";
		getch();
		system("clear||cls");
		output();
		break;
	}
}

//TASK 02 OUTPUT
void output1()
{
	//Sleep(1000);
	cout << "\n\nHello " << name << " Welcome to our program ";

	//Programs are shown in function
	cout << "\n\nHere you find these output programs \n\n\t\t\t\t1. Even Odd\n\t\t\t\t2. Absolute Value\n\t\t\t\t3. 10% discount if expence is more than 5000\n\t\t\t\t4. Check Profit or loss\n\t\t\t\t5. Checking Age and tell who is youngest\n\t\t\t\t6. Check Triangle is valid or not\n\t\t\t\t7. Check leap year\n\t\t\t\t8. Gross Swalry\n\t\t\t\t9. Check Telephone Bill\n\t\t\t\t10. Root\n\t\t\t\t11. Check Division\n\t\t\t\t12. Recognize Character\n\t\t\t\t13. User\n\t\t\t\t00. Exit ";
	cout << endl;

	//take input for program
	cout << "\n\n\tPrint 1,2,3,4,5,6,7,8,9,10,11,00 For program ";
	cin >> ::num1;
	getch();
	system("clear||cls");
	//Sleep(1000);

	switch (num1)
	{
	case 1:
		eoood();
		break;

	case 2:
		abso();
		break;

	case 3:
		discount();
		break;

	case 4:
		profit();
		break;

	case 5:
		age();

		break;

	case 6:
		triangle();
		break;

	case 7:
		leap();
		break;

	case 8:
		gross();
		break;

	case 9:
		phone();
		break;

	case 10:
		root();
		break;

	case 11:
		divson();
		break;

	case 12:
		character();

		break;
	case 13:
		taskmanager();
		break;

	case 00:
		exit();
		break;

	default:
		cout << "\n\n\n\n\n\t\t\t\t\tSorry " << name << " No such command is found in my memory .You Can retry.\n\n";
		getch();
		system("clear||cls");
		output();
		break;
	}
}

void programmer()
{
	cout << "\n\n\n\t\t\tSyed Mansoor ul Hassan Bukhari.\n\n\t\tStudied at Uajk King Abdullah Campus\n\n\t\tRoll No. 19\n\tProgram BS(AI)\n\t";
	system("clear||cls");
	getch();
	taskmanager();
}

void hlw()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << endl
		 << "\n1. Write a program to print Hello World on screen ";
	//Sleep(3000);
	getch();
	system("clear||cls");
	cout << "\n\n\n\n\t\t\t\t\tHello World";
	getch();
	system("clear||cls");

	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		hlw1();
	}
	else
	{
		output();
	}
	getch();
	system("clear||cls");
}

void display()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << endl
		 << "\n2. Write a program to display output ";
	cout << "\n\nPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "\n\n\t\tSubject\t\t\tMarks\n\t\tMathematics\t\t90\n\t\tComputer\t\t77\n\t\tChemistry\t\t69\n";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		display1();
	}
	else
	{
		output();
	}
	getch();
	system("clear||cls");
}

void sum()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n3. Write a program which accept two numbers and print their sum";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter the value of num1 ";
	cin >> ::num1;
	cout << "\nEnter the value of num2 ";
	cin >> ::num2;
	system("clear||cls");
	cout << "Your given numbers are " << num1 << " and " << num2;
	getch();
	system("clear||cls");
	cout << "\n\n\n\n\t\t\t\t\t\t" << num1 << " + " << num2 << " = " << num1 + num2;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		sum1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void temp()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n4. Write a program which accept temperature in faranhite and print in celcius ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter temperature in faranhite ";
	cin >> ::nm1;
	getch();
	system("clear||cls");
	cout << " \n\n\n\t\t\t\tYour given temperature is " << nm1 << "F and " << (nm1 - 32) * 5 / 9 << "C";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		temp1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void interest()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n5. Write a program which accept principle,time and rate from user and print the simple interest ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter Principle ";
	cin >> ::nm1;
	cout << "\nEnter time ";
	cin >> ::num1;
	cout << "\nEnter rate ";
	cin >> ::nm2;
	getch();
	system("clear||cls");
	getch();
	cout << "The Simple Interest is " << (nm1 * num1 * nm2) / 100 << endl;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		interest1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void ascii()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n6. Print a program which accept a character and print its ASCII value ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Give me a character and i give you its ASCII value ";
	cin >> ::val;
	system("clear||cls");
	getch();
	cout << "\n\n\n\t\t\tThe ASCII value of " << val << " is " << int(val);
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		ascii1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void swap()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n7. Write a program to swap the values of two variables ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter two values for swap \nEnter the value of a ";
	cin >> ::num1;
	cout << "\nEnter the value of b ";
	cin >> ::num2;
	getch();
	system("clear||cls");
	cout << "Before swap the value of a is " << num1 << " and the value of b is " << num2 << endl;
	int c = num1;
	num1 = num2;
	num2 = c;
	cout << "After swap the value of a is " << num1 << " and the value of b is " << num2 << endl;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		swap1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void aoc()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n8. Write a program to calculate area of circle ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter the radius of circle ";
	cin >> nm1;
	getch();
	system("clear||cls");
	cout << "As the Radius of Circle is " << nm1 << ". So Area of Circle " << 3.14 * nm1 * nm1;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		aoc1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void chck()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n9. Write a program to check whether number is positive or negative using ternary operator";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Chose a number ";
	cin >> ::num1;
	getch();
	system("clear||cls");
	string chk = (num1 > 0) ? "Positive " : "Negative";
	cout << "\n\n\n\t\t\t\tHello " << name << " ,Your chosen number is " << num1 << " which is " << chk;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		chck1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void EoO()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n10. Write a program to check whether number is even or odd ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Chose a number ";
	cin >> ::num1;
	getch();
	system("clear||cls");
	string chk = (num1 % 2 == 0) ? "Even" : "Odd";
	cout << "\n\n\n\t\t\t\tHello " << name << " ,Your chosen number is " << num1 << " which is " << chk;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		EoO1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void swaap()
{
	int a, b, c, d;
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n11. Write a program to swap to numbers\n\nThis Program is Alternative of 7 ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter the value of number 1 " << endl;
	cin >> a;
	cout << "\nEnter the value of number 2 " << endl;
	cin >> b;
	system("clear||cls");
	getch();
	c = a + b;
	d = a - b;
	cout << "\n\nBefore swap the value of a+b  is " << c << " and the value of a-b is " << d << endl;
	int e = c;
	c = d;
	d = e;
	cout << "\nAfter swap the value of a+b  is " << c << " and the value of a-b is " << d << endl;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		swaap1();
		getch();
		system("clear||cls");
	}
	else
	{
		output();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
	;
}

//NOW WE SHOW CODE

void hlw1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << endl
		 << "\n1. Write a program to print Hello World on screen ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\t";
	cout << "cout<<\"Hello World\";\n\treturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		hlw();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void display1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << endl
		 << "\n2. Write a program to display output ";
	cout << "\n\nPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "include<iostream>\nusing namespace std;\nint main(){\ncout<<\"This Project Is Created By Majid \\n\\n Subject\\t\\tMarks\"<<endl<<\"Mathematics\\t 90\"<<endl<<\"Computers\\t 77\"<<endl<<\"Chemistry\\t69\";\nreturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		display();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void sum1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n3. Write a program which accept two numbers and print their sum";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tint num1 , num2, c;\n\tcout<<\"\\n\\nEnter the value of number 1\\t\\t\";\n\tcin>>num1;\n\tcout<<\"\\nEnter the value of number 2\\t\\t\";\n\tcin>>num2;\n\tc = num1 + num2;\n\tcout<<\"\\n\\t\\t\\t\\tThe sum of \"<<num1<<\" and \"<<num2<<\" is \"<<c;\n\treturn 0;\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		sum();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void temp1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n4. Write a program which accept temperature in faranhite and print in celcius ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tfloat f, c;\n\tcout<<\"\\n\\t\\t\\t\\tGive the value of temperature in faranhite \";\n\tcin>>f;\n\t//Here we apply formula to convert temp. from F to C.\n\tc= (f-32)*5/9;\n\tcout<<\"\\nYour chosen temperature is \"<<\"F and \"<<c<< \"C\";\n\treturn 0;\n\t";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		temp();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void interest1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n5. Write a program which accept principle,time and rate from user and print the simple interest ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tfloat p,t,r;\n\tcout<<\" Enter the principle \";\n\tcin>>p;\n\tcout<<\"\nEnter the time \";\n\tcin>>t;\n\tcout<<\"\nEnter the rate \";\n\tcin>>r;\n\tcout<<\"\\n\\n\\t\\t\\t\\tSimple interest is \"<<(p*r*t)/100;\n\treturn 0;\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		interest();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void ascii1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n6. Print a program which accept a character and print its ASCII value ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tcout<<\"\\n\\t\\t\\t\\tThis Project is created by S.Mansoor ul Hassan Bukhari\\n\\n\\t\\t\\t6. Write a program which accept a character and display its ASCII value.\\n\";\n\tchar as;\n\tcout<<\"Enter a character \\n\";\n\tcin>>as;\n\tcout<<\"\\n\\t\\t\\t\\t\\t\\tThe ASCII vale of \"<<as<<\" is \"<<int(as);\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		ascii();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void swap1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n7. Write a program to swap the values of two variables ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\n#include <conio.h>\nusing namespace std;\n\nint num1,num2;\n\nint main(){\n\tcout<<\"Enter two values for swap \nEnter the value of a \";\n\tcin>>::num1;\n\tcout<<\"\\nEnter the value of b \";\n\tcin>>::num2;\n\tgetch();\n\tsystem(\"clear\");\n\tcout<<\"Before swap the value of a is \"<<num1<<\" and the value of b is \"<<num2<<endl;\n\tint c = num1;\n\tnum1 = num2;\n\tnum2 = c;\n\tcout<<\"After swap the value of a is \"<<num1<<\" and the value of b is \"<<num2<<endl;\treturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		swap();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void aoc1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n8. Write a program to calculate area of circle ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tint r;\n\tint const d = 3.14;\n\tcout<<\"Give the value of radius of circle\\n\";\n\tcin>>r;\n\tcout<<\"\\nThe value of area of circle is \"<<d*r*r;\n\treturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		aoc();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void chck1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n9. Write a program to check whether number is positive or negative using ternary operator";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tint num;\n\tcout<<\"Enter the number of your choice \";\n\tcin>>num;\n\tstring chck = (num>0) ? \"Positive\":\"Negative\";\n\tcout<<\"Your given number is \"<<chck;\n\treturn 0;\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		chck();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void EoO1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n10. Write a program to check whether number is even or odd ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main (){\n\tint n;\n\tcout<<\"Write a number of your choice \";\n\tcin>>n;\n\tstring num=(n%2==0)?\"Even\":\"Odd\";\n\tcout<<\"\\n\\n\\t\\t\\t\\t\\tYour Given Number is \"<<num;\n\treturn 0;\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		EoO();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void swaap1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n11. Write a program to swap to numbers\n\nThis Program is Alternative of 7 ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tint a , b, c ,d;\n\tcout<<\"Enter the value of number 1 \"<<endl;\n\tcin>>a;\n\tcout<<\"\\nEnter the value of number 2 \"<<endl;\n\tcin>>b;\n\tc = a+b;\n\td = a-b;\n\tcout<<\"\\n\\nBefore swap the value of a+b  is \"<<c<<\" and the value of a-b is \"<<d<<endl;\n\tint f = c;\n\tc = d;\n\td = f;\n\tcout<<\"After swap the value of a+b  is \"<<c<<\" and the value of a-b is \"<<d<<endl;\n\treturn 0;}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		swaap();
		getch();
		system("clear||cls");
	}
	else
	{
		code();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void exit()
{
	cout << "\n\n\n\n\n\n\n\t\t\t\t\tThanks " << name << " for using our Program.";
}

//Project 01 Completed

//Now second project is started

//1st
void eoood()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n01. Write a program to check whether number is even or odd ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter a number ";
	cin >> ::num1;
	system("clear||cls");
	getch();
	if (num1 % 2 == 0)
	{
		cout << "\n\n\n\t\t\t\tYour given Number is even";
	}

	else
	{
		cout << "\n\n\n\t\t\t\tYour given Number is odd";
	}
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		eoood1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void eoood1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n01. Write a program to check whether number is even or odd ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\tint main(){\n\tint eoo;\n\tcout<<\"Enter a number \";\n\tcin>>eoo;\n\tif (eoo%2==0){\n\t  		cout<<\"\\nYour given Number is even\";\n\t}\nelse{\n\tcout<<\"\\nYour given Number is odd\";\n\t}\nreturn 0;\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		eoood();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//2nd
void abso()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n02. Write a program to check absolute value of a number ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Enter a number ";
	cin >> ::num1;
	system("clear||cls");
	getch();
	cout << "\n\n\n\n\n\t\t\t\tThe absolute value of " << num1 << " is " << abs(num1);
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		abso1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void abso1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n02. Write a program to check absolute value of a number ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\tint main(){\n\tint abso;\n\tcout<<\"Enter a number to check it's absolute value \";\n\tcin>>abso;\n\tcout<<\"\\nThe absolute value of \"<<abso<<\" is \"<<abs(abso);\n\treturn 0;\n\t}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		abso();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//3rd
void discount()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n03. Write a program to check total expance and give 10% discount if expence is more than 5000 ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Quantity of product ";
	cin >> ::num1;
	cout << "\nPrice of the product ";
	cin >> nm1;
	system("clear||cls");
	getch();
	::num2 = num1 * nm1; //num2 = total expance
	if (num2 >= 5000)
	{
		float discout = num2 - (5000 * 0.1);
		cout << "\n\n\n\t\t\t\tYour amount is " << num2 << " And With dicount your total amount is " << discout;
	}
	else
	{
		cout << "\n\n\n\t\t\t\tYour total amount is " << num2;
	}
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		discount1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void discount1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n03. Write a program to check total expance and give 10% discount if expence is more than 5000 ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\tint main(){\n\tfloat quan, price, totlexpnc;\n\tcout<<\"Quantity of product \";\n\tcin>>quan;\n\tcout<<\"\\nPrice of the product \";\n\tcin>>price;\n\ttotlexpnc = quan * price;\n\tif (totlexpnc>=5000)\n\t{\n\tfloat discout = totlexpnc-(5000*0.1);\n\tcout<<\"\\nYour amount is \"<<totlexpnc<<\" And With dicount your total amount is \"<<discout;\n\t}\n\telse{\n\tcout<<\"\\nYour total amount is \"<<totlexpnc;\n\t}\n\treturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		discount();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//4th
void profit()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n04. Write a program to Check Profit or loss ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Write cost price ";
	cin >> ::nm1;
	cout << "\nWrite selling price ";
	cin >> ::nm2;
	system("clear||cls");
	getch();
	::nm3 = nm2 - nm1; //total = sellingPrice - costPrice
	if (nm3 > 0)
	{
		cout << "\nHe made profit of " << nm3 << " rs.";
	}

	else if (nm3 == 0)
	{
		cout << "\nNo profit no loss";
	}

	else
	{
		cout << "\nHe incured loss of " << -(nm3) << " rs.";
	}
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		profit1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void profit1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n04. Write a program to Check Profit or loss ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\nint main(){\n\tfloat costprc, selpric,totl;\n\tcout<<\"Write cost price \";\ncin>>costprc;\ncout<<\"\\nWrite selling price \";\ncin>>selpric;\ntotl = selpric - costprc;\nif (totl>0){\n\tcout<<\"\\nHe made profit of \"<<totl<<\" rs.\";\n}\nelse if(totl==0){\n\tcout<<\"\\nNo profit no loss\";\n}\nelse{\n\tcout<<\"\\nHe incured loss of \"<<-(totl)<<\" rs.\";\n}\nreturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		profit();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//5th

void age()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n05. Checking Age and tell who is youngest";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "Age of Ram ";
	cin >> ::num1;
	cout << "Age of Sulabah ";
	cin >> ::num2;
	cout << "Age of Ajay ";
	cin >> ::num3;
	system("clear||cls");
	getch();
	if ((num1 < num2) && (num1 < num3))
	{
		cout << "\nRam is Youngest";
	}

	else if ((num2 < num1) && (num2 < num3))
	{
		cout << "\nSlbah is youngest one";
	}

	else
	{
		cout << "\nAjay is Youngest one";
	}
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		age1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void age1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n05. Checking Age and tell who is youngest";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\nint main(){\n\tfloat costprc, selpric,totl;\n\tcout<<\"Write cost price \";\ncin>>costprc;\ncout<<\"\\nWrite selling price \";\ncin>>selpric;\ntotl = selpric - costprc;\nif (totl>0){\n\tcout<<\"\\nHe made profit of \"<<totl<<\" rs.\";\n}\nelse if(totl==0){\n\tcout<<\"\\nNo profit no loss\";\n}\nelse{\n\tcout<<\"\\nHe incured loss of \"<<-(totl)<<\" rs.\";\n}\nreturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		age();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//6th

void triangle()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n06. Write a program to check whether triangle is valid or not";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "\n\n\n\n\n\nEnter one side of triangle ";
	cin >> ::nm1;
	cout << "\nEnter second side of triangle ";
	cin >> ::nm2;
	cout << "\nEnter third side of traiangle ";
	cin >> ::nm3;
	system("clear||cls");
	getch();
	::num1 = nm1 + nm2 + nm3;
	if (num1 == 180)
	{
		cout << "\n\n\n\n\nYour given triangle is valid because its sum is " << num1;
	}

	else
	{
		cout << "\n\n\n\n\nYour given triangle is not a valid triangle because its sum is " << num1;
	}

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		triangle1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void triangle1()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n06. Write a program to check whether triangle is valid or not";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\nint main(){\n\tint a,b,c,d;\ncout<<\"\\nEnter one side of triangle \";\ncin>>a;\ncout<<\"\\nEnter second side of triangle \";\ncin>>b;\ncout<<\"\\nEnter third side of traiangle \";\ncin>>c;\nd=a+b+c;\nif (d==180)\n\t{\n\tcout<<\"\\nYour given triangle is valid because its sum is \"<<d;\n}\nelse{\n\tcout<<\"\\nYour given triangle is not a valid triangle because its sum is \"<<d;\n }\nreturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		triangle();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//7th

void leap()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n07. Write a program to check whether enter year is leap or not ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");

	cout << "\n\n\n\n\t\t\t\t\tWrite year to check whether it is leap year or not ";
	cin >> ::num1;
	cout << endl;
	system("clear||cls");
	getch();
	if (num1 % 4 == 0)
	{
		if (num1 % 100 == 0)
		{
			if (num1 % 400 == 0)
			{
				cout << "\n\n\n\nYour given year is leap";
			}
			cout << "\n\n\n\nYour given year is leap";
		}
		cout << "\n\n\n\nYour given year is leap";
	}

	else
	{
		cout << "\n\n\n\nYour given year is not leap year.";
	}

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		leap1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void leap1()
{
	cout << "\n\n\n\t\n\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n07. Write a program to check whether entered year is leap year or not";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\nint main()\n{\n\tint leap;\ncout<<\"Write year to check whether it is leap year or not \";\ncin>>leap;\ncout<<endl;\nif (leap%4==0)\n{\n\tif (leap%100==0)\n{\n\ttif (leap%400==0)\n\t\t\t{\n\tcout<<\"\\nYour given year is leap\";\n}\n\n\t   cout<<\"\\nYour given year is leap\";\n }\n\t\tcout<<\"\\nYour given year is leap\";\n}\n\nelse {\n\tcout<<\"Your given year is not leap year.\";\n}\n\nreturn 0;\n}\n";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		leap();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//8th

void gross()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n08. Write a program to check gross sallery if basic sallery is input by user ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");

	cout << "\n\n\n\n\t\t\t\t\Enter basic sallery to check gross sallery ";
	cin >> ::nm1;
	cout << endl;
	system("clear||cls");
	getch();
	if (nm1 < 5000)
	{
		nm2 = nm1 * 10 / 100; //nm1 = basic sallery, nm2 = hra, nm3 = da, nm4 = gross sallery
		nm3 = nm1 * 90 / 100;
	}
	else
	{
		nm2 = 500;
		nm3 = nm1 * 98 / 100;
	}

	nm4 = nm1 + nm2 + nm3;
	cout << "\n\nThe basic sallery is " << nm1;
	cout << "\nthe hra is " << nm2;
	cout << "\nThe da is " << nm3;
	cout << "\nThe gross sallery is " << nm4;
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		gross1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void gross1()
{
	cout << "\n\n\n\t\n\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n08. Write a program to check gross sallery if basic sallery is input by user ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tfloat basic,gross,hra,da;\n\tcout<<\"Enter basic sallery \";\n\tcin>>basic;\nif(basic<5000){\n\thra = basic  * 10 / 100;\n\tda = basic * 90 / 100;\n}\n else {\n\thra = 500;\n\tda = basic *  98 / 100;\n}\n\tgross = basic + hra + da;\n\tcout<<\"\\n\\nThe basic sallery is \"<<basic;\n\tcout<<\"\\nthe hra is \"<<hra;\n\tcout<<\"\\nThe da is \"<<da;\n\tcout<<\"\\nThe gross sallery is \"<<gross;\n\treturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		gross();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//9th

void phone()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n09. Write a program to check total phone bill ";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");

	cout << "Enter number of calls ";
	cin >> num1; //num1 for calls and nm1 for bill
	if (num1 <= 100)
	{
		nm1 = 200;
	}

	else if ((num1 >= 100) && (num1 <= 150))
	{
		num1 = num1 - 100;
		nm1 = 200 + (0.60 * num1);
	}

	else if ((num1 >= 150) && (num1 <= 200))
	{
		num1 = num1 - 150;
		nm1 = 200 + (0.60 * 50) + (0.50 * num1);
	}

	else
	{
		num1 = num1 - 200;
		nm1 = 200 + (0.60 * 50) + (0.50 * 50) + (0.40 * num1);
	}
	cout << "\ntotal bill is Rs. " << nm1;

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		phone1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void phone1()
{
	cout << "\n\n\n\t\n\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n09. Write a program to check total phone bill";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tint call;\n\tfloat bill;\n\tcout<<\"Enter number of calls \";\n\tcin>>call;\n\nif (call<=100)\n{\n\tbill = 200;\n\t}\n\nelse if((call>=100)&&(call<=150)){\n\tcall = call-100;\n\tbill = 200+(0.60*call);\n\t}\n\nelse if((call>=150)&&(call<=200)){\n\tcall = call - 150;\n\tbill = 200+(0.60*50)+(0.50*call);\n\t}\n\nelse {\n\tcall = call - 200;\n\tbill = 200+(0.60*50)+(0.50*50)+(0.40*call);\n\t}\n\tcout<<\"\\ntotal calls \"<<call<<\" and total bill \"<<bill;\n\treturn 0;\n}";

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		phone();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//10th

void root()
{
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n09. Write a program to find root of a quadratic equation";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");

	float a, b, c, d, nm1, nm2, real;
	cout << "Enter the value of a ";
	cin >> a;
	cout << "\nEnter the value of b ";
	cin >> b;
	cout << "\nEnter the value of c";
	cin >> c;
	d = (b * b) - (4 * a * c); //formula b**2-4ac

	if (d > 0)
	{
		nm1 = -b + sqrt(d) / (2 * a);
		nm2 = -b - sqrt(d) / (2 * a);
		cout << "\nOne of these condition is true \n"
			 << nm1 << "i\t\t\t\t" << nm2 << "i\n";
	}

	else if (d == 0)
	{
		nm1 = -b / (2 * a);
		cout << "\n"
			 << nm1;
	}

	else
	{
		real = -b / (2 * a);
		nm1 = sqrt(d) / (2 * a);
		nm2 = sqrt(d) / (2 * a);
		cout << "Your given nmbr is " << real << " + " << nm1 << " i";
		cout << "Your given nmbr is " << real << " - " << nm2 << " i";
	}

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		root1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void root1()
{
	cout << "\n\n\n\t\n\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n10. Write a program to find root";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\n#include <math.h>\nusing namespace std;\n\tint main()\n{\n\t\tfloat a, b, c, d, nm1, nm2, real;\n\tcout << \"Enter the value of a \";\n\tcin >> a;\n\tcout << \"\\nEnter the value of b \";\n\tcin >> b;\n\tcout << \"\\nEnter the value of c\";\n\tcin >> c;\n\td = (b * b) - (4 * a * c);\n\nif (d > 0)\n\t{\n\t\tnm1 = -b + sqrt(d) / (2 * a);\n\tnm2 = -b - sqrt(d) / (2 * a);\n\tcout << \"\\nOne of these condition is true \\n\" << nm1 << \"i\\t\\t\\t\" << nm2 << \"i\\n\";\n\t}\n\nelse if (d == 0)\n\t{\n\t\tnm1 = -b / (2 * a);\n\tcout << \"\\n\" << nm1;\n\t}\n\nelse\n{\n\t\treal = -b / (2 * a);\n\tnm1 = sqrt(d) / (2 * a);\n\tnm2 = sqrt(d) / (2 * a);\n\tcout << \"Your given nmbr is \" << real << \" + \" << nm1 << \" i\";\n\tcout << \"Your given nmbr is \" << real << \" - \" << nm2 << \" i\";\n}\n\nreturn 0;\n}";

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		root();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//11th

void divson()
{
	float percentage;
	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n09. Write a program to check divson";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "\nEnter number of subject 01 ";
	cin >> ::nm1;
	cout << "\nEnter number of subject 02 ";
	cin >> ::nm2;
	cout << "\nEnter number of subject 03 ";
	cin >> ::nm3;
	cout << "\nEnter number of subject 04 ";
	cin >> ::nm4;
	cout << "\nEnter number of subject 05 ";
	cin >> num1;

	nm5 = num1 + nm1 + nm2 + nm3 + nm4; //check total

	cout << "\nObtained Number " << nm5;
	percentage = nm5 / 5;
	cout << "\nPercentage " << percentage << endl;
	if (percentage >= 60)
	{
		cout << "You got 1st division ";
	}

	else if ((percentage >= 50) && (percentage <= 60))
	{
		cout << "You got 2nd division ";
	}

	else if ((percentage >= 40) && (percentage <= 49))
	{
		cout << "You got 3rd division ";
	}

	else
	{
		cout << "Fail";
	}

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		divson1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void divson1()
{
	cout << "\n\n\n\t\n\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n11. Write a program to find divison";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\t\tfloat nm,nm1,nm2,nm3,nm4,nm5,percentage;\n\tcout<<\"\\nEnter number of subject 01 \";\n\tcin>>nm;\n\tcout<<\"\\nEnter number of subject 02 \";\n\tcin>>nm1;\n\tcout<<\"\\nEnter number of subject 03 \";\n\tcin>>nm2;\n\tcout<<\"\\nEnter number of subject 04 \";\n\tcin>>nm3;\n\tcout<<\"\\nEnter number of subject 05 \";\n\tcin>>nm4;\n\n\tnm5 = nm+nm1+nm2+nm3+nm4;\n\tcout<<\"\\nObtained Number \"<<nm5;\n\tpercentage = nm5/5;\n\tcout<<\"\\nPercentage \"<<percentage<<endl;\n\nif (percentage>=60)\n{\n\t\tcout<<\"You got 1st division \";\n}\n\nelse if  ((percentage>=50)&&(percentage<=60))\n{\n\t\tcout<<\"You got 2nd division \";\n\t}\n\nelse if ((percentage>=40)&&(percentage<=49))\n{\n\t\tcout<<\"You got 3rd division \";\n}\nelse \n{\n\t\tcout<<\"Fail\";\n}\n\nreturn 0;\n}";

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		divson();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

//12th

void character()
{

	cout << "\n\n\n\t\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n12. Write a program to check character";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "enter character to check whether it is Capital,Small,Symbol,digit ";
	cin >> val; //character
	num1 = int(val);
	cout << num1;
	if ((num1 >= 65) && (num1 <= 90))
	{
		cout << "\nIt is a Capital case letter. ";
	}

	else if ((num1 >= 97) && (num1 <= 122))
	{
		cout << "\nIt is a Small case letter. ";
	}

	else if ((num1 >= 48) && (num1 <= 57))
	{
		cout << "\nIt is a digit. ";
	}

	else if (((((num1 >= 0) && (num1 <= 47)) || ((num1 >= 58) && (num1 <= 64)) || ((num1 >= 91) && (num1 <= 96)) || ((num1 >= 123) && (num1 <= 127)))))
	{
		cout << "\nIt is symbol ";
	}

	else
	{
		cout << "Oh,No such case is found";
	}

	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for code or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		character1();
		system("clear||cls");
		getch();
	}
	else
	{
		output1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}

void character1()
{
	cout << "\n\n\n\t\n\t\tHello " << name << " Thanks for opening Program ";
	cout << "\n\n11. Write a program to find divison";
	cout << "\n\n\n\t\t\t\t\tPress Enter For Program ";
	getch();
	system("clear||cls");
	cout << "#include <iostream>\nusing namespace std;\n\nint main(){\n\tchar d;\n\tint e;\n\tcout<<\"enter character to check whether it is Capital,Small,Symbol,digit \";\n\tcin>>d;\n\te = int(d);\n\tcout<<e;\n\nif ((e>=65)&&(e<=90))\n{\n\t\tcout<<\"\\nIt is a Capital case letter. \";\n\t}\n\nelse if ((e>=97)&&(e<=122)){\n\t\tcout<<\"\\nIt is a Small case letter. \";\n\t}\n\nelse if((e>=48)&&(e<=57)){\n\t\tcout<<\"\\nIt is a digit. \";\n\t}\n\nelse if (((((e>=0)&& (e<=47))||((e>=58)&&(e<=64))||((e>=91)&&(e<=96))||((e>=123)&&(e<=127))))){\n\t\tcout<<\"\\nIt is symbol \";\n\t}\n\nelse {\n\t\tcout<<\"Oh,No such case is found\";\n\t}\n\nreturn 0;\n}";
	getch();
	system("clear||cls");
	cout << "\n\nPress 1 for output or press 0 for menu ";
	cin >> ::num1;
	if (num1 == 1)
	{
		character();
		getch();
		system("clear||cls");
	}
	else
	{
		code1();
		getch();
		system("clear||cls");
	}
	getch();
	system("clear||cls");
}
