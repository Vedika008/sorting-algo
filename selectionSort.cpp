#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int miniIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[miniIndex]){
                miniIndex = j;
            }
        }
        swap(arr[miniIndex],arr[i]);
    }
}
void printArray(int arr[] ,int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] ={1,7,9,2,3,0};
    int size = 6;
    
    cout<<"before sorting "<<endl;
    printArray(arr,size);

    selectionSort(arr,size);

    cout<<" \n after sorting"<<endl;
    printArray(arr,size);
}