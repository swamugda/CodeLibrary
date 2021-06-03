    #include<bits/stdc++.h>
    #include<math.h>

    using namespace std;

    int main()
    {
        long long l,r,b,c,count=0,a=0;
        int t;
        cin>>t;
        while(t--)
        {
            cin>>l>>r;
            count=0;
            for(b=sqrt(l); b<= (r/2) +1; b++)
            {
                if( b*b>=l)
                {
                    count += sqrt(b*b-l) +1;
                    if(b*b>=r)
                    {
                        a= sqrt(b*b-r);
                        if(a*a == b*b-r)
                        {
                            count=count-a;
                        }
                        else
                        {
                            count=count-a-1;
                        }

                    }

                }
            }
            cout<<count<<endl;
        }
    }
