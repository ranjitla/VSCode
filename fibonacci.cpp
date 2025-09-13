#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int last=0;
    int prev=1;
    int curr=0;
    cout<<"Fibonacci series:"<<last<<", "<<prev<<", ";
    for (int i = 1; i <= n-2; ++i)
    {
       curr = last + prev;
       last = prev;
       prev = curr;
       cout<<curr<<", ";
    }
    return 0;
}