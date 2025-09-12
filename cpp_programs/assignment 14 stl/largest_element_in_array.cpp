// Write a class template findLargest() to find
// the largest element in an array.

# include <bits/stdc++.h>
using namespace std;


template <class T>
class largest_element{
    protected:
    T *arr;
    int number;
    T largest;

    public:
    largest_element(int n){
        number=n;
        arr= new T[number];
        
    }
    
    void get_data(){
        
        for(int i=0;i<number;i++){
            cout<<"enter the input for "<<typeid(T).name()<<endl;
            cin>>arr[i];
            
        }
        
    }
    
    void find_largest(){
        largest=arr[0];
        for(int i=0;i<number;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        cout<<"the largest element of this array is"<<largest<<endl;
        
    }

    ~largest_element(){
        delete []arr;
    }
    
};
    
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    largest_element <int> l1(n);
    l1.get_data();
    
    largest_element <string> l2(n);
    l2.get_data();
    
    largest_element <float> l3(n);
    l3.get_data();
    
    
    l1.find_largest();
    l2.find_largest();
    l3.find_largest();
    




    return 0;
}