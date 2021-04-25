#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y, n;
		scanf("%d %d %d", &x, &y, &n);
		int c = n % x;
		if(c >= y){
			printf("%d\n", n - (c - y));
		}
		else{
			printf("%d\n", n - (c + x - y));
		}
	}
	return 0;
}
