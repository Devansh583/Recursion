#include<bits/stdc++.h>
using namespace std;

//defining the function remove
void remove(string s, int length)
{
    if(length==0)
        return;

    //update the string
    string temp= s.substr(1);

    //if the char are different
    if(s[0]!=temp[0])
        cout<<s[0];

    //calling the remove function
    remove(temp, length-1);
}

int main(void)
{
    //input the string
    string s="";
    cout<<"Enter the string: ";
    cin>>s;

    cout<<"String after removing duplicates: ";
    remove(s, s.length());

}

/*
Sample Output
Enter the string: aaabbbbcdee
String after removing duplicates: abcde
*/
