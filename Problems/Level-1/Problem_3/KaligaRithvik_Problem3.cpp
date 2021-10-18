#include <iostream>
using namespace std;

int main()
{
    int total_elements;
    cin >> total_elements;
    // -----
    int k, j;
    cin >> k >> j;
    // -----
    int spl_avg[total_elements];
    for (int i = 0; i < total_elements; i++)
    {
        cin >> spl_avg[i];
    }
    // -----
    float mean_k = 0;
    for(int i = 0; i < k; i++)
    {
        mean_k = mean_k + spl_avg[i];
    }

    float final_k = (mean_k) / k;
    //-----
    float mean_j = 0;
    for(int i = (total_elements - 1); i > (total_elements - j - 1); i--)
    {
        mean_j = mean_j + spl_avg[i];
    }

    float final_j = (mean_j) / j;
    // -----
    
    cout << final_k - final_j << endl;
}