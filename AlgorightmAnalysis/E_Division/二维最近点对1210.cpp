//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct point
{
    double x;
    double y;
} p[200005], t[200005];

bool cmpx(point a, point b)
{
    return a.x < b.x;
}

bool cmpy(point a, point b)
{
    return a.y < b.y;
}

double getdis(point a, point b)
{
    return (hypot(a.x - b.x, a.y - b.y));
}

double getmin(int l, int r)
{
    if(l == r)
    {
        return 1 << 30;
    }

    if(l + 1 == r)
    {
        return getdis(p[l], p[r]);
    }

    int m = (l + r) / 2;
    double d = min(getmin(l, m), getmin(m + 1, r));


    int ti = 0;

    for(int i = l; i <= r; ++i)  //??????
    {
        if(fabs(p[i].x - p[m].x) < d)
        {
            t[ti ++] = p[i];
        }
    }

    sort(t, t + ti, cmpy);

    for(int i = 0; i < ti; ++i)
    {
        for(int j = i + 1; j < ti; ++j)
        {
            if(t[j].y - t[i].y > d)
            {
                break;
            }

            d = min(d, getdis(t[i], t[j]));
        }
    }

    return d;
}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        scanf("%lf %lf", &p[i].x, &p[i].y);
    }

    sort(p, p + n, cmpx);

    printf("%.2lf\n", getmin(0, n - 1));

    return 0;
}