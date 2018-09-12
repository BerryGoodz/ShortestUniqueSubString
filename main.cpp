#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getShortestUniqueSubstring( const vector<char>& arr, const string &str )
{
    int sameCharCounts = 0;
    int j = 0;
    for(int i = 0; i < str.size(); i ++)
    {
        if(arr[j] == str[i])
        {
            sameCharCounts ++;
            j ++;
        }
        else
        {
            sameCharCounts = 0;
            j = 0;
        }
    }
}
int main()
{
    string s = "zxczxcvzxcv";
    cout << s[0];
}
