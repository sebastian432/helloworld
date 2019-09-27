#include <iostream>

using namespace std;

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



//suma de elementos
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


//invertir un arreglo

void imprimir(int arr[], int tam)
            {
                for(int i = 0; i < tam; i++)
                    cout << arr[i] << " ";
                    cout << endl;
            }

            int swap(int &x, int &y){
                        int temp = x;
                            x = y;
                            y = temp;
            }

            int invertir(int arr[], int tam)
            {
                for(int i = 0; i < tam/2; i++){
            swap(arr[i], arr[tam-1-i]);
                }
            }

            int main()
            {
                int arr[5] = {1, 2, 3, 4, 5};

            int a = 5;
            int b = 10;
            swap(a,b);
            cout << a << " " << b << endl;

            imprimir(arr, 5);
            invertir(arr, 5);
            imprimir(arr, 5);
            }


//ordenamiento burbuja



int burbuja(int arr[],int tam){
    int temp;
        for (int i=0;i<tam;i++){
            for(int j=0;j<tam;j++){
                if (arr[j] > arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
            for(i=0;i<tam;i++){
            cout<<arr[i]<<endl;
        }
        }

}

int main(){
    int tam;
    cout<<"cuantos valores deseas?: ";
    cin>>tam;
    int x[tam];
    for (int i=0;i<tam;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<burbuja(x,tam)<<endl;
}


//insertionsort

int insertionsort(int arr[],int tam){
            int pos,temp;

            for(int i=0;i<tam;i++){
                pos=i;
                temp=arr[i];
                while ((pos>0) && (arr[pos-1]>temp)){
                    arr[pos]=arr[pos-1];
                    pos--;
                }
                arr[pos]=temp;
        }
        for(int i=0;i<tam;i++){
            cout<<arr[i]<<endl;


            }

}

int main(){
int tam;
    cout<<"cuantos valores deseas?: ";
    cin>>tam;
    int x[tam];
    for (int i=0;i<tam;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<insertionsort(x,tam)<<endl;
}



//quicksort

int quicksort(int arr[],int inicio,int fin){
        int medio,i,j,piv;
        medio=(inicio + fin)/2;
        piv=arr[medio];
        i=inicio;
        j=fin;
        while(i<=j){
            while(arr[i] < piv){
                i++;

            while(arr[i] < piv){
                i++;
            if(i<=j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
                j--;
            }

        }
        }



}

int main(){
    int tam;
    cout<<"cuantos valores deseas?: ";
    cin>>tam;
    int x[tam];
    for (int i=0;i<tam;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<quicksort(x,0,tam-1)<<endl;


}
