// search an element in the sorted rotated array as [6,7,8,9,1,2,3,4,5]
// 

// 1. find the pivot point
// 2. if pivot point is less than the element then search in left half
// 3. if pivot point is greater than the element then search in right half

#include <bits/stdc++.h>
using namespace std;

// int GetPivot(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start)/2;
//     while(start<end){
//         if(arr[mid]>=arr[start])
//         {
//             start = mid+1;
//         }
//         else if (arr[mid]<arr[end])
//         {
//             end = mid;
//         }
//         mid = start + (end - start)/2 ;
//     }
//     return start;
// }

// int BinarySearch(int arr[], int s, int e, int key){
//     int start = s;
//     int end = e;
//     int mid = start + (end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(arr[mid]>key){
//             end=mid - 1;
//             mid = start + (end- start)/2;
//         }
//         if(arr[mid]<key){
//             start=mid+1 ;
//             mid = start + (end- start)/2;
//         }
//     }
//     return -1;
// };

// int main(){
//     int key = 0;
//     cin>> key;
//     int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5};
//     auto END = sizeof(arr)/ sizeof(arr[0]) ;
//     int Pivot=GetPivot(arr,9);
//     cout<< "Pivot is "<<Pivot<<endl;
//     cout<<"size of array is "<< END<<endl;
//     if(arr[Pivot] <= key && key <= arr[END-1] )
//     {
//         cout<< BinarySearch(arr, Pivot, END, key)<<endl;
//     }
//     else
//     {
//         cout<< BinarySearch(arr, 0, Pivot - 1, key) <<endl;
//     };   
// }

// *********  Approch 2nd  **********

int SearchRotatedarray(int arr[], int n, int key ){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(key < arr[start]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
    
}

int main(){
    int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5};
    int key = 5;
    cout<<SearchRotatedarray(arr,9,7)<<endl;

}