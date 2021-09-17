#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
main ()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros[5], maior, menor, opc;

    int n1,n2,n3,n4;
    int aux;
    cout<< "Digite 4 números separados por espaços: ";
    cin>> n1 >> n2 >> n3 >> n4;
    if (n1>n2)
    {
        aux=n1;
        n1=n2;
        n2=aux;
    }if (n1>n3)
    {
        aux=n1;
        n1=n3;
        n3=aux;
    }if (n1>n4)
    {
        aux=n1;
        n1=n4;
        n4=aux;
    }if (n2>n3)
    {
        aux=n2;
        n2=n3;
        n3=aux;
    }if (n2>n4)
    {
        aux=n2;
        n2=n4;
        n4=aux;
    }
    if (n3>n4)
    {
        aux=n3;
        n3=n4;
        n4=aux;
    }
    cout << "\n\n";
    cout << "Na sequencia ordenal: " << n1 <<","<< n2 <<"," << n3 << "," << n4 << endl;
     system("pause");
    return 0;
}

