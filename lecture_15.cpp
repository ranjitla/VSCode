/*
#include<iostream>
using namespace std;
char convert(char name){
    char ans = name - 'a' + 'A';
    return ans;
}
int main(){
    char name;
    cout<<"Enter character:";
    cin>>name;
    cout<<"Capital : " <<convert(name);
    return 0;
}*/
//there is some mistake in powwer kindly check
/*
#include<iostream>
#include<cmath>
using namespace std;

int count_digit(int num){
    int count = 0;
    while(num!=0){
        count++;
        num = num/10;
    }
    return count;
}

void Armstrong(int X){
    int num = X;
    int rem,ans = 0;
    int digits = count_digit(X);
    while(num!=0){
            rem = num % 10;
            num = num / 10;
            ans = ans + pow(rem,digits);

    }if(X==ans){
        cout<<X<<" is an Armstrong Number."<<endl;
    }else{
        cout<<X<<" is Not an Armstrong Number."<<endl;
    }
}
int main(){
    int X ;
    cout<<"Enter number:";
    cin>>X;
    Armstrong(X);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void Trailing_zeroes(int X){
    int count = 0;
    while(X!=0){
    if(X%5==0){
        count++;
    }
    X--;
    }cout<<"No of Zeroes = "<<count;
}
int main(){
    int num ;
    cout<<"Enter input:";
    cin>>num;
    Trailing_zeroes(num);
}
*/
/*
#include<iostream>
using namespace std;
int Trailing_Zeroes(int num){
    int count = 0;
    while(num>=5){
      count = count + num / 5;
      num = num / 5;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter Number:";
    cin>>num;
    cout<<Trailing_Zeroes(num);
}
*/
/*
#include<iostream>
using namespace std;
void rectangle(int a,int b,int c,int d){
    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
        cout<<"we can make rectangle";
    }else{
        cout<<"cannot make";
    }
}
int main(){
    cout<<"Enter input and check we can make rectangle or not"<<endl;
    int a;
    cout<<"Enter Input a:";
    cin>>a;
    int b;
    cout<<"Enter Input b:";
    cin>>b;
    int c;
    cout<<"Enter Input c:";
    cin>>c;
    int d;
    cout<<"Enter Input d:";
    cin>>d;
    rectangle(a,b,c,d);
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;

int Bishop(int row,int col){
    int count  = 0;
    count += min(8-row,8-col);
    count += min(8-row,8-col);
    count += min(row-1,col-1);
    count += min(row-1,8-col);
    return count;
}
int main(){
    int row;
    cout<<"Enter row :";
    cin>>row;
    int col;
    cout<<"Enter col :";
    cin>>col;
    int output = Bishop(row,col);
    cout<<output;
}*/

//nim game

/*
#include<iostream>
using namespace std;
int Nim_game(int num){
    if(num % 4 == 0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int output = Nim_game(num);
    cout<<Nim_game(num);
}*/

