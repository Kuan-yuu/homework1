//第一題//
#include<iostream>
using namespace std;

int a(int m, int n)
{
    if(m==0)return n+1;
    if(n==0)return a(m-1,1);
    return a(m-1,a(m,n-1));
}

int main()
{
    int m,n;
    cout<<"Input m n: ";
    cin>>m>>n;
    int result=a(m,n);
    cout<<"A("<<m<<","<<n<<")="<<result<<endl;
    return 0;
}

//第二題//
#include<iostream>
#include<vector>
using namespace std;

void p(vector<char>s,int i,vector<char>subset,vector<vector<char>>&all)
{
    if(i==s.size())
    {
        all.push_back(subset);
        return;
    }
    p(s,i+1,subset,all);

    vector<char>ns=subset;
    ns.push_back(s[i]);
    p(s,i+1,ns,all);
}

int main()
{
    vector<char>s={'a','b','c'};
    vector<vector<char>>result;
    p(s,0,{},result);
    for(auto sub:result)
    {
        cout<<"{";
        for(char c:sub)cout<<c<<" ";
        cout<<"}"<<endl;
    }
    return 0;
}
