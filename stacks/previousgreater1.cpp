//30th april,2022;
// @gfg_dsa_ previous greater element.....naive code;

 #include<iostream>
using namespace std;

void pregreater(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
            cout<<-1<<" ";
    }
}

int main() 
{ 
    int arr[]={20,30,10,5,15};
    int n=5;
    pregreater(arr,n);
    return 0; 
}