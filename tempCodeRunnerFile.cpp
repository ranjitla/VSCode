/*
#include<iostream>
using namespace std;
int Square(int n){
    if(n==0)
    return 1;
    int count = 0;
    while(n!=0){
    n = n / 10;
    count++;
    }
   return (count*count);
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int output = Square(n);
    cout<<"The square of digits count:"<<output<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int sqr = 1;
    int arr[] = {2,2,2,2,2};
    for(int i = 0;i<=4;i++){
        cout<<arr[i];
        sqr = arr[i]*sqr;
    }
    cout<<sqr;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int str = 0;
    int arr[] = {2,5,8,6,9,7};
    for(int i = 0;i<=5;i++){
        if(str<arr[i]){
            str = arr[i];
        }
    }
    cout<<str;
}
*/
