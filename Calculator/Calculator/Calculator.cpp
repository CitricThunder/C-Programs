#include <iostream>
#include <conio.h>
#include <cmath>
#include <array>
#include <string>
#include <Windows.h>

using namespace std;

bool startOver = false;

//Initializing Functions

int Addition(int x, int y);
int Subtraction(int x, int y);
int Multiplication(int x, int y);
int Division(int x, int y);
int pythTheo(int x, int y);

int main(){

	//Variables

	int x;
	int y;
	char type;
	char ch;
	string mathType;
	string startOverAns;

	//Main loop

	do{
		cout << "What do you want to do?" << endl;
		cout << "A=Addition, S=Subtraction, M=Multiplication, D=Divison, P=Pythagorean Theorem" << endl;
		ch = getch();
		switch(ch){
		case 'a':
			cout << "You have selected addition" << endl;
			Sleep(1000);
			cout << "Please enter first number" << endl;
			cin >> x;
			cout << "Please enter second number" << endl;
			cin >> y;
			cout << x << "+" << y << "=" << Addition(x, y) << endl;
			break;
		case 's':
			cout << "You have selected subtraction" << endl;
			Sleep(1000);
			cout << "Please enter first number" << endl;
			cin >> x;
			cout << "Please enter second number" << endl;
			cin >> y;
			cout << x << "-" << y << "=" << Subtraction(x, y) << endl;
			break;
		case 'm':
			cout << "You have selected multiplication" << endl;
			Sleep(1000);
			cout << "Please enter first number" << endl;
			cin >> x;
			cout << "Please enter second number" << endl;
			cin >> y;
			cout << x << "*" << y << "=" << Multiplication(x, y) << endl;
			break;
		case 'd':
			cout << "You have selected division" << endl;
			Sleep(1000);
			cout << "Please enter first number" << endl;
			cin >> x;
			cout << "Please enter second number" << endl;
			cin >> y;
			cout << x << "/" << y << "=" << Division(x, y) << endl;
			break;
		case 'p':
			cout << "You have selected pythagorean theorem" << endl;
			Sleep(1000);
			cout << "Enter first side" << endl;
			cin >> x;
			cout << "Enter second side" << endl;
			cin >> y;
			cout << x << " squared" << " + " << y << " squared" << "=" << pythTheo(x, y) << endl;
			break;
		}
		Sleep(1000);
		cout << "Do you want to do more calculations? Y/N" << endl;
		ch = getch();
		switch(ch){
		case 'y':
			startOver = true;
			system("CLS");
			break;
		case 'n':
			startOver = false;
			break;
		}
	}while(startOver == true);
	return 0;
}

//Functions

int Addition(int x, int y){
	int answer;
	answer = x + y;
	return answer;
}
int Subtraction(int x, int y){
	int answer;
	answer = x - y;
	return answer;
}
int Multiplication(int x, int y){
	int answer;
	answer = x * y;
	return answer;
}
int Division(int x, int y){
	int answer;
	answer = x / y;
	return answer;
}
int pythTheo(int x, int y){
	int answer;
	answer = (x * x) + (y * y);
	return answer;
}