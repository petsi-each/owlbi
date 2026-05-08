#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N = 10;
    int arr[N];
    for(int i =0; i<N; i++){
        cin>>arr[i];
    }
    for(int j=N-1; j>=0; j--){
        cout<<arr[j]<<"\n";
    }

    return 0;
}