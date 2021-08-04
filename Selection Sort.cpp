#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[20],j,p,q=0,t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    for(p=0;p<=t-1;p++)
    {
        cout<<"Enter the number of elements"<<endl;
        cin>>n;
        cout<<"Enter the elements of array"<<endl;
        for(i=0;i<=n-1;i++)
        {
            cin>>arr[i];
        }
        q=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                    q++;
                }
            }
        }
        cout<<"Elements after sorting"<<endl;
        for(i=0;i<=n-1;i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<"Number of comparisons "<<q<<endl;
        cout<<"\nSwaps:"<<n-1<<endl;
    }
    return 0;
}
