#include <iostream>

#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <math.h>
#include <time.h>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	srand(time(NULL));
	cout << "Ведите номер задания  : ";
	cin >> nz;

	switch (nz)
	{
		/*1.	Заполнить массив из восьми элементов следующими значениями: первый элемент массива равен 37,
		второй — 0, третий — 50, четвертый — 46, пятый — 34, шестой — 46, седьмой — 0, восьмой —13.*/
	case 1:
	{
		int mas[9] = { 37,0,50,46,37,46,0,13 };
		for (int i = 0; i <= 8; i++)
		{
			cout << mas[i] << endl;
		}





	}
	break;


	/*2.	Заполнить массив из десяти элементов значениями,
	вводимыми с клавиатуры в ходе выполнения программы*/
	case 2:
	{
		int mas[10];
		cout << "Vedite massiv  " << endl;
		for (int i = 0; i < 9; i++)
		{
			cin >> mas[i];
		}
	}
	break;

	/*3.	Массив предназначен для хранения значений ростов двенадцати человек.
	С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 163 до 190 включительно*/
	case 3:
	{
		int people[12];
		for (int i = 0; i < 12; i++)
		{
			people[i] = 163 + rand() % 27;
			cout << people[i] << endl;
		}


	}
	break;


	/*4.	Составить программу вывода на экран
	любого элемента массива по его индексу*/
	case 4:
	{
		int indeks, mas[10] = { 20,30,40,50,60,70,80,90,100,110 };
		cout << "Ведите индекс ";
		cin >> indeks;
		cout << mas[indeks] << endl;

	}
	break;

	/*5.	Вывести элементы массива
	на экран в обратном порядке*/
	case 5:
	{
		int mas[12];
		for (int i = 11; i >= 0; i--)
		{
			mas[i] = 163 + rand() % 27;
			cout << mas[i] << endl;
		}
		break;
	}


	/*6.	Дан массив. Составить программу:
a.	расчета квадратного корня из любого элемента массива;
b.	расчета среднего арифметического двух любых элементов массива
*/
	case 6:
	{
		int prog;
		cout << "Выберите первое или второе задание ";
		cin >> prog;
		int cor, ar1, ar2, mas[10] = { 2,4,6,8,10,25,14,16,18,20 };
		switch (prog)
		{
		case 1:
		{
			cout << "Vedite masiv  ";
			cin >> cor;
			cout << mas[cor] << "   :   " << sqrt(mas[cor]) << endl;
			break;
		}
		case 2:
		{

			cout << "Ведите арифмитические занчения  ";
			cin >> ar1;
			cin >> ar2;
			cout << mas[ar1] << mas[ar2] << "   :   " << mas[ar1] + ar2 / 2 << endl;
			break;
		}


		default:
			break;
		}

	}

	/*7.	Дан массив. Все его элементы:
a.	увеличить в 2 раза;
b.	уменьшить на число А;
c.	разделить на первый элемент
*/


	case 7:
	{
		int cor, ar1, ar2, mas[10] = { 2,4,6,8,10,25,14,16,18,20 };
		cout << "Vedite masiv  ";
		cin >> cor;
		cout << "увеличить в 2 раза   " << mas[cor] * 2 << endl;
		cout << "Ведите число  ";
		cin >> ar1;
		cout << "уменьшить на число      " << mas[cor] - ar1 << endl;
		cout << "разделить на первый элемент " << mas[cor] / mas[0] << endl;



	}

	/*8.	В массиве хранятся сведения о стоимости
	12 различных предметов. Определить общую стоимость всех предметов*/
	case 8:
	{
		int summa = 0, mas[10] = { 100,200,300,400,500,600,700,800,900,10000 };
		for (int i = 0; i < 10; i++)
		{
			summa += mas[i];

		}
		cout << summa << endl;
	}


	/*9.	В массиве хранятся сведения о количестве осадков,
	выпавших за каждый день февраля. Определить среднедневное количество осадков в этом месяце*/
	case 9:
	{
		int osadki=0, mas[28];
		for (int  i = 0; i < 28; i++)
		{
			mas[i] = 1 + rand() % 100;
			cout << mas[i] << endl;
			osadki += mas[i];
				cout << "Kol-vo  " << osadki / 28 << endl;
		}
	}


	/*10.	В массиве хранится информация 
	о массе каждого из 30 предметов, загружаемых в грузовой автомобиль, грузоподъемность которого известна. Определить,
	не превышает ли общая масса всех предметов грузоподъемность автомобиля*/
	case 10:
	{
		int massa=0,mas[30],ma=9000;
		for (int i = 0; i < 30; i++)
		{
			mas[i] = 1 + rand() % 200;
			massa+=mas[i];

		}
		if (ma < massa)
		{
			cout << "Ne privisilo ves avto " << endl;
		}
		else
		{
			cout << " privisilo ves avto " <<  massa<<  "  vmestilosi "  <<endl;
		}
	}


	/*11.	Дан массив. Напечатать: 
a.	все неотрицательные элементы; 
b.	все элементы, не превышающие число 100.
c.	все четные элементы
*/
	case 11:
	{
		int  mas[100 ] ;
		cout << "все неотрицательные элементы " << endl;
		for (int i = 0; i < 100; i++)
		{
			mas[i] = 100 + rand() % 5000;
			if (mas[i] >= 0)
				cout << mas[i] << "  ";
		}
		cout << endl;
		cout << "все элементы, не превышающие число 100 " << endl;
		for (int i = 0; i < 100; i++)
		{
			mas[i] = 100 + rand() % 5000;
			if (mas[i] >= 100)
				cout << mas[i] << "  ";
		}
		cout << endl;
		cout << "все четные элементы  " << endl;
		for (int i = 0; i < 100; i++)
		{
			mas[i] = 100 + rand() % 5000;
			if (mas[i]%2)
				cout << mas[i] << "  ";
		}


	cout << endl;

		
		
	}


	/*12.	Дан массив. Вывести на экран сначала его элементы, 
	стоящие на четных местах, затем — на нечетных*/
	case 12:
	{
		int  mas[50];
		cout << "все четные элементы  " << endl;
			for (int i = 0; i < 100; i++)
			{
				mas[i] = 100 + rand() % 5000;
				if (mas[i] % 2)
					cout << mas[i] << "  ";
			}
			cout << endl;
			cout << "все не четные элементы  " << endl;
			for (int i = 0; i < 100; i++)
			{
				mas[i] = 100 + rand() % 5000;
				if (mas[i]%2 !=0)
					cout << mas[i] << "  ";
			}
			cout << endl;


		}
	}
	







	system("pause");
}