#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
#define pri printf
#define su g.substr( prev, i - prev )
int n, q;

struct node{ 
    int chil;
    string tname;
    map<string,string> attrs;
    node *po[24];
    node(){chil = 0;}
} ;
void process_in(node *t){
    while( n > 0){
        n--;
        string g, tag;
        int i = 1, prev = 1;
        getline(cin, g);
        if (g[i] == '/') return;
        node * temp = new node [1];
        for ( ; g[i] != ' ' && g[i] !='>' ; i++ );
        tag = su;
        temp->tname = tag;
        while (g[i] !='>'){
            while (g[i] == ' ') i++;
            prev = i;
            for ( ; g[i] != ' ' && g[i] != '=' && g[i]!='>' ; i++ ); 
            tag = su;
            while (g[i] == ' ' || g[i] == '"' || g[i] == '=') i++;
            prev = i;
            for ( ; g[i] != '"' && g[i]!='>' ; i++ );
            temp->attrs[tag] = su;
            while (g[i] == ' ' || g[i] == '"') i++;
        }
        process_in(temp);
        t->po[t->chil++] = temp;
        if (n <= 0 ) return;
    }
    return;
}
int process_out(int i, string g, node * temp){
    if (g[i] == '~') {
        int prev = i+1; i = g.size();
        if ( temp->attrs.find(su) != temp->attrs.end()){
            cout<<temp->attrs[su];
            return i;
        } 
        return 0;
    }
    int prev = (i > 0 ? i+1 : i); i++;
    for ( ; i<g.size() && g[i]!= '.' && g[i] != '~' ; i++ );
    for (int j = 0, hold ; j < temp->chil ; j++ ){
        if (temp->po[j]->tname.compare(su) == 0){
            hold = process_out( i, g, temp->po[j] );
            if (hold ) return hold;
        }
    }
    return 0;
}
int main ()
{
//    freopen("test.txt","r",stdin);
    string g;
    int i, prev, hh ;
    cin >> n >> q;
    node *temp, * mainn = new node [1];
    cin.ignore();
    process_in(mainn);
    while (q--){
        getline(cin, g);
        temp = mainn, i = 0, prev = 0; bool found ;
        hh = process_out(0,g,temp);
        if (!hh) cout<<"Not Found!";
        cout<<endl;
    }
    return 0;
}
