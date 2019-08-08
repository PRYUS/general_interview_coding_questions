# include <bits/stdc++.h>

using namespace std;

int BinarySearch (int A[], int n, int X, int flag) {
    int left=0, right=n-1, mid;
    int result=-1;
    while (left <= right) {
        mid=(left + right) /2;

        if (X==A[mid]) {
            result=mid;
            if (flag==1)
                right=mid-1;
            if (flag==2)
                left=mid+1;
        } else if (X<A[mid])
            right=mid-1;
        else
            left=mid+1;
    }
    return result;
}
int main ()
{
    int A[] = {1,1,1,3,3,3,3,3,3,3,5,6,6,8,9,9};

    int firstoccurence = BinarySearch (A, 16, 10, 1);
    int lastoccurence = BinarySearch (A, 16, 10, 2);

    if (firstoccurence==-1)
        cout<<"The element is not in the array";
    else
        cout<<"The element appears "<<lastoccurence - firstoccurence +1<<"times";

    return 0;
}
