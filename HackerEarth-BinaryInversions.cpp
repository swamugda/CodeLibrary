    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long n,b,x,a;
        cin>>n>>b>>x;
        a=n-b;
        if(x>a*b)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            long long p=x/a;
            long long q=x%a;
            for(long long i=0; i<(n-p-a-1);i++)
            {
                cout<<"0"<<" ";
            }
            for(long long i=0;i<q;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<"0"<<" ";
            for(long long i=0;i<(a-q);i++)
            {
                cout<<"1"<<" ";
            }
            for(long long i=0;i<p;i++)
            {
                cout<<"0"<<" ";
            }
        }
    }
