/*solution and example:
-if all digits are sorted descending order, then ouput is always "Not Possible"
-if all digits is in acsending order, then just need to swap the last 2 digits

1 4 7 4 6 8 4 1 2 6
6
2 < 6
=> pivot = 9
stack <2>
6 > 2 
break;
swap(6,2);
sort(6);
=> 1474684162
6 8 7
7
8 > 7
6 < 8
break
pivot = 0
clear stack
stack <8>
7 < 8
stack <8,7>
swap (6,7)
sort(8,6)
768*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,pivot;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack <int> st;
        st.push(a[n-1]);
        // monotonic stack
        for(int i = n-2; i >= 0; i--)
        {
            if(a[i] >= st.top())
            {
                st.push(a[i]);
            }
            else
            {
                pivot = i;
                break;
            }
        }
        // print -1 if these elements is in descending order
        if(pivot == 0 && a[0] >= a[1])
        {
            cout << "-1" << endl;
        }
        else
        {
            //clear the stack
            while(!st.empty())
            {
                st.pop();
            }
            st.push(pivot+1);
            for(int i = pivot+2; i < n ; i++)
            {
                if(a[i] > a[st.top()])
                {
                    st.push(i);
                }
            }
            //swap the minimum which is greater than pivot
            swap(a[st.top()],a[pivot]);
            //sort the element behind pivot 
            sort(a+pivot+1,a+n);
            for(int i = 0 ; i < n ; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
    }
}
