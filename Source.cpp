#include <iostream>
#include <ctime>     
using namespace std;

void fillrand(int arr[], const int n);
void print(int arr[], const int n);

//////////////////////////////////////MAIN

void main ()
{
	const int n = 10;
	int arr[n];
	srand(time(NULL)); // Точка отчёта
	fillrand(arr, n);
	//print(arr, n);
	int n_even = 0;
	int n_odd = 0;
//Посчитать кол-во чётных и не чётных элементов массива//
	for (int i = 0; i < n; i++)
	{///////////////////IF
		if (arr[i]%2==0)n_even++;
		else n_odd++;
	}///////////////////IF
//Выделить минимально возможный обьем памяти для чётных и не чётных элементов массива
	int* arr_even = new int [n_even] {};          // []!
	int* arr_odd = new int [n_odd] {};
//Скопировать чётные значения в массив arr_even, нечётные в arr_odd
	for (int i = 0, j=0, k=0; i < n; i++)
	{
		///////////////////IF
		if (arr [i] % 2 == 0)arr_even[j++] = arr[i];
		else arr_odd[k++] = arr[i];
		///////////////////IF
	}
	cout << endl << endl << endl;
	print(arr_even, n_even);
	cout << endl << endl << endl;
	print(arr_odd, n_odd);
	delete[] arr_even;
	delete[] arr_odd;
}/////////////////////////////////////MAIN

//////////////////////////////////////REALISATION
void fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}