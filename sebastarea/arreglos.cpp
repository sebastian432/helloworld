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
    int arr[4] = {1, 2, 3, 4};

imprimir(arr, 4);
invertir(arr, 4);
imprimir(arr, 4);
}


//ordenamiento burbuja


int main()
{
    int n;
    cout<<"cuantos elementos quieres en tu arreglo?: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"entra los valores:\n";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"El ordenamiento burbuja da como resultado:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
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
        
        
        
        
        
        
        
        
        #include <iostream>  
#include <stdlib.h>  

using namespace std;

void quickSort(int *A, int izq, int der) {

 int piv = A[izq];
 int i = izq;
 int j = der;
 int aux;

 while (i < j) {
  while (A[i] <= piv && i < j) i++;
  while (A[j] > piv) j--;
  if (i < j) {
   aux  = A[i];
   A[i] = A[j];
   A[j] = aux;
  }
 }

 A[izq] = A[j];
 A[j] = piv;
 if (izq<j - 1)
  quickSort(A, izq, j - 1);
 if (j + 1 <der)
  quickSort(A, j + 1, der);

}

int main() {
 int A[10];
 cout << " El array de valores es: " << endl;
 for (int i = 0; i < 10; i++) {
  A[i] = rand();
  cout << A[i] << " ";
 }
 cout << endl << " Y el array de valores ordenados es: " << endl;
 quickSort(A, 0, 9);

 for (int i = 0; i < 10; i++) {
  cout << A[i] << " ";
 }

 return 0;
}

