#include <iostream>
using namespace std;
char str[101];
int main()
{
    int t;
    while(cin >> t)
    {
        cin >> str;
        bool flag = 0;
        int diff = 1;
        while(t/4 >= diff)
        {
            for(int i=0; i<t; i++)
            {
                if(str[i]=='*' && str[i+diff]=='*' && str[i+2*diff]=='*' && str[i+3*diff]=='*' && str[i+4*diff]=='*')
                {
                   flag = 1;
                   break;
                }
            }
            diff++;
            if(flag == 1)
               break;
        }
        if(flag == 1)
           cout<< "yes" <<endl;
        else
           cout<< "no" <<endl;
    }
    return 0;
}