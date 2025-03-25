#include <bits/stdc++.h>
using namespace std;
void subsequence(vector<int>&vec,vector<int>subq,int &maximum,int index){
    if(vec.size()==index){
        int sum=0;
        for(int it=1;it<subq.size();it++){
            if(subq[it-1]<subq[it]){
                ++sum;
            }
        }
        maximum=max(sum,maximum);
        return;
    }
    subq.push_back(vec[index]);
    subsequence(vec,subq,maximum,index+1);
    subq.pop_back();
    subsequence(vec,subq,maximum,index+1);
}
int main(){
    vector<int>vec{1,2,3,4};
    int maximum=0;
    vector<int>subq;
    subsequence(vec,subq,maximum,0);
    
}