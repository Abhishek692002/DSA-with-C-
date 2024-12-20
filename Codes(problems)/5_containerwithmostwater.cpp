#include <iostream>
#include <vector>
using namespace std;

int maxArea_brute(vector<int> &height) // O(n^2)
{
    int maxWater = 0;
    int n = height.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int conWidth = j - i;
            int conHeight = min(height[i], height[j]);
            int area = conWidth * conHeight;
            maxWater = max(maxWater, area);
        }
    }

    return maxWater;
}

int maxArea_optimal(vector<int> &height) // O(n)
{
    int lp = 0, rp = height.size() - 1;
    int maxWater = 0;

    while (lp < rp)
    {
        int conwidth = rp - lp;
        int conHeight = min(height[lp], height[rp]);
        int currWater = conwidth * conHeight;
        maxWater = max(maxWater, currWater);

        if (height[lp] < height[rp])
        {
            lp++;
        }
        else
            rp--;
    }

    return maxWater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Container with most water :" << maxArea_optimal(height) << endl;
    return 0;
}