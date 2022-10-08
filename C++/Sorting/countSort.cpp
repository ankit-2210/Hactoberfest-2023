#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int maximum(vector<int> &arr, int n)
{
    return *max_element(arr.begin(), arr.end());
}

void countSort(vector<int> &arr, int n)
{
    int i, j;

    int max = maximum(arr, n);

    vector<int> count(max, 0);

    for (int i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }

    i = 0, j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j += 1;
        }
        else
        {
            i += 1;
        }
    }
}

int main()
{
    vector<int> arr = {9, 1, 4, 14, 4, 15, 6};
    int n = arr.size();
    printArray(arr, n);
    countSort(arr, n);
    printArray(arr, n);

    return 0;
}

// Time Complexity
// O(m + n)   where m is max and n is size of Array
// O(n) --> Linear Time!