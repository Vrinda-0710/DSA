//BINARY SEARCH
#include<iostream>
using namespace std;
int binary_search(int arr[],int key,int n){
    int start =0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        
        if(mid==key){
            return mid;
        }
        else if(mid>key){
            end=mid-1;
        }
        else{
            end=mid+1;
        }
    }
    
    return -1;
}

int main(){
    int arr[]={10,20,30,40,45,60,70,89};
    int n=sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;
    
    
    int index=binary_search(arr,key,n);
    if(index!=-1){
        cout<<key<<"FOUND AT INDEX "<<index<<endl;
        
    }
    else{
        cout<<key<<"IS NOT FOUND!"<<endl;
    }
    
    return 0;
}
