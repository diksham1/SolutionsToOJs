//REGEX WHICH MATCHES ALL THE EMAILS ENDING IN @GMAIL.COM

#include <iostream>
#include <regex>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector <string> names;
    string name, email;
    regex r(".+@gmail.com$");

    cin >> n;
    
    while(n--){
        cin >> name >> email;
        if(regex_match(email, r)){
            names.push_back(name);
        }
    }
    
    sort(names.begin(), names.end());

    for(auto i : names){
        cout << i << endl;
    }

    return 0;
}
