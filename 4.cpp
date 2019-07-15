#include<iostream>
using namespace std;
int main ()
{
	
	int num1 ;
	cout << "Enter your score : ";
	cin >> num1;
	cout << "Your score : " << num1 << endl;
	if ( num1<=100) {
		cout << "Grade A\n";
	}

	else if (num1 >=80&&num1<=89) {
		cout << "Grade B\n";
	}
	else if (num1 >=70&&num1<=79) {
		cout << "Grade C\n";
	}
	else if (num1>=60&&num1<=69) {
		cout << "Grade D\n";
	}
	else if (num1 >=0&&num1<=59) {
		cout << "Grade F\n";
	}
	else {
		cout << "error\n";
	}
	
	return(0);
}
