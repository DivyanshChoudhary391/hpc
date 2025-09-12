//  Display Function

// Write a function template display() that
// prints the value passed to it.

// Example:
// display(10), display(3.14), display("Hello").

# include <bits/stdc++.h>
using namespace std;

template <class T>

class display_the_input{
    protected:
    T input;
    
    public:
    display_the_input(T in12){// inputs will be taken with the help of constructor and not with get function as we will use the get function in another program and 
        //also the confusion with get function is that what will be the return type of get data



        input=in12;


    }

    
    void display(){
        cout<<input<<endl;
    }
    
    // T get_data(){
    //     cout<<"please enter the input of any datatype which you want to print"<<endl;
    //     cin>>input;
        
    // }
    
};
    
int main(){
    display_the_input <int> d1(5);
    display_the_input <float> d2(5.66671);
    display_the_input <double> d3(5.6667156);
    display_the_input <char> d4('a');
    display_the_input <string> d5("Hllo I am Divyansh");
    // display_the_input <char[20]> d6("Hllo I am Divyansh");

    d1.display();
    d2.display();
    d3.display();
    d4.display();
    d5.display();
    // d6.display();


    return 0;
}

//more simpler approach without class as we dont want to store or save anything and just print values so just write or keep the function template and not the class template


// #include <iostream>
// using namespace std;

// template <typename T>
// void display(T value) {
//     cout << value << endl;
// }

// int main() {
//     display(10);          // int
//     display(3.14);        // double
//     display("Hello");     // const char*
//     display(string("Hi"));// string (C++ object)
//     return 0;
// }


// Recommendation

// If the task is just to print values of any type → go with the function template (shorter, cleaner).

// If you also want to store the value and reuse later → your class template approach makes sense.