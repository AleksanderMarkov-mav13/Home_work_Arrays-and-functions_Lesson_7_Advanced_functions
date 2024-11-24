#include <iostream> 
using namespace std;
int func(int n, int k = 3)
{
    if (n == 0) {
        return 1;
    }
    int totalWays = 0; 
    for (int i = 1; i <= k; ++i)
    {
        if (n - i >= 0) {
            totalWays += func(n - i, k);}
    }
    return totalWays;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    int n, k; 
    cout << "Input goal stair n: ";
    cin >> n;
    cout << "Input max length of jumping (for default 3): ";
    cin >> k;
    cout << "Total number of ways is " << func(n, k);
}