#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "ingresa un numero: ";
    cin >> a;

    cout << "ingresa un numero: ";
    cin >> b;

    cout << "ingresa un numero: ";
    cin >> c;

    if(a>b && a>c)
        cout << "el mayor es " << a <<endl;
    else if (b>a && b>c)
        cout << "el mayor es " << b <<endl;
    else
        cout << "el mayor es " << c <<endl;


    return 0;
}
