#include <iostream>

using namespace std;
void agregar(int a[], int n);
void imprimir(int a[], int n);
void menor(int a[], int n);

int main()
{

    int arreglo[]={};
    int m;
/*
    for(int i=0; i<5; i++)
    {
        min=i;
        for(int j=i+1; j<5; j++)
        {
            if(arreglo[j]<arreglo[min])
            {
                min =j;
            }
        }
        aux=arreglo[i];
        arreglo[i]=arreglo[min];
        arreglo [min]=aux;
    }
   */
   cout<<"Ingrese el tamano: ";
   cin>>m;
agregar(arreglo, m);
imprimir(arreglo, m);
menor(arreglo, m);
    return 0;
}


void agregar(int a[], int n)
{
    cout<<"Ingrese los numeros: ";
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void imprimir(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        //cout<<a[i]<<" ";

    }
}


void menor(int a[], int n)
{
    int min, aux;
    cout<<"Orden de menor a mayor: ";
    for(int i=0; i<n; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min =j;
            }
        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;

        cout<<a[i]<<" ";
    }
    cout<<endl;
}

