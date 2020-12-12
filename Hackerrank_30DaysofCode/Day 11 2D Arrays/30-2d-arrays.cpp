#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hg[6][6];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cin >> hg[i][j];
    }

    int sum = 0, max = -99;
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            sum = hg[i][j]+hg[i-1][j]+hg[i-1][j-1]+hg[i-1][j+1]+hg[i+1][j]+hg[i+1][j-1]+hg[i+1][j+1];
            if(max < sum)
                max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
