#include <iostream>

using namespace std;

int main()
{
    int ad,am,ay,ed,em,ey;
    cin >> ad >> am >> ay >> ed >> em >> ey;
    if(ay < ey){
        cout << 0;
    }
    else if(ay == ey)
    {
        if(am <= em)
        {
            if(ad <= ed)
            {
                cout << 0;
            }
            else
            {   
                cout << 15*(ad - ed);
            }
        }
        else
        {
            cout << 500*(am-em);
        }
    }
    else
    {
        cout << 10000;
    }
    return 0;
}
