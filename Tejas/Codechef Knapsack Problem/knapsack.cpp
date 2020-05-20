#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

long long cost[200000];
int main()
    {
    int n,w,c,m,W = 0;
    
    vector<int> one,two,One,Two;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d %d",&w,&c);
    
        if(w == 1)
        one.push_back(c);
     
        else
        two.push_back(c);
        W += w;
    }

    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    One = one;
    Two = two;
    long long sum = 0,cur = 0,res = 0;
    //even case
    for(int i = 2;i<=W;i+=2)
    {
        long long res1 = 0, res2 = 0;
        if(two.size() > 0)
            res2 = two[two.size()-1];
    
        if(one.size() > 1)
            res1 = one[one.size()-1] + one[one.size()-2];
    
        else if(one.size() > 0)
            res1 = one[one.size() - 1];
    
        if(res2 > res1)
        {
            two.pop_back();
            res += res2;
        }
        else
        {
            if(one.size() > 1)
            {
                one.pop_back();
                one.pop_back();
            }
            else
                one.pop_back();
                res += res1;
        }
 
        cost[i] = res;
    }
    
    res = 0;

    if(One.size() > 0)
    {
        res = One[One.size()-1];
        One.pop_back();
    }
    cost[1] = res;
    
    for(int i = 3;i<=W;i+=2)
    {
        long long res1 = 0, res2 = 0;
        if(Two.size() > 0)
            res2 = Two[Two.size()-1];

        if(One.size() > 1)
            res1 = One[One.size()-1] + One[One.size()-2];

        else if(One.size() > 0)
            res1 = One[One.size()-1];
    
        if(res2 > res1){
            Two.pop_back();
            res += res2;
        }
        else{
            if(One.size() > 1){
                One.pop_back();
                One.pop_back();
        }
            else
                One.pop_back();
                res += res1;
        }
    cost[i] = res;
    }
    
    for (int i = 1; i <= W; i++) 
    {
        if (i > 1) printf(" ");
        printf("%lld", cost[i]);
    }
    
    printf("\n");
    return 0;
}

