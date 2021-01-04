//recursion
//replacing pi with 3.14
#include<iostream>
using namespace std;

//defining the function replace_pi
void replace_x(string s, int length1, int length2, string replace, string replacing)
{
    //base condition
    if(length1==0)
    {
        return;
    }
    if(s.substr(0,length2)==replace)
    {
        cout<<replacing;
        replace_x(s.substr(length2), length1-length2, length2, replace, replacing);
    }
    else{
        cout<<s[0];
        replace_x(s.substr(1),length1-1, length2, replace, replacing);
    }
}

int main(void)
{
    //input the string
    string s="";
    cout<<"Enter the string: ";
    cin>>s;

    //input the string to be replaced
    string replace= "";
    cout<<"Enter the string to be replaced: ";
    cin>>replace;

    //input the replacing string
    string replacing= "";
    cout<<"Enter the replacing string: ";
    cin>>replacing;

    //variable to store the length of the string
    int length1 = s.length();
    int length2 = replace.length();

    //display the modified string
    cout<<"\nModified string: ";
    replace_x(s, length1, length2, replace, replacing);
}
/*
Sample Ouput:
Enter the string: Air_Pollution
Enter the string to be replaced: Air
Enter the replacing string: Water

Modified string: Water_Pollution
*/