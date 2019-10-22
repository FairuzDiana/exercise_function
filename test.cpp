#include <iostream>

using namespace std;

void adult();
void children();
void senior_citizen();
void exit();

int main()

{
	int menu;
	cout << "please choose:\n1.adult Gym\n2.children Gym\n3.senior citizen Gym\n4.exit"<< endl;
	cin >> menu;

	
	switch (menu)
	{
		case 1: adult(); break;
		case 2: children(); break;
		case 3: senior_citizen(); break;
		case 4: exit(); break;
		default : cout << "please enter the number between 1-4. TQ!\n"; break;
	
	}
	
}

void adult()
{
	
	int total, month;
	cout << "how many months you want to subscribe:\n";
	cin >> month;
	total = month*50;
	cout << "your price is RM " << total<< endl;
	
}

void children ()
{

	int total, month;
	cout << "how many months you want to subscribe:\n";
	cin >> month;
	total = month*20;
	cout << "your price is RM " << total<< endl;
	
}

void senior_citizen()
{
	cout << "price is FREE!!!! " <<endl;
}

void exit()
{
	cout << "Thank you for using our system !!" << endl;
}















