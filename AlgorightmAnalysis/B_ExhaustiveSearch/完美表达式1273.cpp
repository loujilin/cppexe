//
// Created by 15167 on 2025/2/10.
//
#include <iostream>
#include "math.h"
using namespace std;

int main(int argc,char *argv[])
{
    int a,b,c,d,e,f,z,g[10],k,t,m,n,x;
    n=0;
    scanf("%d",&f);
    for(a=2; a<=9; a++)
        for(b=2; b<=9; b++)
            for(c=2; c<=9; c++)
                for(d=102; d<=987; d++)
                    for(e=2; e<=9; e++) {
                        for(t=1,k=1; k<=b; k++) t=t*a;
                        z=(d*e+f-t)*c;
                        if(z<10 || z>98)  continue;
                        for(x=0; x<=9; x++) g[x]=0;
                        g[a]++;
                        g[b]++;
                        g[c]++;
                        g[e]++;
                        g[f]++;
                        g[d%10]++;
                        g[d/100]++;
                        m=(d/10)%10;
                        g[m]++;
                        g[z%10]++;
                        g[z/10]++;
                        for(t=0,x=0; x<=9; x++)
                            if(g[x]!=1) {
                                t=1;
                                break;
                            }

                        if(t==0) {
                            n++;
                        }
                    }

    if(n==0) cout<<0;
    else{
        cout<<n;
    }
    return 0;
}