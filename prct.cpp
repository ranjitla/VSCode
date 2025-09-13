/*
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i = 0;i<=6;i++){
        cin>>arr[i];
       }
    for(int j = 0;j<=6;j++){
     cout<<arr[j]<<" ";
    }
}

*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    int marks[n];
    cout<<"Enter marks :";

    for(int i = 0;i<=n-1;i++){
        cin>>marks[i];
    }
    for(int i = 0;i<=n-1;i++){
        if(marks[i] < 35){
            cout<<i<<" ";
        }
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,8,5,8,2,8,5,5,8,5,86,86,86,86,86,86,86,85,65,3};
    int size = sizeof(arr)/sizeof(arr[5]);
    cout<<size;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp = num[25];
    num[25] = num[0];
    num[0] = temp;
    cout<<endl<<num[0]<<" "<<num[25];
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for( int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<=n-1;i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}
*/


#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    for(i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter user input :";
    cin>>x;
    if(x = arr[i]){
        cout<<"element found ";
    }else{
        cout<<"element not found ";
    }
}

