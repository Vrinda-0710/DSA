//REVERSING AN ARRAY
#include <iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    int s=0;
    int e=n-1;
    
    while(s<e){
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
        
    }
}

int main(){
    
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    reverse_array(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
