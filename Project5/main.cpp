#include<iostream>
using namespace std;
double cnr(int n, int r) {
	if (r == 0)
		return 1;
	if (r > 0)
		return cnr(n, r - 1)*(n - r + 1) / r;
}
void main() {
	int n, r;
	while (1) {
		cout << "请输入两个数求其组合数：\n";
		cin >> n >> r;
		if (n < r || r < 0)
			cout << "输入的值不符合要求！\n";
		else if (n == 0 && r == 0)
			break;
		else {
			cnr(n, r);
			cout << cnr(n, r) << endl;
		}
	}
}