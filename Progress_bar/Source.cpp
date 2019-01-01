#include<iostream>
#include<windows.h>

using namespace std;

void main() {
	
	system("color 0b");
	cout << "\n\n\n\n\n\n\t\t\t\t\t\tPlease wait while loading\n\n";
	
	char a = 177, b = 219;
	cout << "\t\t\t\t\t\t";

	for (int i = 0; i < 25; i++)
		cout << a;
	Sleep(150);
	cout << "\r";
	cout << "\t\t\t\t\t\t";

	for (int i = 0; i < 25; i++) {
		cout << b;
		Sleep(200);
	}

	system("cls");

	cin.get();
}
