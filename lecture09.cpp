/*#include<iostream>
using namespace std;
int main(){
    int row,col,star;
    for(row = 1;row<=5;row++){
        for(col = 1;col<=5-row;col++){
            cout<<" ";
        }for(star = 1;star<=2*row-1;star=star+1){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int num,row,col;
    for(row = 1;row<=5;row++){
        for(col = 1;col<=5-row;col++){
            cout<<" ";
        }for(col=1;col<=row;col++){
            cout<<col;
        }for(col=row-1;col>=1;col--){
            cout<<col;
        }cout<<endl;
    }cout<<endl;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter number:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=row-1;col++){
            cout<<" ";
        }for(col=1;col<=(n+1)-row;col++){
            cout<<"*";
        }for(col=1;col<=n-row;col++){
            cout<<"*";
        }cout<<endl;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=5-row;col++){
            cout<<"*";
        }for(col=1;col<=row-1;col++){
            cout<<"_";
        }for(col=1;col<=row-1;col++){
            cout<<"_";
        }for(col=1;col<=5-row;col++){
            cout<<"*";
    }
    cout<<endl;
    }
    for(row=1;row<=4;row++){
        for(col=row;col>=1;col--){
            cout<<"*";
        }for(col=1;col<=4-row;col++){
            cout<<"_";
        }for(col=1;col<=4-row;col++){
            cout<<"_";
        }for(col=row;col>=1;col--){
            cout<<"*";
        }
        cout<<endl;
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            cout<<"*";
        }
        for(col=1;col<=4-row;col++){
            cout<<" ";
        }for(col=1;col<=4-row;col++){
            cout<<" ";
        }for(col=1;col<=row;col++){
            cout<<"*";
        }
            cout<<endl;
    }for(row=1;row<=3;row++){
        for(col=1;col<=4-row;col++){
            cout<<"*";
        }for(col=1;col<=row;col++){
            cout<<" ";
        }for(col=1;col<=row;col++){
            cout<<" ";
        }for(col=1;col<=4-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=4-row;col++){
            cout<<" ";
        }for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }for(row=1;row<=4;row++){
        for(col=1;col<=row-1;col++){
            cout<<" ";
        }for(col=1;col<=5-row;col++){
            cout<<"* ";
        }cout<<endl;
    }
}*/
