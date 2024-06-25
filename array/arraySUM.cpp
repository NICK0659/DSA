#include<iostream>
#include<math.h>

using namespace std;

int ArraySum(int arr[],int size){
    int n;
    int sum = 0;
    for(n=0;n<size;n++){
        sum = sum + arr[n];}

    return sum;
}

int main(){

int arr[10]={2,5,7,8,4,9,1,6,3,-7};

cout<<"sum of the array is "<< ArraySum(arr,10) <<endl;

}