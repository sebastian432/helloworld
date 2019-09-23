

using namespace std;
//ejercicio 1
int main()
{
    int a=10000,mult3=0,mult5=0;
    for (int i=1;i<=a;i++){

        if(i%3==0){
            mult3+=i;
        }
        if(i%5==0){
            mult5+=i;
        }

    }
    cout<<mult5+mult3<<endl;

    return 0;
}

//ejercicio 2

int main(){
        int n,i=1,fact=1;
        cout<<"n: ";cin>>n;
        while(i<=n){
            fact*=i;
            i++;
                    }
        cout<<"el factorial de "<<n<<" es "<<fact<<endl;
return 0;
}


int factorial(int n){
    if (n==0){
        n=1;
    }
    else{
        n*=factorial(n-1);
    }
    cout<<n<<endl;
    return n;

}

int main(){
        int n;
        cout<<"dame un numero: ";cin>>n;

        factorial(n);
return 0;
}




//ejercicio 3
int main(){
        int a=0,num;
        cout<<"rango de busqueda: ";cin>>num;
        for(int i=1;i<=num;i++){
        if(i%2==0){
            for(int e=(i/2);e>=1;e--)
                if(i%e==0)
                a+=e;
        }
        if(a==i)
            cout<<a<<" es un numero perfecto menor a: "<<num<<endl;
        a=0;
        }
    return 0;
}




//ejercicio 4
int main(){
    long long num=600851475143;

    for(int i=2;num>1;i++){
        while(num%i==0){
            cout<<i<<endl;
    num/=i;
        }
    }
return 0;
}
