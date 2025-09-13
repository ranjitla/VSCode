/*
#include<iostream>
using namespace std;
int sq;
void Square(int a){
    for(int i = 1;i<=a;i++){
        cout<<i*i<<" ";
    }  
}
int main(){
    int n;
    cout<<"Enter n number :";
    cin>>n;
    Square(n);
}
*/
/*
#include<iostream>
using namespace std;
double area(int r){
    double area = 3.14*r*r;
    return area;
}
int main(){
    double n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Area of circle:"<<area(n);
}
*/
/*
#include<iostream>
using namespace std;
void odd_num(int a,int b){
    if(a>b){
        swap(a,b);
}
    for(int i = a;i<=b;i++){
            if(i%2!=0){
                cout<<i<<" ";
            } 
    }
}
int main(){
    int n;
    cout<<"Enter 1st number:";
    cin>>n;
    int m;
    cout<<"Enter 2nd number:";
    cin>>m;
    odd_num(n,m);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int square(int n){
    int sq = 0;int rem;
    if(n==0)
    return 0;
       while(n!=0){
        rem = n % 10;
        sq = rem*rem+sq;
        n = n / 10;
       }
       return sq;
}

int main(){
    int n;
    cout<<"Enter input:";
    cin>>n;
    cout<<square(n);
}
*/



