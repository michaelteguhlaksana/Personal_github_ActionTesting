#include<bits/stdc++.h>

int func(int n, int seq){
    int total = 0;

    for (int i=0; i < n-1; i++){
        total += seq[i];
    }

    for (int i = 1; i<=n; i++){
        total = total-i;
    }

   return -1*total;

}

/*
int main(){
    int n;
    int total = 0;

    std::cin >> n;
    int seq [n-1] = {0};
    
    for (int i=0; i < n-1; i++){
        std::cin >> seq[i];
        total += seq[i];
    }

    for (int i = 1; i<=n; i++){
        total = total-i;
    }

    std::cout << -1*total;

    return 0;
}
*/
