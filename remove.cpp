#include<bits/stdc++.h>
using namespace std;

/*int main(void)
{
    //input the no. of test cases
    int t=0;
    cin>>t;

    for(int j=0;j<t;j++)
    {
        //input the value of n, k, x, y
        long n=0, k=0, x=0, y=0;
        cin>>n>>k>>x>>y;

        //four repeating coordinates
        long x1,x2,x3,x4,y1,y2,y3,y4;

        //if x and y are equal
        if(x==y)
        {
            cout<<n<<" "<<n<<"\n";
            continue;
        }
        
        //if the point (x,y) is on X-axis or Y-axis
        if(y==0)
        {
            x1=n; y1=(n-x);
            x2=(n-x); y2=n;
            x3=y; y3=x;
            x4=x; y4=y; 
        }
        if(x==0)
        {
            x1=y; y1=x;
            x2=n; y2=(n-x1);
            x3=(n-x1); y3=n;
            x4=x; y4=y;
        }
        //possible coordinates
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3;
        cout<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    }
    return 0;
}*/
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