#include <iostream>
#include <string>
using namespace std;

int vowel(const string &s,int index)
{
    if (index == s.size())
        return 0;
    char c = tolower (s[index]);
    int add = (c=='a'||c=='e' || c=='i'||c=='o'||c=='u')?1:0;
    return add + vowel(s,index + 1);
}


int main()
{
    string s;
    getline (cin,s);
    cout << vowel(s,0);
}
