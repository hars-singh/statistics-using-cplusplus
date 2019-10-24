#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    cin.ignore();
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int sum =0;
    for(int i=0;i<N;i++)
    {
        sum =sum +a[i];
    }
    double U =(double)sum/N;
    cout<<U<<endl;
    sort(a,a+10);
    if(N%2!=0)
    {
        int c =(N-1)/2;
        cout<<a[c];
    }
    else
    { 
    double h;
    h=(double)(a[((N-2)/2)]+a[((N)/2)])/2;
    cout<<h<<endl;
    }
    
  int max = *max_element(a, a + N); 
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0; 
    for (int i = 0; i < N; i++) 
        count[a[i]]++; 
    int mode = 0; 
    int k = count[0]; 
    for (int i = 1; i < t; i++) { 
        if (count[i] > k) { 
            k = count[i]; 
            mode = i; 
        } 
    } 
  
    cout<< mode; 
    return 0;
}
