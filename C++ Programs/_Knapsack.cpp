#include <iostream>
#include <cmath>
using namespace std;

// int max(int a,int b)
// {
//     return (a > b) ? a : b;
// }
void Knapsack(int weight[], int profit[], int n, int m)
{
    int k[n + 1][m + 1];
    cout << "\n<< Lets start filling the items in the bag >> " << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <=m; w++)
        {
            if (i == 0 || w == 0)
                k[i][w] = 0;

            else if (weight[i] <= w)
                k[i][w] = max(k[i - 1][w], profit[i] + k[i - 1][w - weight[i]]);
            //3 +
            else
                k[i][w] = k[i - 1][w];

            cout << k[i][w] << " ";
        }
        cout << "\n";
    }
    //     for (int i = 0; i <= n; i++)
    //     {
    //         for (int w = 0; w <= m; w++)
    //         {
    //             cout << k[i][w]<<" ";
    //         } 
    //         cout << endl;
    //     }
    cout << "\nMax Profit will be : " << k[n][m] << endl;
}

int main()
{
    int weight[] ={10,20,30}, profit[] = {60,100,120}, n = 3, m = 50;
    /*
    cout << "Enter the number of items : ";
    cin >> n;
    cout << "Enter the weight capacity of knapsack(bag) : ";
    cin >> m;
    cout << "Enter the Weight of the items : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Item " << i + 1 << " : ";
        cin >> weight[i];
    }
    cout << "Enter the Profits of the items : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Item " << i + 1 << " : ";
        cin >> profit[i];
    }
    */
    Knapsack(weight, profit, n, m);
    return 0;
}