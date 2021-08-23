#include <iostream>

using namespace std;

class CoffeeMachine
{
	private:
		int coffee;
		int water;
		int sugar;
	public:
		CoffeeMachine(int a, int b, int c);

		int drinkEspresso();

		int drinkAmericano();

		int drinkSugarCoffee();

		int fill();

		void show();
};

CoffeeMachine::CoffeeMachine(int a, int b, int c) 
{
	coffee = a;
	water = b;
	sugar = c;
}

int CoffeeMachine::drinkEspresso() 
{
	return coffee -= 1,water -= 1;
}

int CoffeeMachine::drinkAmericano()
{
	return coffee -= 1,water -= 2;
}

int CoffeeMachine::drinkSugarCoffee()
{
	return coffee -= 1,water -= 2,sugar -= 1;

}

int CoffeeMachine::fill()
{
	return coffee = 10,water = 10,sugar = 10;
}

void CoffeeMachine::show()
{
	cout << "Ŀ�� �ӽ� ����, " << "Ŀ��:" << coffee << " ��:" << water << " ����:" << sugar << endl;
}



int main() 
{
	CoffeeMachine java(5, 10, 3); //Ŀ�Ƿ�:5, ����:10 ����:6���� �ʱ�ȭ

	java.drinkEspresso(); // Ŀ��1, ��1 �Һ�

	java.show(); //���� Ŀ�� �ӽ��� ���� ���

	java.drinkAmericano(); // Ŀ��1 , ��2 �Һ�

	java.show(); //���� Ŀ�� �ӽ��� ���� ���

	java.drinkSugarCoffee(); //Ŀ��1, ��2, ����1 �Һ�

	java.show(); //���� Ŀ�� �ӽ��� ���� ���

	java.fill(); //Ŀ�� 10, ��10, ���� 10���� ä���

	java.show();//���� Ŀ�� �ӽ��� ���� ���


	return 0;
}