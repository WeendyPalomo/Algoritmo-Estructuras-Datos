#include <iostream>
using namespace std;
#define tamanio(a) (sizeof(a)/sizeof(a[10]))

int main()
{
    int b, j, i, k;
    int a[]={2,9,16,25,29};
    /*
    cout << "Ingrese " << tamanio(a) +1 << " valores " << endl;
    for(int i=0; i<=tamanio(a); i++)
    {
        cin >> a[i];
    }
    */
    i=0;
    j=tamanio(a)-1;

    cout << "Ingrese valor a buscar: ";
    cin >> b;

    k=(i+j)/2;

    while(i<=j)
    {
        if(a[k]<b)     //Pregunta para trabajar con la parte izquierda
        {
            i=k+1;
        }
        else if (a[k]==b)    //Pregunta para trabajar con la parte derecha
        {
            cout << "ELEMENTO ENCONTRADO" << endl;
            cout << "Posicion: " << k;
            break;
        }
        else
        {
            j=k-1;
        }
        if (a[k]>b)    //Pregunta para trabajar con la parte derecha
        {
            j=k-1;
        }
        k=(i+j)/2;
    }
    if(i>j)
    {
        cout << "NO SE ENCONTRO...";
    }
    return 0;
}

