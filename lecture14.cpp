/*
#include<iostream>
using namespace std;
int sum(int m,int n){
    int x = m + n;
    return x;
}

int mul(int m,int n){
    int z = m*n;
    return z;
}
void fun(){
    cout<<"Hello coder army";
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;
    fun();
}*/
/*
#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int fact(int b){
    int fact = 1;
    while(b!=0){
        fact = fact*b;
        b--;
    }
}

int main(){
    int a,b;
    cout<<"Enter number:";
    cin>>a;
    cout<<"Enter number:";
    cin>>b;
    cout<<"a is prime or not:"<<prime(a)<<endl;//a is prime or not
    cout<<"b is prime or not:"<<prime(b)<<endl;//b is prime or not
    cout<<"b-a is prime or not:"<<prime(b-a)<<endl;//b-a is prime or not
    cout<<"b-a  ka factorial:"<<fact(b-a)<<endl;//b-a  ka factorial
    cout<<"b ka factorial:"<<fact(b)<<endl;//b ka factorial
    cout<<"factorial of a:"<<fact(a)<<endl;//factorial
}
    */
/*
#include<iostream>
using namespace std;
void incr(int &n){
    n++;
}
int main(){
    int a = 4;
    incr(a);
    cout<<a;
}
    
*/
/*
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"swap number is:"<<a<<" "<<b<<endl;

} */
/*
#include<iostream>
using namespace std;
int cube(int n){
    return n*n*n;
}
int main(){
    int a;
    cout<<"Find cube of:";
    cin>>a;
    int result = cube(a);
    cout<<"cube is :"<<result;
}*/
/*
#include<iostream>
using namespace std;
int reverse(int num){
    int rem;int  ans = 0;int mul = 0;
    while(num){
    rem = num%10;
    num = num / 10;
    ans = 10 * ans + rem;

    
    }
    return ans;
}
int main(){
    int n;
    cout<<"Reverse number of ";
    cin>>n;
    int output = reverse(n);
    cout<<"Reverse number is"<<output;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int numbers(int &a,int &b,int &c){
  int  d = a;
    a = b;
    b = c;
    c = d;

}
int main(){
    int a;
    cout<<"Enter a input:";
    cin>>a;
    int b;
    cout<<"Enter b input:";
    cin>>b;
    int c;
    cout<<"Enter c input:";
    cin>>c;
    int output = numbers(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<" ";

}*/
/*
#include<iostream>
using namespace std;
void Swap(int &n,int &m){
    n = n+m;
    m = n-m;
    n = n-m;
}
int main(){
    cout<<"Before swapping";
    int a = 10;
    cout<<"Before swapping";
    int b = 20;
    Swap(a,b);
    cout<<"After swapping:a="<<a<<",b="<<b<<endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
void fun(int a){
while(a!=0){
cout<<"Hello coder army"<<endl;
a--;
}
}
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    fun(n);
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
    int fact = 1;
    int comb = (n-r);
    int fact1 = 1;
    int fact2 = 1;
    if(n<r){
        cout<<"n should be greater than r";
        return 0;
    }
    for(int i = 1;n>0;i++){
        fact = fact * n;
        n--;
    }
    for(int i = 1;comb>0;i++){
        fact1 = fact1 * comb;
        comb--;
    }for(int i = 1;r>0;i++){
        fact2 = fact2 * r;
        r--;
    }
    cout<<"C(n,r) is "<<fact/(fact1*fact2);

}*/
/*
#include<iostream>
using namespace std;
int factorial(int num){
        int fact = 1;
        for(int i = 1;num>0;i++){
            fact = fact*num;
            num--;
        }
        return fact;

}
int combination(int n,int r){
    int fact_n = factorial(n);
    int fact_n_r = factorial(n-r);
    int fact_r = factorial(r);
    return fact_n/(fact_n_r * fact_r);
}

int main(){
    int n;
    cout<<"Enter number(n):";
    cin>>n;
    int r;
    cout<<"Enter number(r)";
    cin>>r;
    if(n>=r && r>0){
        int result = combination(n,r);
        cout<<"Combination ("<<n<<"C"<<r<<") = "<<result<<endl;
    }else{
        cout<<"Invalid input:n should be greater than r"<<endl;
    }
    return 0;
}*/
