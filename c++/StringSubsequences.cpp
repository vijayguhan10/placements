#include <bits/stdc++.h>
using namespace std;
bool subsequence(string& input,string output,int index,string&res){
    if(index==input.size()){
        if(output.size()==3){
            res=output;
            return true;
        }
        return false;
    }
    bool ans=subsequence(input,output,index+1,res);
    if(ans){
        return ans;
    }
    bool ans2=subsequence(input,output+=input[index],index+1,res);
    return ans2;
}
int main(){
    string input="abc";
    string output="";
    int index=0;
    string res="";
    bool com=subsequence(input,output,index,res);
    cout<<res;
}