# include <bits/stdc++.h>

using namespace std;

int flag, T, n;

long long P, A[1005];

int BinarySearch (int left, int right, long long X)
{
    int mid;

    while (left<=right) {
        mid=(left + right)/2;
        if (A[mid]==X)
            return 1;
        else if (A[mid] > X)
            right=mid-1;
        else
            left=mid+1;
    }
    return -1;
}

int main ()
{
    cin>>T;
    for (int t=1; t<=T; ++t) {
        cin>>n;

        for (int i=1; i<=n; ++i)
            cin>>A[i];
        cin>>P;
        sort (A+1, A+n+1);

        flag=0;

        for (int i=1; i<n; ++i)
            for (int j=i+1; j<=n; ++j) {
                long long TotSum= P - A[i] - A[j];

                if (BinarySearch(j+1, n, TotSum)==1) flag=1;

            }

        if (flag==1) cout<<"YES\n";
              else cout<<"NO\n";
    }

    return 0;
}
