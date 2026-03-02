#include <iostream>

using namespace std;

void digits(long long n)
{
    if (n==0)
        return;
    if (n/10 !=0)
        digits(n/10);
    cout<< n%10<<endl;
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
        else digits(N);
        cout <<endl;
    }
}
