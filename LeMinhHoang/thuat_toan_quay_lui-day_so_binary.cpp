#include <iostream>
using namespace std;

//vi du: n = 3 => 000, ..., 111
void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int j;//tại sao khi j đặt ở global scope thì chỉ cho ra 000, 111.
void Attempt(int i, int n, int* arr){
    for (int j = 0; j < 2; j++) {
        arr[i] = j;
        if (i == n - 1){ // tại sao i == n => duplicate mỗi trường hợp ?
            PrintArray(arr, n);
        } else {
            Attempt(i+1, n, arr);
        }
    }
}

int main(){
    int n;
    printf("nhap n : ");     // nhap n
    scanf("%d", &n);
 
    int arr[n];
    Attempt(0, n, arr);
    return 0;
}