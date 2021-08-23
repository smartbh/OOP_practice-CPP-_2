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
	cout << "커피 머신 상태, " << "커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
}



int main() 
{
	CoffeeMachine java(5, 10, 3); //커피량:5, 물량:10 설탕:6으로 초기화

	java.drinkEspresso(); // 커피1, 물1 소비

	java.show(); //현재 커피 머신의 상태 출력

	java.drinkAmericano(); // 커피1 , 물2 소비

	java.show(); //현재 커피 머신의 상태 출력

	java.drinkSugarCoffee(); //커피1, 물2, 설탕1 소비

	java.show(); //현재 커피 머신의 상태 출력

	java.fill(); //커피 10, 물10, 설탕 10으로 채우기

	java.show();//현재 커피 머신의 상태 출력


	return 0;
}