#include <bits/stdc++.h>
using namespace std;

// will store path in 2d vector
// i,j starting position of robot
// n , m : final position
// go right i+1 and down j+1
// return 1 when initial becomes == final 
// DESTINATION REACHED when i==n-1 || j==m-1  
// (n-1 because of zero based indexing)
// handle out of range cases

// when path is unvisited only then explore


int solve(int n, int m, int i, int j, vector<vector<int>> &vec)
{
    if (i == (n - 1) || j == (m - 1))
        return 1;
    if (i >= n || j >= m)
        return 0;

    if (vec[i][j] != -1)
        return vec[i][j];

    int right = solve(n, m, i + 1, j, vec);
    int down = solve(n, m, i, j + 1, vec);

    return vec[i][j] = right + down;
}



int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m, -1));

    int ans = solve(n, m, 0, 0, vec);

    cout<<ans<<endl;

    return 0;
}