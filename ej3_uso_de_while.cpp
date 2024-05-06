#include <iostream>
using namespace std;
int main()
{
    int n = 0, i = 0;
    cout << "Ingrese un numero entero positivo n=\n";
    cin >> n;
    if (n > 0)
    {
        while (i <= n)
        {
            cout << i << "\n";
            i = i + 2;
        }
    }
    else
    {
        cout << "Error, n debe de ser positivo\n";
    }
    return 0;
}