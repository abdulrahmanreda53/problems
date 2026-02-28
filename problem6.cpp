#include <iostream>

using namespace std;

void evenin(int a[], int n)
{
    if(n <=0)
        return;
    if((n-1)%2==0)
        cout << a[n-1]<<endl;
    evenin(a,n-1);

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i =0;i<n;i++)
        cin>>a[i];
    evenin(a,n);
    cout<<endl;


}
