#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 150;
double a[N];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%lf", &a[i]);
	
	double sum = 0;
	for(int i = 1; i <= n; i++) sum += a[i];
	printf("%.2lf\n", sum); 
	
	return 0;
}
