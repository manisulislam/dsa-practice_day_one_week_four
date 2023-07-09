#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.push(x);
    }
    queue<int>q;
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int y;
        cin>>y;
        q.push(y);
    }
    int flag=1;
    while(!s.empty() && !q.empty()){
        if(s.size()!=q.size() && s.top()!=q.front()){
            flag=0;
            break;
        }
        s.pop();
        q.pop();
        
        
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if(flag ==0){
        cout<<"NO"<<endl;
    }
    return 0;
}