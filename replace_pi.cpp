//recursion
//replacing pi with 3.14
#include<iostream>
using namespace std;

//defining the function replace_pi
void replace_pi(string s, int length)
{
    //base condition
    if(length==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replace_pi(s.substr(2), length-2);
    }
    else{
        cout<<s[0];
        replace_pi(s.substr(1),length-1);
    }
}

int main(void)
{
    //input the string
    string s="";
    cout<<"Enter the string: ";
    cin>>s;
    //variable to store the length of the string
    int length = s.length();

    //display the modified string
    cout<<"Modified string: ";
    replace_pi(s, length);
}
/*
Sample Ouput:
Enter the string: pippi
Modified string: 3.14p3.14
*/