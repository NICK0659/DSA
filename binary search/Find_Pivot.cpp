// getting pivot from the rotated array
//find-pivot-index/

#include <bits/stdc++.h>
using namespace std;

int GetPivot(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]>=arr[start])
        {
            start = mid+1;
        }
        else if (arr[mid]<arr[end])
        {
            end = mid;
        }
        mid = start + (end - start)/2 ;
        
    }
    return start;
}

int main(){
    int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5,};
    cout<< "pivot is " << GetPivot(arr,9) << endl;
}