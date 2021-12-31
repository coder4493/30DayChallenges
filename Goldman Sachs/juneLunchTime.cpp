#include<bits/stdc++.h>
#define ll                 long long int
#define vi                 vector<int>
#define pll                pair<ll,ll>
#define ump                unordered_map
#define mp                 make_pair
#define pb                 push_back
#define ff                 first
#define ss                 second 
#define all(n)             n.begin(),n.end()
#define loop(i,a,b)        for(int i = a;i < b; i++)
#define looprev(i,a,b)     for(i = a; i > b; i--)
#define ps(x,y)            fixed<<setprecision(y)<<x 
#define FIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO; 

    ll testCases;
    cin>>testCases;

    while(testCases--)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        if(b < c && b < a ){
            cout<<"Bob";
        }else if(c < a && c < b){
            cout<<"Alice";
        }else{
            cout<<"Draw";
        }
        cout<<"\n";

    }

    return 0;
}