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