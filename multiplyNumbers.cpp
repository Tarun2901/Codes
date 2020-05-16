#include <iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
if(m==0||n==0)
{
    return 0;
}
    if(m==1)
    {
        return n;
    
    }
    if(n==1)
    {
        return m;
    }
    if(m<n)
    { multiplyNumbers(n,m);
    }
    return (m+multiplyNumbers(m,n-1));

    }

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

