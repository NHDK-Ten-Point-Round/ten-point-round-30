#include "iostream"
using namespace std;
int now[100010][2],to[100010];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>to[i];
        now[i][0]=i;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            now[to[j]][i%2]=now[j][1-(i%2)];
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        if(now[i][m%2]==i)ans++;
    }
    cout<<ans<<"\n";
}