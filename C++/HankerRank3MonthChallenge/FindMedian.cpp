#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> a{1,2,5,6,4,3};
    int n = a.size();
    if (n % 2 == 0)
    {

        // Applying nth_element
        // on n/2th index
        nth_element(a.begin(),
                    a.begin() + n / 2,
                    a.end());

        // Applying nth_element
        // on (n-1)/2 th index
        nth_element(a.begin(),
                    a.begin() + (n - 1) / 2,
                    a.end());

        // Find the average of value at
        // index N/2 and (N-1)/2
        cout << "Output" << (a[(n - 1) / 2] + a[n / 2]) / 2.0;
        return (a[(n - 1) / 2] + a[n / 2]) / 2.0;
    }

    // If size of the arr[] is odd
    else
    {

        // Applying nth_element
        // on n/2
        nth_element(a.begin(),
                    a.begin() + n / 2,
                    a.end());

        // Value at index (N/2)th
        // is the median
        cout << "Output" << a[n / 2];
        return a[n / 2];
    }
    cout <<"Error";
    return 0;
}