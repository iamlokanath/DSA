#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int last_digit;
    for (int i = 1; i <= 3; i++)
    {
        last_digit = num % 10;
        cout<<last_digit;
        num = num / 10;

    }
    


    

}