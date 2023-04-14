//31st may 2022; Sort in STL(own obj & oder);
#include<iostream>
#include<algorithm>
using namespace std;

struct point{int x,y;};
bool myComp(point p1,point p2){
    return p1.x < p2.x;
}
 int main(){
   point arr[] = {{3,10},{2,8},{5,4}};
   int n = sizeof(arr) / sizeof(arr[0]);
   sort(arr,arr+n,myComp);

   for(auto i : arr)
    cout<<i.x<<" "<<i.y<<endl;
     return 0;
 }