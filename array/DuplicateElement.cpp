#include<iostream>
#include<math.h>

using namespace std;

// such that the array contain element from 1 to n-1 only 
int DuplicateElement(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans=ans^i;
    }
    return ans;
    
};

int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,4};

cout<< DuplicateElement(arr,10) <<endl;

}