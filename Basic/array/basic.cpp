#include <iostream>

using namespace std;

int main()
{
    // decaler and inisalize an array

    //    int move[5]={33,2,42,4,22};

    int move[5];
    move[0]=13;
    move[1]=33;
    // move[2]=43;
    move[3]=75;
    move[4]=13;
    
    cout << sizeof(move) <<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << move[i] << " ";
    }
}