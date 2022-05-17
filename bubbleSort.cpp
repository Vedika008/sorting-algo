#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
  for(int i=1; i<size; i++){
      bool swapped =false;
      for(int j=0; j<size-i; j++){
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped = true;
          }
      }
      if(swapped==false){
          break;
      }
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

    bubbleSort(arr,size);

    cout<<" \n after sorting"<<endl;
    printArray(arr,size);
}