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
	cout << "������ ����� �������  : ";
	cin >> nz;

	switch (nz)
	{
		/*1.	��������� ������ �� ������ ��������� ���������� ����������: ������ ������� ������� ����� 37,
		������ � 0, ������ � 50, ��������� � 46, ����� � 34, ������ � 46, ������� � 0, ������� �13.*/
	case 1:
	{
		int mas[9] = { 37,0,50,46,37,46,0,13 };
		for (int i = 0; i <= 8; i++)
		{
			cout << mas[i] << endl;
		}





	}
	break;


	/*2.	��������� ������ �� ������ ��������� ����������,
	��������� � ���������� � ���� ���������� ���������*/
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

	/*3.	������ ������������ ��� �������� �������� ������ ���������� �������.
	� ������� ������� ��������� ����� ��������� ������ ������ ����������, �������� � ��������� �� 163 �� 190 ������������*/
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


	/*4.	��������� ��������� ������ �� �����
	������ �������� ������� �� ��� �������*/
	case 4:
	{
		int indeks, mas[10] = { 20,30,40,50,60,70,80,90,100,110 };
		cout << "������ ������ ";
		cin >> indeks;
		cout << mas[indeks] << endl;

	}
	break;

	/*5.	������� �������� �������
	�� ����� � �������� �������*/
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


	/*6.	��� ������. ��������� ���������:
a.	������� ����������� ����� �� ������ �������� �������;
b.	������� �������� ��������������� ���� ����� ��������� �������
*/
	case 6:
	{
		int prog;
		cout << "�������� ������ ��� ������ ������� ";
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

			cout << "������ �������������� ��������  ";
			cin >> ar1;
			cin >> ar2;
			cout << mas[ar1] << mas[ar2] << "   :   " << mas[ar1] + ar2 / 2 << endl;
			break;
		}


		default:
			break;
		}

	}

	/*7.	��� ������. ��� ��� ��������:
a.	��������� � 2 ����;
b.	��������� �� ����� �;
c.	��������� �� ������ �������
*/


	case 7:
	{
		int cor, ar1, ar2, mas[10] = { 2,4,6,8,10,25,14,16,18,20 };
		cout << "Vedite masiv  ";
		cin >> cor;
		cout << "��������� � 2 ����   " << mas[cor] * 2 << endl;
		cout << "������ �����  ";
		cin >> ar1;
		cout << "��������� �� �����      " << mas[cor] - ar1 << endl;
		cout << "��������� �� ������ ������� " << mas[cor] / mas[0] << endl;



	}

	/*8.	� ������� �������� �������� � ���������
	12 ��������� ���������. ���������� ����� ��������� ���� ���������*/
	case 8:
	{
		int summa = 0, mas[10] = { 100,200,300,400,500,600,700,800,900,10000 };
		for (int i = 0; i < 10; i++)
		{
			summa += mas[i];

		}
		cout << summa << endl;
	}


	/*9.	� ������� �������� �������� � ���������� �������,
	�������� �� ������ ���� �������. ���������� ������������� ���������� ������� � ���� ������*/
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


	/*10.	� ������� �������� ���������� 
	� ����� ������� �� 30 ���������, ����������� � �������� ����������, ���������������� �������� ��������. ����������,
	�� ��������� �� ����� ����� ���� ��������� ���������������� ����������*/
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


	/*11.	��� ������. ����������: 
a.	��� ��������������� ��������; 
b.	��� ��������, �� ����������� ����� 100.
c.	��� ������ ��������
*/
	case 11:
	{
		int  mas[100 ] ;
		cout << "��� ��������������� �������� " << endl;
		for (int i = 0; i < 100; i++)
		{
			mas[i] = 100 + rand() % 5000;
			if (mas[i] >= 0)
				cout << mas[i] << "  ";
		}
		cout << endl;
		cout << "��� ��������, �� ����������� ����� 100 " << endl;
		for (int i = 0; i < 100; i++)
		{
			mas[i] = 100 + rand() % 5000;
			if (mas[i] >= 100)
				cout << mas[i] << "  ";
		}
		cout << endl;
		cout << "��� ������ ��������  " << endl;
		for (int i = 0; i < 100; i++)
		{
			mas[i] = 100 + rand() % 5000;
			if (mas[i]%2)
				cout << mas[i] << "  ";
		}


	cout << endl;

		
		
	}


	/*12.	��� ������. ������� �� ����� ������� ��� ��������, 
	������� �� ������ ������, ����� � �� ��������*/
	case 12:
	{
		int  mas[50];
		cout << "��� ������ ��������  " << endl;
			for (int i = 0; i < 100; i++)
			{
				mas[i] = 100 + rand() % 5000;
				if (mas[i] % 2)
					cout << mas[i] << "  ";
			}
			cout << endl;
			cout << "��� �� ������ ��������  " << endl;
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