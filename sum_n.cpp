/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum= sum+i;
    }cout<<sum;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum=sum+i*i;
    }cout<<sum;
}*/


#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter number:";
    cin>>n;
    sum=(n*(n+1))/2;
    cout<<sum;
}