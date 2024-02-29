#include "head.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *countOfPairs(int n, int x, int y, int *returnSize)
{
    int a[101][101];
    int i, j, k;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = INF;
            }
        }
    }

    for (i = 1; i < n; i++)
    {
        a[i][i + 1] = 1;
        a[i + 1][i] = 1;
    }
    a[x][y] = 1;
    a[y][x] = 1;

    for (k = 1; k < n + 1; k++)
    {
        for (i = 0; i < n + 1; i++)
        {
            for (j = 0; j < n + 1; j++)
            {
                int t = a[i][k] + a[k][j];
                if (t < a[i][j])
                    a[i][j] = t;
            }
        }
    }
    int *ans = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n; i++)
    {
        ans[i] = 0;
    }
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < n + 1; j++)
        {
            if (i != j)
                ans[a[i][j] - 1]++;
        }
    }
    *returnSize = n;

    return ans;
}