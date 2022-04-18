#include<iostream>
#define max 100
using namespace std;

int main()
{
    int arr[max],n,t;
    cin>>t;
    while(t)
    {
        t--;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key,c=0;
        cin>>key;
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
            {
                c++;
            }
        }
        cout<<c;
    }
}
