#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>array {4,12,5,9,15};

    cout<<"The elements in the vector are: "<<endl;
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The minimum element is: "<<*min_element(array.begin(),array.end());

    return 0;
}