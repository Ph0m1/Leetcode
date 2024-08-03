#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point
{
    int x, y;
};

double euclideanDistance(const Point &p1, const Point &p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

pair<int, double> farPoint(const vector<Point> &p)
{
    int maxIndex = 0;
    double maxDistance = 0.0;
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = i + 1; j < p.size(); j++)
        {
            double d = euclideanDistance(p[i], p[j]);
            if (d > maxDistance)
            {
                maxDistance = d;
                maxIndex = j;
            }
        }
    }
    return make_pair(maxIndex, maxDistance);
}

int main()
{
    int n;
    cin >> n;
    vector<Point> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y;
    }

    pair<int, double> result = farPoint(p);
    cout << result.first << endl;

    return 0;
}
