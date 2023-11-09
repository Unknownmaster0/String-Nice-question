#include<iostream>
using namespace std;

int countHomogenous(string s) {
    int mod = 1e9+7;
    int count = 1;
    int i = 1; 
    int index = 0;
    while(i < s.length() )
    {
        if(s[i] == s[i-1])
        {
            count = (count + (i - index) + 1) % mod;
        }
        else
        {
            count = (count + 1) % mod;
            index = i;
        }

        i++;
    }

    return count;
}

int main()
{
    // string s = "abbcccaa";
    string s = "xyz";
    int ans = countHomogenous(s);
    cout<<"the number of homogenous substring is -> "<<ans<<endl;
    return 0;
}