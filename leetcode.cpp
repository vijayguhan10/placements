#include <bits/stdc++.h>
using namespace std;

int elemination(vector<int> vec, int i) {
    if (vec.size() == 1) {
        return vec[0];
    }

    vector<int> temp;

    if (i % 2 == 0) {
        cout<<"even\n";
        for (int it = 1; it < vec.size(); it += 2) {
            cout<<vec[it]<<" ";
            temp.push_back(vec[it]);
        }
        cout<<endl;
    } else {
        cout<<"odd\n";
        for (int it =vec.size()-2  ; it>=0; it -=2) {
            cout<<vec[it]<<" ";
            temp.push_back(vec[it]);
            reverse(temp.begin(),temp.end());
        }
        cout<<endl;
    }

    return elemination(temp, i + 1);
    // cout<<"returning...\n";
}

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6,7,8,9};
    cout << elemination(vec, 0);
}
