#include <iostream>
using namespace std;
void evendigits(long long num, int& ans)
{
    if (num == 0)     {
        return;
    }
    int lastdigit = num%10;
    if (lastdigit % 2 == 0)
    {
        ans++;
    }
    evendigits(num / 10, ans);
}

int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This is a programme for count great common devider for two numbers\n";
    cout << "Input the numbers: ";
    long long num = 9223372036854775806;
    int ans = 0;
    evendigits(num, ans);
    cout << "Our number has " <<  ans << " even digits";
}
