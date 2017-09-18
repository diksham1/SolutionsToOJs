#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
    map <string, long long> phoneBook;
    long long count = 0, n, phone;
    string s;
    
    cin>>n;
    
    while(n--){
        cin >> s >> phone;
        phoneBook.insert( pair <string, long long> (s, phone) );
    }
    
    while(cin >> s){
        count = phoneBook.count(s);      
        if(count > 0)
            cout << s << "=" << phoneBook.at(s);
        else
            cout << "Not found";
        cout << '\n';
    }
    
    return 0;
}

