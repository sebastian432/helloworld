#include <iostream>

using namespace std;
//EJERCICIO 1
void imprimirDigitos(int n){
    cout << n/10000<<'\t';
    n%=10000;
    cout << n/1000<<'\t';
    n%=1000;
    cout << n/100<<'\t';
    n%=100;
    cout << n/10<<'\t';
    n%=10;
    cout<<n<< '\t';

}
int main(){
    int n;
    cin>>n;
    imprimirDigitos(n);
    return 0;

}


//EJERCICIO 2
int contarNumeros(int n,int cont=0){
    while(n!=0){
        n/=10;
        cont++;
    }
    cout<<"el numero de digitos es: "<<cont<<endl;
    return 0;

}
int main(){
    int cont=0;
    int n;
    cout<<"ingresa un numero: ";cin>>n;
    contarNumeros(n);
    return 0;

}


//EJERCICIO 3
bool esPalindrome(int n)
{
    int a,b,c,d,e;
    a=n/10000;
        n%=10000;
    b=n/1000;
        n%=1000;
    c=n/100;
        n%=100;
    d=n/10;
        n%=10;
    e=n;

    if (a==e && b==d)
        return true;

    else
        return false;

}
int main(){
    int n;
    cout<<"introduce un numero: ";cin>>n;
    cout<<esPalindrome(n)<<endl;
    return 0;
}

//EJERCICIO 4
int esFibonacci(int n){
        int x=0,y=1,z=1;
    for(int i=1;i<n;i++){
            z=x+y;
            x=y;
            y=z;
    }
    cout<<"su numero fibonacci es: "<<z;
    return 0;
}
int main(){
    int n;
    cout<<"ingresa un numero: ";cin>>n;
    esFibonacci(n);
    return 0;

}

//EJERCICIO 5
char esNumero(char n){
    int a=static_cast<int>(n);
        if(a<=57 && a>=48){

            cout<<"ingresaste un numero "<<endl;
        }
        else
            cout<<"no es un numero "<<endl;
}
int main(){
    char n;
    cout<<"ingresa un caracter: ";cin>>n;
    esNumero(n);

}

//EJERCICIO 6
char esLetra(char n){
    int a=static_cast<int>(n);
        if(a<=90 && a>=65){

        cout<<"Ingresaste una mayuscula"<<endl;
        }
        if(a<=122 && a>=97){

            cout<<"Ingresaste una minuscula"<<endl;
        }
        else
            cout<<"el caracter no es una letra"<<endl;
}
int main(){
    char n;
    cout<<"Ingresa un caracter: ";cin>>n;
    esLetra(n);
}


//EJERCICIO 6.1
char convertir(char n){
    int a=static_cast<int>(n),c;
    char d;
    if(a<=90 && a>=65){
            c=a+32;
    d=static_cast<char>(c);
        cout<<"Ingresaste una mayuscula, su minuscula es: "<<d<<endl;
        }
    else if(a<=122 && a>=97){
            c=a-32;
    d=static_cast<char>(c);

        cout<<"Ingresaste una minuscula, su mayuscula es: "<<d<<endl;
        }
    else {
        cout<<"No ingresaste una letra "<<endl;


    }

}
int main(){
    char n;
    cout<<"Ingresa un caracter: ";cin>>n;
    convertir(n);
}


// TAREA ANTERIOR FOR-WHILE




int main()
// ejercicio 1
{
    float a;
    float b;
    b=1.0;

    cout <<"dame un numero: ";
    cin >>a;

    while(a>b){
        b*=2;
    }

if(a==b)
    cout<<"el numero es potencia de 2"<<endl;
else
    cout<<"el numero no es potencia de 2"<<endl;


    return 0;

}


// ejercicio 2
{
    int num;
    int numd=0;

    cout << "dame un numero: ";
    cin >>num;
    for(int i=1;i<=num;i++){
        if(num%i==0)
        numd+=1;
    }
    if (numd==2)
        cout<<"el numero es primo ";
    else
        cout<<"el numero no es primo ";
    return 0;
}



{
    int i=1;
    int num;
    int numd=0; //contador

    cout << "dame un numero: ";
    cin >>num;
    while (i<=num){

    if(num%i==0)
        numd+=1;
        i++;
    }
    if (numd==2)
        cout<<"el numero es primo ";
    else
        cout<<"el numero no es primo ";
    return 0;
}


// ejercicio 3
{
    int cont=0;
    for(int num=2;num<=100;num++){

        for (int i=2;i<=num;i++)

            if (num%i==0)
        cont++;
        if(cont==1)

         cout<<" "<<num;

        cont=0;
    }
    return 0;

}



{
    int num=2,i=1,cont=0;
    while(num<=99){
        num++;
        while(num>=i){
                i++;
                if(num%i==0){
                    cont++;
                    if (cont==1){
                        cout<<" "<<num<<endl;
                        cont=0;
                    }

                }
                }
    }


return 0;

}




// ejercicio 4
{
    int a;
    int div=0;

    cout <<"dame un numero: ";
    cin >>a;
    for(int i=1;i<a;i++){
        if (a%i==0)
            div+=i;
        }

        if (a==div)
            cout <<"es perfecto "<<endl;
        else
            cout <<"no es perfecto "<<endl;


    return 0;

}




{
    int a;
    int div=0;
    int i=1;

    cout <<"dame un numero: ";
    cin >>a;
    while(i<a) {



        if (a%i==0)
            div+=i;
        i++;
        }

        if (a==div)
            cout <<"es perfecto "<<endl;
        else
            cout <<"no es perfecto "<<endl;


    return 0;

}



