//Md Najmul Huda Hridoy


#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
int t, pn = 0;
bool vis[N];
long long l, r, prime[80071];
 
int main() {
	memset(vis,true,sizeof(vis));
	for (int i = 2; i < N; i++) {
		if (vis[i]==true )
		prime[pn++] = i;
		for (int j = i; j < N; j += i)
			vis[j] = false;
 	}
 	vis[1]=false;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld%lld", &l, &r);
		long long count = 0;
		for (int i = 0; i < pn; i++) {
			for (long long j = prime[i] * prime[i]; j <= r; j *= prime[i]) {
				
				if (j >= l) 
				
				count++;
   			}
  		}
  		printf("%lld\n", count);
 	}
	return 0;
}


