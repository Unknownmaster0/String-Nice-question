#include<iostream>
using namespace std;

// question link -> https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

bool areRotations(string s1,string s2)
{
    int n = s1.size();
    int index = -1;
    
    // find the first matching character.
    for(int i = 0; i<n; i++)
    {
        // now when we find the first common character in the s1 and s2.
        if(s1[i] == s2[0])
        {
            // make a new string from there and compare it with the s2.
            string temp = s1.substr(i,n) + s1.substr(0,i);
            if(temp == s2)
                return true;
        }
    }
    // if the true statement is not reached at any point.
    return false;        
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";

    if(areRotations(s1,s2))
        printf("Yes!");
    else    
        cout<<"NO!"<<endl;
        
    return 0;
}