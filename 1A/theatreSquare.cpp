#include <iostream>

using namespace std;

int main()
{
    long long int n, m, a;
    cin>>n>>m>>a;
    long long int flagStones = 0;
    long long int flagN = 0, flagM = 0;
    flagN += n / a;
    flagM += m / a;
    if( n % a )
        flagN += 1;
    if( m % a )
        flagM += 1;
    cout<<flagN * flagM<<endl;
    return 0;
}
