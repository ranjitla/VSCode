#include<iostream>
using namespace std;
int main(){
    int arr[20];
    int sum = 0;
    cout<<"Enter Input :";
    for(int i = 0;i<20;i++){
        cin>>arr[i];
        sum = arr[i] + sum;
    }
    cout<<"Sum of Array is"<<sum<<endl;
    return 0;
}