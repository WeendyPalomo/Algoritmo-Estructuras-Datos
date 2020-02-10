#include <iostream>
#include <fstream>
using namespace std;

int mitad(int a[], int pInicial, int pFinal);
void ordenar(int a[], int pInicial, int pFinal);
void guardar(int a[]);

int main()
{

	int A[10] = { 123,-6,13,-33,-98,333,23,-5,0,-100 };
	guardar(A);
	return 0;
}

int mitad(int a[], int pInicial, int pFinal)
{
	return a[(pInicial + pFinal) / 2];
}

void ordenar(int a[], int pInicial, int pFinal)
{
	int i = pInicial;
	int j = pFinal;
	int temp;
	int piv = mitad(a, pInicial, pFinal);

	do
	{
		while (a[i] < piv)
		{
			i++;
		}
		while (a[j] > piv)
		{
			j--;
		}
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);

	if (pInicial < j)
		ordenar(a, pInicial, j);
	if (i < pFinal)
		ordenar(a, i, pFinal);
}

void guardar(int a[])
{
	ofstream archivo;
	archivo.open("Ordenamiento_Quicksort.txt");
	archivo << "Arreglo original: " << endl;
	for (int i = 0; i < 10; i++)
	{
		archivo << " |" << a[i] << "| ";
	}
	ordenar(a, 0, 9);
	archivo << endl << "Ordenamiento Quicksort:" << endl;
	for (int i = 0; i < 10; i++)
	{
		archivo << " |" << a[i] << "| ";
	}
	archivo.close();
}