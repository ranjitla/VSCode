/*
#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i = 0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[],int size){
    b[0] = 25;


}
int main(){
    int arr[5] = {1,3,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
*/
/*
#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v(5);
    for(int i=0;i<=4;i++){
        cin>>v[i];
    }
    for(int i = 0;i<5;i++){
        cout<<v[i]<<" ";
    }
}
    */
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x)
    }
}
 */
/*
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(1);
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }  
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }  
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a){
    a[0] = 35;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(85);
    v.push_back(8);
    v.push_back(6);
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    int x = 101;
    int idx = -1;
    for(int i = 0;i<v.size();i++){
        if(v[i]==x){
            idx = i;
        }
    }cout<<idx;
}
    */
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    int x = 6;
    int idx = -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }cout<<idx;
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target:";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"Enter array size:";
    cin>>n;
    for(int i = 0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i = 0;i<=v.size()-2;i++){
        for(int j = i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int arr[5] = {2,5,6,8,7};
   for(int i = 4;i>=0;i--){
            cout<<arr[i]<<" ";
   }
}
   */

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter input:";
    cin>>n;
    vector<int>v;
    for(int i = 0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
        int arr;
    }
    for(int i = n-1;i>=0;i--){
        cout<<v[i]<<" ";
       }
}
*/
