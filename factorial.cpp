//recursion
//factorial of a no.
#include<iostream>
using namespace std;

//defining the function factorial
int fact(int num)
{
    //base condition
    if(num==0)
    {
        return 1;
    }
    return num*fact(num-1);
}

int main(void)
{
    //input the natural no.
    int num=0;
    cout<<"Enter the number: ";
    cin>>num;

    //display the factorial of the entered number
    cout<<num<<"!= "<<fact(num);
    
}
