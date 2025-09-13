//Write a function to print squares of first n natural numbers, taking n as argument to the function
/*
#include<iostream>
using namespace std;
int square(int a){
    int ans = 0;
    while(a>0){
        ans = a*a + ans;
        a--;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter input:";
    cin>>n;
    int output = square(n);
    cout << "The sum of squares of first " << n << " natural numbers is: " << output << endl;
    return 0;
}
    */
/*
#include<iostream>
using namespace std;
int area(int r){
    float ans = 3.14*r*r;
    return ans;
}

int main(){
    int radius;
    cout<<"Enter radius:";
    cin>>radius;
    int output=area(radius);
    cout<<output;
}
*/
/*
#include<iostream>
using namespace std;
void odd(int a,int b){
    for(int i = a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
      int n;
      cout<<"Enter starting number:";
      cin>>n;
      int m;
      cout<<"Enter ending number:";
      cin>>m;
      odd(n,m);
}
  */
 
#include<iostream>
using namespace std;
int Digit_count(int n){
    int count = 0;
    while(n!=0){
    n = n / 10;
    count++;
    }
   return count;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int output = Digit_count(n);
    cout<<"The number of digits in the number is:"<<output;
    return 0;
}


    