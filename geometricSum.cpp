#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double geometricSum(int k) {
    // Write your code here
if(k==0)
{
    return 1;
}
    int ans=pow(2,k);
    return ((double) 1/ans)+geometricSum(k-1);
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
