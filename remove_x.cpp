#include<iostream.h>
using namespace std;

//defining the function remove_x  
string remove_x(string s, int length)
{
    if(length==0)
        return "";

    char ch= s[0];

    //update the string
    string temp= remove_x(s.substr(1), length-1);

    //if the char are same
    if(s[0]=='x')
        return temp+'x';

    return ch+temp;
}
int main(void)
{
    //input the string
    string s="";
    cout<<"Enter the string: ";
    cin>>s;

    cout<<"String on modification: "<<remove_x(s, s.length());

}
/*
Sample Output
Enter the string: axxxd
String on modification: adxxx
*/
