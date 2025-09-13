/*
#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *p = &x;
    cout<<&x<<endl;
    cout<<*p<<endl;
    *p=5;
    cout<<x;
}
*/
/*
#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a = 8;
    int b = 10;
    swap(&a,&b);
    cout<<a<<" "<<b;
}
*/
/*
#include<iostream>
using namespace std;
void Product(int n,int m){
            int *p1  = &n;
            int *p2 = &m;
            cout<<*p1 * *p2<<endl;
}
int main(){
    int a;
    cout<<"Enter number:";
    cin>>a;
    int b;
    cout<<"Enter number:";
    cin>>b;
    Product(a,b);
    return 0;

}*/
/*
#include<iostream>
using namespace std;
int main(){
    int a =10 ,b =20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout<< *ptr<<' '<<a<<' '<<b; //11 10 11
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int a = 15,b = 20;
    int *ptr = &a;// 15
    int *ptr2 = &b;// 20
    *ptr = *ptr2;
    cout<<*ptr;
}
*/
/*
#include<iostream>
using namespace std;
int find(int n,int *ptr1,int *ptr2){
    *ptr2 = n % 10;
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return *ptr1;
}
int main(){
    int n;
    cin>>n;
    int firstDigit,lastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;
    find(n,ptr1,ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}
*/
    
