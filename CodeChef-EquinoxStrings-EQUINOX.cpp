#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int sum_s = 0, sum_a = 0;
        long long int n,s,a;
        cin>>n>>s>>a;
        vector<string> words;
        string input;
        while(n--)
        {
            cin>>input;
            words.push_back(input);
        }
        for(int i=0; i<words.size(); i++)
        {
            if(words[i].at(0) == 'E' || words[i].at(0) == 'Q' || words[i].at(0) == 'U' || words[i].at(0) == 'I' || words[i].at(0) == 'N' || words[i].at(0) == 'O' || words[i].at(0) == 'X')
                sum_s = sum_s + s;
            else
                sum_a = sum_a + a;
        }
        if(sum_s>sum_a)
            cout<<"SARTHAK"<<endl;
        else if(sum_a>sum_s)
            cout<<"ANURADHA"<<endl;
        else
            cout<<"DRAW"<<endl;



    }
}
