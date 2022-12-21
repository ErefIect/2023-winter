#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    auto isFound = (find(arr.begin(), arr.end(), target) != arr.end());

    if (isFound) {
        cout << "I found " << target << " in arr.\n";
    } else {
        cout << "Can't find " << target << " in arr.\n";
    }
    return 0;
}
