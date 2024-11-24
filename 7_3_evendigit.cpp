#include <iostream>
using namespace std;
int evendigits(long long num, int ans)
{
    if (num % 2 == 0) {
        ans++;
    }
    if (num > 9) {
        // cout << "num " << num << " ans " << ans << endl;
        return evendigits (num/10, ans);
    }
    else {
        return ans; 
    }
}

int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This is a programme for count great common devider for two numbers\n";
    cout << "Input the numbers: ";
    // int num = 432;
    long long num = 9223372036854775806;
    int ans = 0;
    cout << "Our number has " << evendigits(num, ans) << " even digits";
}
