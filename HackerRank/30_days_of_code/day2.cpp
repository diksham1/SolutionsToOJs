#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int taxPercent, tipPercent;
    double mealCost;
    cin>>mealCost>>tipPercent>>taxPercent;
    double totalCost = mealCost + ((tipPercent+taxPercent)/100.0)*mealCost;
    cout<<"The total meal cost is ";
    cout<<fixed<<setprecision(0)<<totalCost;
    cout<<" dollars.";
    return 0;
}
