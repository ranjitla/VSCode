/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int i = 1;
    while(i<=10){
        cout<<i<<"*"<<n<<"="<<n*i<<endl;
        i++;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"Enter number:";
    cin>>n;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }i++;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"Enter number:";
    cin>>n;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=5);
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int i = 1;
    int sum = 0;
    do{
        sum = sum + i;
        i++;
    }while(i<=n);
    cout<<"Sum of number is:"<<sum;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
   for(int i = 1;i<=10;i++){
    if(i%4==0){
        continue;
    }cout<<i<<" ";
   }
}
*/

#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter number:";
    cin>>i;
    switch(i){
        case(1):
        cout<<"Ranjit kumar";
        break;
        case(2):
        cout<<"Rajni kumari";
        break;
        default:
        cout<<"Mohit kumar";
    }
}