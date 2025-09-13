
/*
#include<iostream>
using namespace std;
int main(){
    int n,star,row,col;
    cout<<"Enter number:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(star=1;star<=row;star++){
                cout<<"*";
        }cout<<endl;
    }cout<<endl;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int n,num,row,col;
    cout<<"Enter number:";
    cin>>n;
    int count = 1;
    for(row = 1;row<=n;row++){
        for(col = 1;col<=n-row;col++){
            cout<<"_";
        }for(num=1;num<=row;num++){
            cout<<count;
        
        }
        count=count+1;
        cout<<endl;
    }
    cout<<endl;
}*
/*
#include<iostream>
using namespace std;
int main(){
    int num,row,col;
    for(row = 1;row<=5;row++){
        for(col = 1;col<=5-row;col++){
            cout<<"_";
        }for(num = 1;num<=row;num++){
            cout<<num;
        }cout<<endl;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row = 1;row<=5;row++){
        for(col = 1;col<=5-row;col++){
            cout<<"_";
        }for(char chr = 'A';chr<='A'+row-1;chr++){
            cout<<chr;
        }cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int num,row,col;
    for(row = 1;row<=5;row++){
        for(col = 1;col<=5-row;col++){
            cout<<"_";
        }
        for(num=row;num>=1;num--)
        cout<<num;

        cout<<endl;
    }
}*/