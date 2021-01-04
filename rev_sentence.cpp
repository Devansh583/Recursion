//recursion
//reversing a sentence
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
    //input the sentence
    string s="";
    cout<<"Enter the sentence: ";
    getline(cin,s);

    //display the reverse of the entered sentence
    cout<<"Reverse of "<<s<<" is ";
    rev(s);
}
/*
Sample Ouput:
Enter the sentence: Hello, I am Devansh.
Reverse of Hello, I am Devansh. is .hsnaveD ma I ,olleH
*/