#include <bits/stdc++.h>
using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

////////////***First Approach***////////////
void driver()
{
    ll ans = 0, xxx = 0;

    ll nn;
    cin >> nn;

    vector<ll> vv;
    set<ll> st;
    ll xx;
    st.emplace(0);
    for (int i = 0; i < nn; i++)
    {
        cin >> xx;
        vv.emplace_back(xx);
    }
    // ll xx, yy;
    // cin >> xx >> yy;

    // if (xx == yy)
    // {
    // 	cout << xx << " " << xx << " " << xx << endl;
    // 	return;
    // }

    // if(xx == 0 && yy == 0){
    // 	cout<<-1<<" "<<0<<" "<<1<<endl;
    // }else if(xx == 0 && yy>0){
    // 	cout<<-(2*yy+1)<<" "<<yy<<" "<<yy+1<<endl;
    // }else if(xx>0 && yy == 0){
    // 	cout<<0<<" "<<0<<" "<<3*xx<<endl;
    // }else if(xx<0 && yy == 0){
    // 	cout<<(3*xx)<<" "<<0<<" "<<0<<endl;
    // }else if(xx == 0 && yy<0){
    // 	cout<<(yy-1)<<" "<<(yy)<<" "<<(2*(((-1)*yy))+1)<<endl;
    // }else if(xx<0 && yy>0){
    // 	cout<<3*xx-(2*yy+1)<<" "<<yy<<" "<<yy+1<<endl;
    // }else if(xx>0 && yy<0){
    // 	cout<<yy-1<<" "<<yy<<" "<<3*(xx)+2*(-yy)+1<<endl;
    // }else
    // {
    // 	cout<<(3*xx-yy)-(3*yy-2*xx)<<" "<<yy<<" "<<3*yy-2*xx<<endl;

    // }

    //  for (int i = 0; i < nn; i++)
    // {
    //     cin >> xx;
    //     vv.emplace_back(xx);
    // } //
    //     cin >> xx;
    //     vv.emplace_back(xx);
    // } //  for (int i = 0; i < nn; i++)
    // {
    //     cin >> xx;
    //     vv.emplace_back(xx);
    // } //  for (int i = 0; i < nn; i++)
    // {
    //     cin >> xx;
    //     vv.emplace_back(xx);
    // }

    for (int i = 0; i < nn; i++)
    {
        xxx = xxx ^ vv[i];
        //  //  for (int i = 0; i < nn; i++)
        // {
        //     cin >> xx;
        //     vv.emplace_back(xx);
        // } //  for (int i = 0; i < nn; i++)
        // {
        //     cin >> xx;
        //     vv.emplace_back(xx);
        // }
        if (0 < st.count(xxx))
        {
            st.clear();
            st.insert(0);
            xxx = 0;
            // if(xx == 0 && yy == 0){
            // 	cout<<-1<<" "<<0<<" "<<1<<endl;
            // }else if(xx == 0 && yy>0){
            // 	cout<<-(2*yy+1)<<" "<<yy<<" "<<yy+1<<endl;
            // }else if(xx>0 && yy == 0){
            ans++;
        }
        st.insert(xxx);
    }
    cout << ans << endl;
}

//////////////***Main Function***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        driver();

    return 0;
}