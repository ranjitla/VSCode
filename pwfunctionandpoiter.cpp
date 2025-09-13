/*
#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1;
    while(num != 0){
        fact *= num;
        num--;
    }return fact;
}
int permutation(int x,int y){
    return factorial(x)/factorial(x-y);
}
int combination(int x,int y){
    return permutation(x,y)/factorial(y);
}
int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    if(n<r){
        cout<<"Error:n should be greater than r";
        return 1;
    }
    cout<<"Permutaion of"<<n<<"p"<<r<<":"<<permutation(n,r)<<endl;
    cout<<"Combination of"<<n<<"c"<<r<<":"<<combination(n,r);
}
*/
/*
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    while(n!=0){
        fact = fact * n;
        n--;
    }return fact;
}
int combination(int x,int y){
    if(x<y){
        cout<<"n should be greater than r"<<endl;
    }
    return factorial(x)/(factorial(y)*factorial(x-y));
}

int main(){
    int num = 5;
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf = 1;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}
int main(){
    int n;
    cout<<"Enter 1st input:";
    cin>>n;
    int m;
    cout<<"Enter 2nd input:";
    cin>>m;
    cout<<gcd(n,m); 
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int n,int m){
    int hcf = 1;
    for(int i=min(n,m);i>=1;i--){
        if(n%i==0 && m%i==0){
            hcf = i;
            break;
        }
        
    }
    return hcf;
    
}
int main(){
    int a;
    cout<<"Enter 1st number:";
    cin>>a;
    int b;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<gcd(a,b);
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact *= i;
        cout<<fact<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;

}
*/