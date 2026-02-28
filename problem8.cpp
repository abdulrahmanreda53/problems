#include <iostream>

using namespace std;

void pyramid(int row,int n)
{
    if(row>0)
        return;

    for(int i=0;i<row-1;i++)
        cout<<"";
    for(int i=0;i <2*(n-row+1)-1;i++)
        cout<<"*";
        cout<<endl;
         pyramid(row+1,n);

}


int main()
{
    int n;
    cin>> n;
    pyramid(1,n);


}
