    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        long long T,N;
        cin>>T;
        while(T--)
        {
            cin>>N;
            if(N%4==1){
                cout<<"1 1"<<endl;
            }
            if(N%4==2){
                cout<<"2 "<<N<<" 1"<<endl;
            }
            if(N%4==3){
                cout<<"0"<<endl;
            }
            if(N%4==0){
                cout<<"1 "<<N<<endl;
            }
        }
    }
