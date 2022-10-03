#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;cin>>n;
    long long a[n];for(int i=0;i<n;i++)cin>>a[i];
    long long res0 = 0,res1=0,l=0,h=n-1;
    for(int i=0;i<n and l<=h;i++){
        long long nw=0;
        if(a[l]>a[h]){
            nw=a[l++];
            if(nw>0){
                while(a[l]>0 and l<=h){
                    nw+=a[l++];
                }
            }
        }else{
            nw=a[h--];
            if(nw>0){
                while(a[h]>0 and h>=l){
                    nw+=a[h--];
                }
            }
        }
        if(i&1){
            res0+=nw;
        }else{
            res1+=nw;
        }
    }
    long long ans = abs(res0-res1);
    cout<<ans;
    return 0;
}
