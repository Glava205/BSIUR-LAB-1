// MyLab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
int main()
{
	double x, y, z, l;
	std::cout << "Vvedite x";
	while (!(std::cin >> x) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "Error!" << std::endl;
	}
	std::cout << "Vvedite y";
	while (!(std::cin >> y) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "Error!" << std::endl;
	}
	std::cout << "Vvedite z";
	while (!(std::cin >> z) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "Error!" << std::endl;
	}
	double a = pow(y, (-sqrt(abs(x))));/*160694*/
	std::cout << a << std::endl;
	double b = log(a);/*11.9873*/
	std::cout << b << std::endl;
	double c = (x - (y / 2));/*-15.2692*/
	std::cout << c << std::endl;
	double d = pow(sin(atan(z)), 2);/*1*/
	std::cout << d << std::endl;
	double rez = b * c - d;/* -184.036 */
	std::cout << rez << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
