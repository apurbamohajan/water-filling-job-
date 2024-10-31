
#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin>>T;

    for(int i=0;i<T ;i++)
    {
        int count_0 = 0;

        int arr[3];

        for(int i=0;i<3;i++)
        {
            cin>>arr[i];

            if(arr[i]<1)
            {
                count_0++;

            }

        }

        if(count_0>=2)
        {
            cout<<"Water filling time"<<endl;

        }
        else
        {
            cout<<"Not now"<<endl;
        }

    }
}
