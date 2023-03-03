#include <stdio.h>
#include <math.h>
bool nt (int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%2==0)
			return 0;
	}
	return n>1;
}
int main (){
	int t; cin >> t;
	while (t--){
		int n, m, cin >> n >> m;
		int a[500][500], i, j;
		//nhap ma tran
		for (i=0; i<n; i++){
			for (j=0; j<m; j++){
				cin>>a[i][j];
			}
		}
		map < int, int < mp;
		for (i=0; i<n; i++){
			for (j=0; j<m; j++){
				if (nt(a[i][j]) && mp(a[i][j])==0){
					cout << a[i][j] << " ";
					mp[a[i][j]] =1;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
