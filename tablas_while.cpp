#include <iostream>
using namespace std;
int main ()
{   
    int n= 0;
    int i= 1;
    cout<< "Ingrese un numero entero positivo\n";
    cin>> n;

    while (i<11)
    {
            cout << n<< "x"<< i<< "=" << i*n<< "\n";
            i=i+1;
    }

    return 0;

}