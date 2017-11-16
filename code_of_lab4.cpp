#include <iostream>
#include "math.h"
#include"iomanip"
#include"conio.h"
#define R 5

using namespace std;



class Matrix
{
private:
	double M[R][R];
public:
	void InputMatrix();
	void OutputMatrix();
	void Sort();
	void AverageArihmetic();
	void MuitiplicationOfAverageArihmetic(double *);
};
void Matrix::InputMatrix()
{
	
	for (int i = 0; i <R; i++)
	{
		for (int j = 0; j < R; j++)
		{
			cout << "[" << i+1 << "][" << j+1 << "]=";
				cin >> M[i][j];
		}
		}
}
void Matrix::OutputMatrix()
{
	
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++)
			cout << setw(1) << M[i][j] << "" <<" \t"
			;
		cout << endl;
	}
	Sort();
}
void Matrix::Sort()
{

	int a=5;
	int b=5;
	int value, memory;
	for (int k = 0; k < a; k++)
		for (int i = 1; i < b; i++)
		{
			value = M[k][i]; memory = i;
			for (int j = 0; j < i; j++)
				if (value > M[k][j])
				{
					memory = j; break;
				}
			for (int j = i; j >= memory + 1; j--)
				M[k][j] = M[k][j - 1];
			M[k][memory] = value;
		}
}
void Matrix::AverageArihmetic()
{


	double sum[R];
	int i, j;
	for (i = 0; i < R; i++)
		sum[i] = 0;

	cout << endl;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < (R - i); j++)
		{
			sum[j] = (sum[j] + M[i][j]);
		}
	}
		for (int i = 0; i < R; i++)
		{
			sum[i] = sum[i] / (R - i);
			cout << "Average Geometric of column " << i + 1 << " = ";
			cout << sum[i] << endl;
		}
		MuitiplicationOfAverageArihmetic(sum);
}

void Matrix::MuitiplicationOfAverageArihmetic(double*ptr)
{
	double Multiplication = 1;
	for (int i = 0; i < R - 1; i++)
	{
		Multiplication = Multiplication*ptr[i];
	}
	cout << "MuitiplicationOfAverageArihmetic= " << Multiplication << endl;
}


	
void main(void)
{

	Matrix A;
	cout << "Input elements of matrix A" << endl;
	A.InputMatrix();
	cout << "\nNewInput Matrix A" << endl;
	A.OutputMatrix();
	A.Sort();
	cout << "\nNewInsert Sorted Matrix A" << endl;
	A.OutputMatrix();
	cout << "\nAverage Geometric:";
	A.AverageArihmetic();

	getchar;
	system("pause");
}