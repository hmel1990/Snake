#include <iostream>
using namespace std;
#include <windows.h>

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //переменная которая указывает на выводимое окно
	SetConsoleTextAttribute(h, 14); // через переменную указываем цвет текста в окне
	srand(time(0));//запуск генератора случайных чисел
	system("title Snake_training");
	/*system("mode con cols=170 lines=31");*/ // устанавливает длину и ширину окна
	MoveWindow(GetConsoleWindow(), 400, 150, 1000, 800, true);// установка стартовой позиции окна консоли (400, 150, 1000, 800 - пиксели) отступ слева, отступ справа, ширина окна, высота окна
	cout << "Hello";
	const int WIDTH = 50; //ширина поля, по которому бегает змейка
	const int HEIGHT = 30;//высота поля, по которому бегает змейка
	const int max_length = 50; // максимальная длина змейки



}