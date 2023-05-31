#include <bits/stdc++.h>
using namespace std;

double f(double x){
    return x * (x * (x + 1) + 2) + 3;
}
int main(){
    double n;
    cin >> n;
    double l = 0;
    double r = 100;
    while(r-l > 1e-4){
        double mid = (r + l) / 2;
        if(f(mid) < n){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    printf("%.4f\n",l);
}