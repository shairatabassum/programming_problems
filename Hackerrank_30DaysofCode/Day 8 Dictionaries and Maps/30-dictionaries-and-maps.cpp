#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    string name;
    int num;
    scanf("%d", &n);
    map<string, int> phonebook;
    for(int i=0; i<n; i++) {
        cin >> name;
        cin >> num;
        phonebook[name] = num;
    }   

    string query;
    while(cin >> query) {
        if(phonebook[query])
            cout << query << "=" << phonebook[query] << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}