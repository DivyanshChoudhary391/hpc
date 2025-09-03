// wap to find the mean of 2 private data members of a class 

# include <iostream>
using namespace std;

class mean{
    private:
    float n1;
    float n2;

    public:
    friend float mean_function(mean obj);

    mean(float number_1=5, float number_2=10){
        n1=number_1;
        n2=number_2;
    }
};

float  mean_function(mean object_formal){
    return ((object_formal.n1+object_formal.n2)/2);

}
int main(){
    mean object_main;
    mean obj2(100,500);
    cout<<"the returned mean value from this is  "<<mean_function(object_main)<<endl;
    cout<<"the returned mean value from this is  "<<mean_function(obj2);


    return 0;
}