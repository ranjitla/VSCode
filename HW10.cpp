/*#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter number:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=5-row;col++){
            cout<<" ";
        }for(col=row;col>=1;col--){
            cout<<col;
        }cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"_";
        }for(col=1;col<=row;col++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=6;row++){
        for(col=1;col<=row;col++){
            cout<<col;
        }cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        char ch='A';
        for(col=1;col<=row;col++){
            cout<<ch;
            ch++;
        }cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    
    for(row=10;row<=15;row++){
        for(col=10;col<=row;col++){
            cout<<col<<" ";
        }cout<<endl;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=4;row++){
        char ch = 'A';
        for(col=1;col<=4-(row-1);col++){
            cout<<ch;
            ch = ch+1;
        }cout<<endl;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<" ";
        }for(col=row;col>=1;col--){
            cout<<col;
        }
        cout<<endl;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter number:";
    cin>>n;
    for(row=1;row<=5;row++){
        for(col=1;col<=n-row;col++){
            cout<<"_";
        }for(col=1;col<=row;col++){
            cout<<char('A'+ row-1)<<" ";
        }cout<<endl;
    }

}*/
