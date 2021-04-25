#include<bits/stdc++.h>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

    double s = 0.0;
	int num;

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		s += num;
	}

	printf("%.12f", (s/n) );

	return 0;
	}
