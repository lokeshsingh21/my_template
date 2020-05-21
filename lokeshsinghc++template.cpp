
/**
 *    Coded by : lucky_21
 *               --------Lokesh Singh
**/

#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define     F           first
#define     S           second
#define     pb          push_back
#define     lb          lower_bound
#define     ub          upper_bound
#define     pii         pair<int,int>
#define     all(x)      x.begin(),x.end()
#define     fix         fixed<<setprecision(10)
#define     rep(i,a,b)  for(int i=int(a);i<=int(b);i++)
#define     repb(i,b,a) for(int i=int(b);i>=int(a);i--)
#define     FastIO      ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

struct custom_hash {        // unordered_map<int,int,custom_hash>
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

struct comp{            // custom compare function
    bool operator()(pii a,pii b){

    }
};

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getrand(int a,int b){
    uniform_int_distribution<int> uid(a,b);
    return uid(rng);
}

typedef double db;
typedef long long ll;

const int N=1e5+5;
const int mod=1e9+7;

signed main(){
    FastIO;
//    clock_t start,end;
//    start=clock();



//    end=clock();
//    d time_taken=d(end-start)/d(CLOCKS_PER_SEC);
//    cout<<"Time elapsed: "<<fix<<time_taken<<"s"<<'\n';
    return 0;
}


