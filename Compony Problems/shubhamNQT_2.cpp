#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10, k= 100;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int sum = 0;

        for (int j = i; j < n;j++)
        {   

            sum +=arr[j];
            if(sum>k) 
            {
            break;
            }
            
            count++;
            ans = max(ans, count);          
            
        }
        
    }

    cout<<ans-1;
    return 0;
}