//1. Calculate the product of all the elements in the given array.
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter input array size:";
    cin>>n;
    int arr[n];
    int product = 1;
    cout<<"array inputs:";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
        product = product * arr[i];
    }
    cout<<product;
}
*/
//Find the second largest element in the given Array in one pass.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
}