#include <bits/stdc++.h>
using namespace std;

double f(double x,double n){
    double d = n + 1;
    for(int i = 0;i < 5;i++){
        d = d * x + 1;
    }
    return d;
}

int main(){
    double n,m;
    cin >> n >> m;
    double l = 0;
    double r = 100;
    while(r - l > 1e-4){
        double mid = (r+l)/2;
        if(f(mid,n) < m){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    printf("%.4f\n",r);
}