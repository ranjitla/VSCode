//1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    while(num>=0){
        
        if(num%2==0){
            cout<<num<<" ";
            
        }num--;
        
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int num = 10;
    do{
        if(num%2==0){
            cout<<num<<" ";
        }num--;
    }while(num>=0);
}*/
//2: Find the factorial of a number n using a while loop and do a while loop.

/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Find factorial of :";
    cin>>num;
    int fact = 1;
    while(num>=1){
        fact = num*fact;
        num--;
    }cout<<"Ans is :"<<fact;
}
*/
//using do while loop
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Find factorial of:";
    cin>>n;
    int fact = 1;
    do{
        fact = n*fact;
        n--;
        
    }while(n>0);
    cout<<"factorial is:"<<fact;
    return 0;

}*/
/*
#include<iostream>
using namespace std;
 
int main(){

    int num = 30;
    while(num>0){
        if(num % 3==0 && num % 5==0){
            num--;
        }cout<<num<<" ";
        num--;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int exp;
    cout<<"Enter month code:";
    cin>>exp;
    switch(exp){
        case 1:
        cout<<"january";
        break;
        case 2:
        cout<<"february";
        break;
        default:
        cout<<"nothing";
        break;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    char input  = 'A' ;
    while(input <='Z'){
        cout<<input<<" ";
        input++;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int i = 2;
   while(i<n){
    if(n%i==0){
        cout<<"Not Prime Number";
        return 0;
    }
    i++;
   }
   cout<<"Prime number";
   return 0;
}
*/
