#include <iostream>

using namespace std;
/*
void imprimir(int arr[],int tam){
        for (int i=0;i<tam;i++){
            cout<<arr[i]<<endl;
        }
}

int main(){
        int x[5];
        for(int i=0;i<5;i++){
            cout<<"ingrese los numeros del arreglo: ";
            cin>>x[i];
        }
        imprimir(x,5);
}


int suma(int arr[],int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=arr[i];
    }
    cout<<"la suma de su arreglo es: "<<suma<<endl;
    return suma;
}

int main(){
    int x[5];
    for (int i=0;i<5;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<"la suma de su arreglo es: "<<suma<<endl;
    suma(x,5);

}


//no sale recursiva
int suma (int arr[],int tam){

    if(tam==1){
        return arr[0];
    }
    else
        return arr[tam-1]+suma(arr,tam-1);

}

int main(){
    int tam;
    cout<<"cuantos valores deseas?: ";
    cin>>tam;

    int x[tam];
    for (int i=0;i<tam;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<"la suma de su arreglo es: "<<suma(x,tam)<<endl;


}
*/

//invertir un arreglo

void swap(int &arr[], int &tam){
    int temp=x;
    x=y;
    y=temp;
}

int main(){

    int x[5];
    for (int i=0;i<5;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<"el arreglo invertido es: "<<endl;
    swap(x,5);

}



