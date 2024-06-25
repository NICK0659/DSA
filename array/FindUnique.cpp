#include<iostream>
#include<math.h>

using namespace std;

int FindUnique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans= ans ^ arr[i];
    }
    return ans;
};

int main(){

int arr[10]={2,5,7,8,4,8,2,5,7};

cout<< FindUnique(arr,10) <<endl;

}