
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=4-row;col++){
            cout<<" ";
        }for(col=1;col<=row;col++){
            cout<<char('A'+col-1);
        }for(col=row-1;col>=1;col--){
            cout<<char('A'+col-1);
        }
        cout<<endl;
    }
}