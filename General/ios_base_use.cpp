#include <bits/stdc++.h>
// #define FOR(i, n) for (int i = 0; i < n; i++) 
// #define FOR1(i, n) for (int i = 1; i <= n; i++) 
using namespace std;

int main()
{
    time_t start, end;
  
    time(&start);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=0; i<10000; i++){
        cout<<i+1<< " ";
    }

    time(&end);

    double time_taken = double(end - start);
    cout << "\nTime taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
// Conclusion:
    // Without ios_base::sync_with_stdio(false);
    // cin.tie(NULL); 
    // programm takes more than tripple time to execute
    
