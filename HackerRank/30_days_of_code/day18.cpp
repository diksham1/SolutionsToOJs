#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
        stack <char> s;
        queue <char> q;
    public:
        void pushCharacter(char ch){
            s.push(ch);
        }
        void enqueueCharacter(char ch){
            q.push(ch);
        }
        char popCharacter(){
           char spop =  s.top();
            s.pop();
            return spop;
        }
        char dequeueCharacter(){
            char qpop = q.front();
            q.pop();
            return qpop;
        }
};

