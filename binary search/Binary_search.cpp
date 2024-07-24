#include<iostream>
#include<math.h>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;  // start + (end - start/2) it can be used of long long input 
    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
            mid = (start + end)/2;
            
        }
        if(arr[mid]<key){
            start=mid+1 ;
            mid = (start + end )/2;
            
        }
    }

}

int main(){
int even[8]={2,5,7,8,4,9,1,6};
int odd[9]={2,5,7,8,4,9,1,6,3};

cout<< "index of key is "<< binarySearch(even,8,9)<< endl;
cout<< "index of key is "<< binarySearch(odd,8,8);

}