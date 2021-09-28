#include <iostream>
#include <stack>
using namespace std;
int main()
{
    long long n, array[100000];
    stack<long long> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    st.push(array[0]);
    long long ans = 0;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && array[i] > st.top())
        {
            ans = max(ans, array[i] ^ st.top());
            st.pop();
        }
        if(!st.empty())
        {
            ans = max(ans, array[i] ^ st.top());
        }
        st.push(array[i]);
    }
    cout << ans << endl;
