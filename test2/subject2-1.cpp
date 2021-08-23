#include <iostream>
#include <string>

using namespace std;


class Account {
private:
	string name;
	int id;
	int balance;
public:
	Account(string a, int b, int c);
	string getOwner();
	int deposit(int a);
	int withdraw(int a);
	int inquiry();
};

Account::Account(string a, int b, int c)
{
	name = a;
	id = b;
	balance = c;
}

string Account::getOwner()
{
	return name;
}

int Account::deposit(int a)
{
	return balance += a;
}

int Account::withdraw(int a)
{
	return balance -= a;
}

int Account::inquiry()
{
	return balance;
}




int main()
{
	Account a("kitae", 1, 5000); //id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����

	a.deposit(50000);

	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl;

	int money = a.withdraw(20000);

	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl;


	return 0;
}