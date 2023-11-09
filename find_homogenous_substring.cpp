#include<iostream>
using namespace std;

/*
concept -> given question is = "abbcccaa";
            We start with the index 1 and count = 1;
            now we are going checking the string the backward  -> (the if statement below.)

            if we find the previous element is equal to the current element then we increment the count but the count is incremented in different way ->
            
            we add the total equal types of the elements in the count till the current element.
            count = count + (current index - current of the equal element index + 1);
*/

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