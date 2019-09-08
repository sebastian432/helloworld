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
#include <iostream>

using namespace std;

int main()
{
    float a;
    int b;
    b=1.0;

    cout <<"dame un numero: ";
    cin >>a;

    while(a>b){
        a/=2;

    if(a==b)
        cout<<"el numero es potencia de 2"<<endl;
    else
        cout<<"el numero no es potencia de 2"<<endl;

    }
    return 0;

}








#include <iostream>

using namespace std;

int main()
/*



{
    int n;
    cout<<"ingresa un numero: "<< endl;
    cin>> n;

    cout << n/10000<<'\t';
    n%=10000;
    cout << n/1000<<'\t';
    n%=1000;
    cout << n/100<<'\t';
    n%=100;
    cout << n/10<<'\t';
    n%=10;
    cout<<n<< '\t';

    return 0;
}
{

    int num,cont=0;
    cout <<"ingrese un numero"<<endl;
    cin>>num;

    while(num>0){
            num/=10;
            cont++;
    }
    cout <<"numero de digitos"<<cont;
    return 0;
}



{

    int n,x=0,y=1,z=1;
    cout<<"ingrese un numero"<<endl;cin>>n;
    for(int i=1;i<n;i++){
            z=x+y;
    cout<<z<<" ";
    x=y;
    y=z;
    }
    return 0;
}
*/
// ej 1,2,4
// ej 5
{       char a;
        cin>>a;
        int n=static_cast<int>(a);
        if (47<n && n<58){
                cout<<"el caracter es un numero"<<endl;
        }
        else{
                cout<<"el caracter no es un numero "<<endl;
        }
        return 0;
}








