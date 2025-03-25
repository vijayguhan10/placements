#include <bits/stdc++.h>
using namespace std;
class Simple{
    private:
    int age;
    string name;
    public:
    Simple(int age,string name){
        this->age=age;
        this->name=name;
    }
    public:
    void print(){
        cout<<"Age : "<<age<<"\n"<<"Name : "<<name<<endl;
    }
};
int main(){
     Simple data(3,"vijay");
     data(5,"kumar");
     data.print();
}