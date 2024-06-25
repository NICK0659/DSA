#include<iostream>
#include<math.h>

using namespace std;

int min(int arr[], int size){
    int Min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<Min)
        {
            Min = arr[i];
        }
        
    }
    return Min;
}

int max(int arr[],int size){
    int Max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]>Max)
        {
            Max = arr[i];
        }
        
    }
    return Max;
}

int main(){

int arr[10]={2,5,7,8,4,9,1,6,3,-7};

cout<< "minimun value is "<< min(arr,10)<<endl;
cout<< "maximum value is " << max(arr,10) <<endl;


}