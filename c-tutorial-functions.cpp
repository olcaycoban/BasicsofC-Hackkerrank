https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int max_of_two(int n,int k){return n >k ?n :k;}

int max_of_four(int k,int l,int m,int n){
    int max=max_of_two(max_of_two(k,l),max_of_two(m,n));
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}