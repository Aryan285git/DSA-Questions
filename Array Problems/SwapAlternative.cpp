#include <iostream>
using namespace std;

void print(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swapAlternate(int arr[],int size){
    int temp = 0; 
    if(size % 2 != 0)
    temp = arr[size-1];
    for(int i = 0; i < size; i=i+2){
        swap(&arr[i],&arr[i+1]);
    }
    if(size % 2 != 0)
    arr[size-1]=temp;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    print(arr,10);
    cout<<endl;
    swapAlternate(arr,10);
    print(arr,10);
}