/*
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i = 0;i<=6;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int marks[n];
    for(int i = 0;i<=n-1;i++){
        cin>>marks[i];
    } 
    for(int i = 0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}
