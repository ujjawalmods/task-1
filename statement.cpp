#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    for(int i=0; i<n; i++)
    {
        cin>>n;
        int count = 0;
        while(n%10 !=0)
        {
            n=n/10;
            count++;
        }
        if(n%10 == 0)
        cout<<count<<endl;
    }
    else

}