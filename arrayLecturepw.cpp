/*
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i =0;i<=6;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i = 0;i<=6;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=6;i++){
    if(arr[i]<35){
        cout<<i<<" ";
      }
   }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    int marks[n];
    for(int i = 0;i<=n-1;i++){
        cin>>marks[i];
    }
    for(int i = 0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,6,4,3,7,8,9,25,34,16,34,58,42,24,59,61};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<n;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter input:";
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
   int sum = 0;
   for(int i = 0;i<=n-1;i++){
    sum = arr[i] + sum;
   }
   cout<<sum;
} 
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n input:";
    cin>>n;
    int arr[n];
    int i;
    for( i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the Element you want to search:";
    cin>>x;
    bool flag = false;
    for(i = 0;i<=n-1;i++){
        if(arr[i]==x){
            flag = true;
        }
    }if(flag==true) cout<<"element found";
    else cout<<"404 element not found"<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array input:";
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 0;i<=n-1;i++){
        if(max>arr[i]){
            max = arr[i];
        }
    }
    cout<<max<<" ";
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]<min){
           min = arr[i];
        }
    }
    cout<<min;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
    }
}
    */

    