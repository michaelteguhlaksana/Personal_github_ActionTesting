#include<bits/stdc++.h>

int missing_num(int n, int seq[]){
    int total = 0;

    for (int i=0; i < n-1; i++){
        total += seq[i];
    }

    for (int i = 1; i<=n; i++){
        total = total-i;
    }

   return -1*total;

}
