#include <iostream>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    }

void invertir(int *arr, const int len){
    for(int i = 0; i < len/2; i++){
            swap((arr+i), (arr-i-1+len));
    }
}

bool Palindrome(const int *arr, const int len){
    for(int i = 0; i < len/2; i++){
        if(*(arr+i) != *(arr+len-1-i)){
            cout << "No es palindrome";
            return false;
        }
    }
    cout << "Si es palindrome";
    return true;
}

void ordenar(int *arr, const int len){
   for(int i = 0; i < len-1; i++){
      for(int j = 0; j < len-i-1; j++){
         if(*(arr+j)> *(arr+j+1)){
                swap((arr+j), (arr+j+1));

         }
      }
    }
}

bool Primo(const int x){
    int cont = 0;
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            cont ++;
        }
    }
    if(cont == 0){
        cout << x << " ";
        return true;
    }
    else
        return false;
}

void Primoenlista(const int *arr, const int len){
    for(int i = 0; i < len; i++){
            Primo(*(arr+i));
    }
}

void imprimir(int *ptr, int tam){
    for(int i = 0; i < tam; i++, ptr++)
        cout << *ptr << " ";
    cout << endl;
}

int main()
{
    int a = 1, b = -2;
    swap(a, b);
    cout << a << " " << b << endl;

    int *ptr = &b;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &b << endl;
    cout << &ptr << endl;
    cout << &a << endl;


    const int *ptr1 = &a;
    //*ptr1 = 123;
    ptr1 = &a;

    int *const ptr2 = &a;
    *ptr2 = 123;
    //ptr2 = &a;

    const int *const ptr3 = &a;
    //*ptr3 = 123;
    //ptr3 = &a;

    int arr[] = {8,5,67,78};
    int *ptr5 = arr;
    cout << *arr << endl;
    cout << *ptr5 << endl;

    int arr2[] = {2,3,5,6};
    int *ptr6 = arr2 + 2;
    ptr6++;

    cout << *ptr6 << endl;

    invertir(arr, 4);

    imprimir(arr, 4);

    Palindrome(arr, 4);

    cout << endl;

    ordenar(arr, 4);

    imprimir(arr, 4);

    Primoenlista(arr, 4);

}
