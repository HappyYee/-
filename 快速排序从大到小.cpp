#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
	if(a > b) return true;
	else return false;
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	sort(a, a+5, comp);
	for (int i = 0; i < 5; i ++) cout << a[i] << endl;
	return 0;
}
