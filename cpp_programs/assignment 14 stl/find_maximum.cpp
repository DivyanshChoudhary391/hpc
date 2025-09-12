// Write a function template getMax() that
// returns the maximum of two values (int, float, char, etc.).

# include <bits/stdc++.h>
using namespace std;


    
    template <class T> 
    T get_max(T x,T y){
        if(x>y){
            return x;
       }
        else{
            return y;
        }

    }


int main(){
    
    cout<<"here it will print the value of bigger   "<<endl;
    cout<<"it will print the max value of 3,4   "<<get_max(3,4)<<endl;
    cout<<"it will print the max values of 3.5,6,7   "<<get_max(3.5,6.7)<<endl;
    cout<<"it wil add the two char datatypes a,b   "<<get_max('a','b');
    



    return 0;

}