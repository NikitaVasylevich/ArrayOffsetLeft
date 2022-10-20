#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	int j = 0;
	const int m = 10;
	int ar2[m] = {};
	cout << "Вывод исходного массива на экран:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl<<endl;
	cout << "Введите значение смещения массива влево: ";	cin >> j;
	//Манипуляции для сдвига массива влево:
	for (int i = 0; i < j; i++)
	{
		ar2[i] = arr[i];
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		arr[i] = arr[i + j];
	}
	for (int i = 0; i < j; i++)
	{
		arr[n - j + i] = ar2[i];
	}
	cout << "Вывод смещенного массива на экран:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}