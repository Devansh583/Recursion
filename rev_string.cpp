//recursion
//reversing a string
#include<iostream>
using namespace std;

//defining the function rev
void rev(string s)
{
    //base condition
    if(s.length()==0)
    {
        return;
    }
    rev(s.substr(1));
    cout<<s[0];
}

int main(void)
{
    //input the string
    string s="";
    cout<<"Enter the string: ";
    cin>>s;

    //display the reverse of the entered string
    cout<<"Reverse of "<<s<<" is ";
    rev(s);
}