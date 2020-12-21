#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n != 42)
    {
        cout << n << endl;
        main();
    }
    return 0;
}