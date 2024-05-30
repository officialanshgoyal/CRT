#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

void juggle(int *a, int n, int k)
{
    int number_of_cycles = gcd(n, k);
    int length_of_cycle = n / number_of_cycles;

    forn(i, number_of_cycles)
    {
        int temp = a[i]; // n=9, k=3
        int j = i;
        forn(counter, length_of_cycle - 1)
        {
            a[j] = a[(j + k) % n];
            j = (j + k) % n;
        }
        a[j] = temp;
    }
    forn(i, n)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    juggle(a, n, k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}