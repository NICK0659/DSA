#include<iostream>
#include<math.h>

using namespace std;

void printArry(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<< endl;
};

void reverse(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
};

int main(){

int arr[10]={2,5,7,8,4,9,1,6,3,-7};

reverse(arr,10);
cout<<"reversed array is "<< endl;
printArry(arr,10);


return 0;
};