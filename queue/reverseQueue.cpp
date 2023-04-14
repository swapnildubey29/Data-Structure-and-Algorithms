#include<bits/stdc++.h>
#include <queue>
using namespace std;

void print(queue<int>& queue){
    while(!queue.empty()){
        cout<<queue.front()<<" ";
        queue.pop();
    }
}

void reversequeue(queue<int>& queue){
        stack<int> stack;
        while(!queue.empty()){
            stack.push(queue.front());
            queue.pop();
        }
        while(!stack.empty()){
            queue.push(stack.top());
            stack.pop();
        }
}
int main(){
   queue<int> q;
   q.push(12);
   q.push(5);
   q.push(10);
   q.push(20);
    
    reversequeue(q);
    print(q);

    return 0;
}