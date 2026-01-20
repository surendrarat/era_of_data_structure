#include<iostream>

using namespace std;
struct memory
{
    int stack;
    float heap;
    double main =1;
};


int main(){
        // declare the structure and inialize the structrue

        struct memory R ={32 ,12,};
        cout<<R.heap;    
}