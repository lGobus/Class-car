#include "math.h"
#include <cmath>
#include "iostream"
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <stdio.h>

using namespace std;

class Employee
{
public:
	string mark;
	int chena;
	int god;
};

void showData(Employee* group, int N)
{
	cout << "N " << "Марка"<<"   " << "Год выпуска  " << " " << "Цена" << endl;
	cout << "=====================================" << endl;

	for (int i = 0; i < N; i++) {
		cout << i + 1 <<' ' << group[i].mark << "    " << "    " << group[i].god << "     " << group[i].chena << endl;
	}
}
int main()
{
	int N;

	setlocale(LC_ALL, "Russian");
	cout << "Машины\n";
	cout << "Напишите кол-во записей: \n";
	cin >> N;

	Employee employeelist[20];
	Employee* group = new Employee[N];
	cin.get();

	for (int i = 0; i < N; i++) {
		cout << "Марка: ";
	    getline(cin, group[i].mark);
		cout << "Год выпуска:";
	    cin >> group[i].god;
		cout << "Цена: ";
		cin >> group[i].chena;
		cin.get();
		cout << endl;
	}
	showData(group, N);

	return 0;
}

