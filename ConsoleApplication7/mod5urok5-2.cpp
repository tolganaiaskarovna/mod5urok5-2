#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<math.h>
using namespace std;
void main()

{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	cout << "Введите номер задания";
	cin >> n;
	switch (n)
	{// 1.	Дан квадратный массив из n элементов. Найти произведение элементов первой строки 

	case 1: {

		int mas[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mas[i][j] = 1 + rand() % 10;

			}

		}
		int sum = 0;
		int proiz = 1;
		for (int i = 0; i < 3; i++)
		{
			cout << mas[0][i] << "\t";
			sum += mas[0][i];
			proiz *= mas[0][i];
		}
		cout << "\nsum=" << sum << endl;
		cout << "proiz=" << proiz;
		cout << endl;

	}
			break;

			//
			//2.	Дана целочисленная квадратная матрица. Написать программу упорядочения ее строк по возрастанию сумм их элементов
	case 2: {
		int mas[3][4] = { { 0 },{ 0 } };

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mas[i][j] = 1 + rand() % 50;
				cout << mas[i][j] << "\t";
				mas[i][3] += mas[i][j];
			}

			cout << mas[i][3];

			cout << endl;
		}

		cout << endl;

		int k = 0;
		for (k = 0; k < 3; k++)
		{
			for (int i = 2; i >= 0; i--)
			{
				if (mas[i][3] < mas[i - 1][3])
				{
					int vrem[4];
					for (int j = 0; j < 4; j++)
					{
						vrem[j] = mas[i][j];
						mas[i][j] = mas[i - 1][j];
						mas[i - 1][j] = vrem[j];
					}
				}
			}
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << mas[i][j] << "\t";
			}
			cout << mas[i][3];
			cout << endl;
		}

	}
			break;

			//
	case 3: {
		// 3.	Дана целочисленная матрица размера 5×10. Найти минимальное значение среди сумм элементов всех ее строк
		int mas[5][11] = { { 0 },{ 0 } };

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				mas[i][j] = 1 + rand() % 50;
				cout << mas[i][j] << "\t";
				mas[i][10] += mas[i][j];
			}

			cout << mas[i][10];

			cout << endl;
		}

		cout << endl;

		int k = 0;
		for (k = 0; k < 10; k++)
		{
			for (int i = 4; i >= 0; i--)
			{
				if (mas[i][10] < mas[i - 1][10])
				{
					int vrem[11];
					for (int j = 0; j < 11; j++)
					{
						vrem[j] = mas[i][j];
						mas[i][j] = mas[i - 1][j];
						mas[i - 1][j] = vrem[j];
					}
				}
			}
		}

		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << mas[i][j] << "\t";
			}
			cout << mas[i][10];
			cout << endl;
		}

	}
			break;



	case 4:
	{
		//4.	Ввести массив, состоящий из 9 элементов (девять двузначных чисел в восьмеричной системе счисления) .
		//Сформировать новый массив  путем перевода значений элементов исходного массива в десятичную систему счисления

		int m[5][13], count = 0;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				m[i][j] = -10 + rand() % 50;
				cout << m[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;


		for (int i = 0; i < 5; i++)
		{
			count = 0;
			for (int j = 0; j < 13; j++)
			{
				if (m[i][j] < 0)
					count++;

				if (count == 2)
				{
					int kj = j + 1;
					for (kj; kj < 13; kj++)
					{
						for (int p = 12; p >= (j + 1); p--)
						{
							if (m[i][p] < m[i][p - 1])
							{
								int a = m[i][p];
								m[i][p] = m[i][p - 1];
								m[i][p - 1] = a;
							}
						}
					}

					j = 14;
				}

			}
		}

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				cout << m[i][j] << "\t";
			}
			cout << endl;
		}
	}

	break;
	
	case 5:
	{//5.	Дан массив A(n,m). Удалить строки массива, не имеющие ни одного повторяющегося элемента
		int m[5][13], count = 0;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				m[i][j] = 1 + rand() % 35;
				cout << m[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			count = 0;
			for (int j = 0; j < 13; j++)
			{
				int hh = m[i][j];

				for (int a = 0; a < 13; a++)
				{
					if (a != j)
					{
						if (hh == m[i][a])
							count++;
					}
				}
			}
			if (count == 0)
			{
				for (int b = 0; b < 13; b++)
					m[i][b] = 0;
			}
		}

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				cout << m[i][j] << "\t";
			}
			cout << endl;
		}

	}

	break;
	case 6: {

		//6.	Элементы матрицы A сделать с помощью генератора случайных чисел. Сделать новую матрицу B , в которой удалить с матрицы А ряд, 
		//в котором минимальный элемент среди элементов главной диагонали

		int m[5][5], n[5][5] = { { 0 },{ 0 } };

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				m[i][j] = 1 + rand() % 35;
				cout << m[i][j] << "\t";
			}
			cout << endl;
		}


		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				n[i + 1][j + 1] = m[i + 1][j + 1];
			}
		}
		cout << "--------------------" << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << n[i][j] << "\t";
			}
			cout << endl;
		}
	}




	}

}