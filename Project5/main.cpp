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
		cout << "�����������������������\n";
		cin >> n >> r;
		if (n < r || r < 0)
			cout << "�����ֵ������Ҫ��\n";
		else if (n == 0 && r == 0)
			break;
		else {
			cnr(n, r);
			cout << cnr(n, r) << endl;
		}
	}
}