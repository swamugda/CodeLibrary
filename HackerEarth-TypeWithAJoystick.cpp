    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        string s;
        getline(cin,s);

        for(int i=0;i<=4;i++)
        {
            for(int j=0;j<=5;j++)
            {
                if( (i==0 && j==0) || (i==0 && j==5) || (i==4 && j==0) || (i==4 && j==5) )
                {}
                else
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
        }

    }
