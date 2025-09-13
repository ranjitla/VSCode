#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>=0){
        if(n==0){
            cout<<n<<" = Neutral Number";
        }else{
            cout<<n<<" = Positive Number";
        }
    }else{
        cout<<n<<" 78= Negative Number";
    }
}