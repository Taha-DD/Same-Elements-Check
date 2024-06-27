#include<stdio.h>
int summertime ( int l[], int d[], int r )
{
    for ( int a = 0; a < r; a++ )
    {
        for (int e = 0; e < r; e++)
        {
            if (l[a] == d[e])
                break;
            else if ( l[a] != d[e] && e == r - 1)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n = 10, t[n] = {1, 2, 6, 8, 911, 711, 82, 0, 9, 77}, s[n] = { 0, 1, 2, 8, 911, 7, 711, 6, 82, 9};
    if (summertime ( t, s, n ))
        printf (" these two arrays contain the same elements");
    else
        printf (" these two arrays contain the same elements 'in another-verse hopefully XD'");
    return 0;
}
