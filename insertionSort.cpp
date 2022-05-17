#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
   for(int i=1; i<size; i++){
       int temp = arr[i];
       int j = i-1;
       for(  ; j>=0; j--){
           if(arr[j] > temp){
               //shift 
               arr[j+1] =arr[j];
           }
           else 
             break;
       }
       arr[j+1] = temp;
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

    insertionSort(arr,size);

    cout<<" \n after sorting"<<endl;
    printArray(arr,size);
}