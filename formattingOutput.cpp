#include <iostream>
#include <iomanip>
using namespace std;

// setprecision, fixed,showpoint,left,right,setw

int main()
{
     double pi =837.34567;
     double x=1565;
     //cout<<setprecision(1)<<pi<<endl;
     //cout<<setprecision(2)<<pi<<endl;
     //cout<<setprecision(3)<<pi<<endl;
     //cout<<setprecision(4)<<pi<<endl;
     //cout<<setprecision(5)<<pi<<endl;
    // cout<<setprecision(7)<<pi<<endl;
    // if we use fixed...it will start counting for setprecision from first decimal.
     //cout<<fixed<<setprecision(2)<<pi<<endl;
    // cout<<x<<endl;
     //cout<<showpoint<<x<<endl;
     //cout<<fixed<<setprecision(2)<<x<<endl;
     cout<< setprecision(2) << fixed;
     cout<<x<<endl;
     cout<<pi<<endl;
     cout<<setprecision(6);
     cout.unsetf(ios::fixed);
     cout<<pi<<endl;

    return 0;
}

// cout<< setprecision(2) << fixed;
// anything after this line is auto formatted