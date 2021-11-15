//
// Created by Matrix on 2021/10/6.
//
using namespace std;
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdio.h>
int king(int n, int m, int q)
{
    if (n == 1)
        return 1;
    else if (q > 1)
        return (king(n,m,1) + q - 2) % n + 1;
    else if (q == 1)
        return (king(n - 1,m,1) + m - 1) % n + 1;
}

int main()
{
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    printf("%d",king(n,m,q));
    return 0;
}