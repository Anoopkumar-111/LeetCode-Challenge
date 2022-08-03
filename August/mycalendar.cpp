#include <bits/stdc++.h>
using namespace std;


map<int, int> mp;

bool book(int start, int end)
{
    mp[start]++;
    mp[end]--;
    int sum = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        sum += it->second;
        if (sum > 1)
        {
            mp[start]--;
            mp[end]++;
            return false;
        }
    }
    return true;
}

int main()
{
    // input will be passed in queue
/*Input
["MyCalendar", "book", "book", "book"]
[[], [10, 20], [15, 25], [20, 30]]
Output
[null, true, false, true]
*/

//input -> 10 20    15 25    20 30
    int n=3;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<book(a,b)<<endl;
    }


    return 0;
}