#include <iostream>

using namespace std;

int main(){
    long long n, temp , max = 0;
    cin >> n;
    string str;
    
    while(n > 1){
        temp = n%2;
        if(temp == 1)
            str.push_back('1');
        else
            str.push_back('0');
        n /= 2;
    }
    
    str.push_back('1');
    
    for(int i = 0; i< str.size(); i++){
        temp = 0;
        if(str[i] == '1'){
            while(str[i] == '1' && i < str.size()){
                temp++;
                i++;
            }
            if(temp > max){
                max = temp;
            }
        }
    }
    
    cout<<max;
}
