//Find count of prime numbers using sieve of Eratosthenes algorithm.

#include <iostream>
#include <vector>
using namespace std;

int countPrimeNo(int n)
{
    int count = 0;

    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            count++;

            for (int j = 2 * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    int count = countPrimeNo(n);

    cout << "Number of prime numbers from 2 to " << n << ": " << count;
    return 0;
}
