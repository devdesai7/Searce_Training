#include <iostream>
using namespace std;

int memo(int n)
{
    int *arr = new int();

    if (n <= 1)
    {
        return n;
    }
    if (arr[n] != 0)
    {
        return arr[n];
    }
    else
    {
        arr[n] = memo(n - 1) + memo(n - 2);
    }
    return arr[n];
}
int Bottomup(int n)
{
    int *arr = new int();
    arr[0] = 0;
    arr[1] = 1;
    for (size_t i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main()
{
    int n = 11;
    int ans = Bottomup(n);
    int ans1 = memo(n);
    cout << " Value at " << n << " Location  in the series is " << ans;
    cout << endl; 
    cout << " Value at " << n << " Location  in the series is " << ans1;

}