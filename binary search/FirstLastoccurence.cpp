#include<iostream>
#include<math.h>

using namespace std;

int firstocc(int arr[],int size, int key){
    int ans = 0;
    int start =0;
    int end =size -1;
    int mid = start + (end - start /2 );
    while(start <= end){
        if (arr[mid]== key){
            ans = mid;
            end =mid-1;
        }
        if(arr[mid]< key){
            start = mid + 1;
        }
        if(arr[mid]> key){
            end = mid-1;

        }
        mid = start + (end - start /2 );
    }
    return ans;
}

int lastocc(int arr[],int size, int key){
    int ans=0;
    int start =0;
    int end =size -1;
    int mid = start + (end - start /2 );
    while(start <= end){
        if (arr[mid]== key){
            ans = mid;
            start = mid + 1 ;
        }
        if(arr[mid]< key){
            start = mid + 1;
        }
        if(arr[mid]> key){
            end = mid-1;

        }
        mid = start + (end - start /2 );
    }
    return ans;
}

int main(){
int even[8]={1,1,2,2,3,4,4,5};
int odd[9]={1,2,2,3,4,5,5,6,6};
cout<<endl;
cout<< "first occurence of key is "<< firstocc(even,8,4)<< endl;
cout<< "last occurence of key is "<< lastocc(even,8,4)<<endl;

cout<<endl;

cout<< "first occurence of key is "<< firstocc(odd,9,5)<< endl;
cout<< "last occurence of key is "<< lastocc(odd,9,5)<< endl;

}