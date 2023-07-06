#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        vector<int>v;
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size(){
            return v.size();
        }
        bool empty(){
            if(v.size()==0) return true;
            else return false;
        }
};
int main(){
    myStack a;
    myStack b;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push(x);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int y;
        cin>>y;
        b.push(y);
    }
    int flag=1;
    while(!a.empty()){
        if(a.size()!=b.size() && a.top()!=b.top()){
            flag=0;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if(flag==0){
        cout<<"NO"<<endl;
    }

    
    return 0;
}