#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,arr_i;
    long long int arr[n],sum=0;
    cin >> n;
    for(arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(arr_i = 0;arr_i < n;arr_i++){
       sum+=arr[arr_i];
    }
    cout<<sum;
    return 0;
}

