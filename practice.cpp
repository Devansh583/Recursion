//recursion
//sum of n natural numbers
#include<iostream>
using namespace std;

//defining the function factorial
int sum(int num)
{
    //base condition
    if(num==0)
    {
        return 0;
    }
    return num+sum(num-1);
}

int main(void)
{
    //input the no. of natural numbers
    int num=0;
    cout<<"Enter the number of natural numbers: ";
    cin>>num;

    //display the factorial of the entered number
    cout<<"Sum of "<<num<<" natural numbers is "<<sum(num);
    
}