#include <iostream>

using namespace std;

int main()
{
    int watermelonWeight;
    cin >> watermelonWeight;
    if( watermelonWeight % 2)
        cout << "NO" << endl;
    else if( watermelonWeight == 2 )
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
