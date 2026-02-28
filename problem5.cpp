#include <iostream>

using namespace std;

void bin(long long n)
{
    if (n==0)
        return;
    bin(n/2);
    cout<< n%2;
}
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        long long N;
        cin>>N;
        if(N==0)
            cout<<"0";
        else bin(N);
        cout <<endl;
    }
}
