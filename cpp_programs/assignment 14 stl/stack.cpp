// Write a C++ Program to Implement Stack in Stl

# include <bits/stdc++.h>
using namespace std;


int main(){
    stack <int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    while(s1.size()!=0){
        cout<<s1.top()<<endl;
        s1.pop();
    }




    return 0;
}