#include <iostream>

using namespace std;

int menu();

int main()
{
    int opcion, c=100, cont=0;
    int arreglo[c];
    cout<<"BIENVENIDO A SU BANCO DE BARRIO! " << endl<<endl;
    cout<<"EN QUE LE PUEDO AYUDAR? "<<endl;

    while(opcion!=0)
    {
       opcion=menu();
        switch(opcion)
        {
        case 1:
            {
                int deposito=1;

                cout<<"Dinero a depositar (0 para finalizar): "<<endl;

                while(deposito>0)
                {
                    cin>>deposito;
                    if(deposito>0)
                    {
                        arreglo[cont]=deposito;
                        cont++;

                    }
                }

        cout<<endl;
                break;
            }
        case 3:
            {

               cout<<"Mayor a menor: ";
               int aux;
                for (int i=0; i<=cont; i++)
                {
                    for(int j=i+1; j<cont; j++ )
                        {
                        if(arreglo[j] > arreglo[i])
                            {
                            aux=arreglo[i];
                            arreglo[i] = arreglo[j];
                            arreglo[j] = aux;
                            }
                        }

                }

            for(int i=0; i<cont; i++)
            {
                cout<<arreglo[i]<<" ";
            }
                cout <<endl<<endl;
            break;
            }
        case 2:
            {

               cout<<"Menor a mayor: ";
               int aux;
                for (int i=0; i<=cont; i++)
                {
                    for(int j=i+1; j<cont; j++ )
                        {
                        if(arreglo[j] < arreglo[i])
                            {
                            aux=arreglo[i];
                            arreglo[i] = arreglo[j];
                            arreglo[j] = aux;
                            }
                        }

                }

            for(int i=0; i<cont; i++)
            {
                cout<<arreglo[i]<<" ";
            }
                cout <<endl<<endl;


                break;
            }
        case 4:
            {
                int par=0;
                cout<<"La suma de todos los numeros pares es: ";
                for(int i=0; i<cont; i++)
                {
                   if(arreglo[i]%2 ==0)
                   {
                       par=par+arreglo[i];

                   }

                }
                cout<<par<<endl;
                cout<<endl;
                break;
            }
        case 5:
            {
                int impar=0;
                cout<<"La suma de todos los numeros pares es: ";
                for(int i=0; i<cont; i++)
                {
                   if(arreglo[i]%2 !=0)
                   {
                       impar=impar+arreglo[i];

                   }

                }
                cout<<impar<<endl;
                cout<<endl;

                break;
            }
        }

    }
    return 0;
}
int menu()
{
    int op=-1;
    cout<<"---MENU---"<<endl;
    cout<<"1.- Ingresar dinero "<<endl;
    cout<<"2.- Ordenamiento de menor a mayor"<<endl;
    cout<<"3.- Ordenamiento de mayor a menor"<<endl;
    cout<<"4.- Suma de elementos pares"<<endl;
    cout<<"5.- Suma de elementos impares"<<endl;
    cout<<"0.- Salir"<<endl;
    cout<<"Opcion: ";
    cin>>op;

return op;
}
