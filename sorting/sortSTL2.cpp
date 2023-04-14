//31st may 2022; Sort in STL(vector);
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10,20,5,7};
    sort(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";

    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int x:v)
    cout<<x<<" ";
    return 0;
}