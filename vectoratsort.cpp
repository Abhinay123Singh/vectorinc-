#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(16);
    v.push_back(8);
    v.push_back(96);
    v.push_back(48);

    // Display elements using v.at()
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // Sort the vector
    sort(v.begin(), v.end());

    // Display sorted elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}
