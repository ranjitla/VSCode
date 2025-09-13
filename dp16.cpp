/*Write a program to convert binary numbers to decimal numbers using a for loop.


#include<iostream>
using namespace std;
int main(){
    int num = 1101;
    int ans = 0;
    int rem;
    int mul = 1;
    
    for(int i=0;num>0;i++){
        rem=num%10;
        num=num/10;
        ans = rem*mul+ans;
        mul=2*mul;

    }
    cout<<"Answer is:"<<ans;
}*/

//Write a program to convert decimal numbers to binary numbers using a for loop.
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter decimal number:";
    cin>>num;
    int rem;int ans=0;
    int mul = 1;
    for(int i = 1;num>0;i++){
        rem = num%2;
        num=num/2;
        ans = rem*mul+ans;
        mul=10*mul;
    }
    cout<<ans;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int rem;int mul = 1;int ans = 0;
    for(int i = 1;num>0;i++){
        rem = num%2;
        num = num/2;
        ans = rem*mul+ans;
        mul = 10*mul;
    }
    cout<<ans;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int num = 13;
    int rem;
    int ans = 0;
    int mul = 1;
    for(int i = 1;num>0;i++){
        rem = num % 8;
        num = num / 8;
        ans = rem*mul+ans;
        mul = 8*mul;
    }
    cout<<"answer of octal:"<<ans;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int rem;
    int ans = 0;
    int mul = 1;
    int output = 0;
    for(int i = 1;num>0;i++){
        rem = num % 8;
        num = num / 8;
        output = rem;
        output = rem % 10;
        ans = output*mul+ans;
        mul = 10*mul;
         
    }
    cout<<ans;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int num = 125;
    int rem;int ans = 0;
    int mul = 1;
    for(int i = 1;num>0;i++){
        rem = num % 10;
        num = num / 10;
        int output = rem;
        output = output % 10;
        ans = output * mul + ans;
    }
    cout<<ans;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int Oct_Number;
    cout<<"Enter Octal Number:";
    cin>>Oct_Number;
    int ans = 0;
    int mul = 1;
    for(int i = 1;Oct_Number > 0;i++){
        int rem = Oct_Number % 10;
        Oct_Number = Oct_Number / 10;
        ans = rem * mul + ans;
        mul = 8 * mul;
    }
    cout<<"Decimal Number is :"<<ans;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int Binary_Number = 1101;
    int mul=1;int Ans = 0;
    
    for(;Binary_Number > 0;){
       int rem = Binary_Number % 10;
       Binary_Number = Binary_Number / 10;
       Ans = rem * mul + Ans;
       mul = 2 * mul;
    }
    int output = 0;
    int mul1 = 1;
    for(;Ans>0;){
        int rem1 = Ans % 8;
        Ans = Ans / 8;
        output = rem1 * mul1 + output;
        mul1 = 10*mul1;
    }
    cout<<output;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int Oct_Number;
    cout<<"Enter Number(Octet Number):";
    cin>>Oct_Number;
    int Mul = 1;
    int rem;
    int Ans = 0;
    for(int i = 1;Oct_Number>0;i++){
        rem = Oct_Number % 10;
        Oct_Number = Oct_Number / 10;
        Ans = rem * Mul + Ans;
        Mul = 8*Mul;
        
    }int output = 0;
    int Mul1 = 1;
    for(int j = 1;Ans>0;j++){
        int rem1 = Ans % 2;
        Ans = Ans / 2;
        output = rem1*Mul1 + output;
        Mul1 = 10 * Mul1;

    }cout<<"Binary Number is:"<<output;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Year";
    cin>>n;
    if(n%400==0){
        cout<<"Leap year";
        return 0;
    }else if(n%4==0 && n%100!=0){
        cout<<"Leap Year";
        return 0;
    }else{
        cout<<"Not Leap Year";
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter numner:";
    cin>>num;
    int ans = 0;
    while(num>0){
        int rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
        
    }
    cout<<ans;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int num,rem;
    cout<<"Enter Number:";
    cin>>num;int ans = 0;
    int mul = 1;
    while(num>0){
        rem = num % 10;
        if(rem==0){
            num = num / 10;
            ans=rem * mul + ans;
            mul = 10*mul;
        }cout<<"Power of 2"<<ans;
    }
    cout<<"Number is not power of 2"<<ans;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int num = 16;
    if(num<1)
    return 0;
    while(num!=1){
        if(num%2!=0)
        return 0;
    
        num = num / 2;
    }
    cout << "The number is a power of 2." << endl;
    return 1;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number:";
    cin>>x;
    int rem;int ans= 0;
    int num = x;
    int output ;
    if(x<0)
    return 0;
    while(num!=0){
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
        

    }if(ans==x){
        cout<<"Number is Palindrome";
    }else{
        cout<<"Number is not Palindrome";
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int rem;int ans=0;
    int mul = 1;
    if(num==0)
    cout<<"1";
    return 0;
    while(num!=0){
        rem = num % 2;
        rem = rem^1;
        num=num/2;
        ans = rem * mul + ans;
        mul=2*mul;
    }cout<<"Compliment is "<<ans;
}