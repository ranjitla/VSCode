/*
#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter number:";
    cin>>num;
    int rem;
    int ans = 0;int mul = 1;
    while(num>0){
        rem = num%2;
        num/=2;
        ans = rem*mul+ans;
        mul*= 10;
    }
    cout<<ans;
}*/
//with right shift operator and & operator
/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int rem; int ans = 0;int mul = 1;
    while(num>0){
        rem = num&1;
        num=num>>1;
        ans +=rem*mul;
        mul*=10;

    }
    cout<<ans;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter number:";
    cin>>num;
    int rem;int ans = 0;int mul = 1;
    while(num>0){
        rem = num%10;
        num = num / 10;
        ans = rem * mul + ans;
        mul*=2;

    }
    cout<<ans;
}*/

