
#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

pair<double, int> dp[62][62][62];

void test_case() {
	int W, E;
	scanf("%d%d", &W, &E);
	for(int a = 0; a <= 60; ++a) {
		for(int b = 0; a + b <= 60; ++b) {
			dp[a][b][60-a-b] = {0, -1};
		}
	}
	// a > b > c > a
	for(int a = 60; a >= 0; --a) {
		for(int b = 60 - a; b >= 0; --b) {
			for(int c = 60 - a - b - 1; c >= 0; --c) {
				dp[a][b][c] = {-1, -1};
				// compute dp[a][b][c]
				double p_a = 1. / 3;
				double p_b = 1. / 3;
				double p_c = 1. / 3;
				if(a + b + c != 0) {
					p_a = (double) b / (a + b + c);
					p_b = (double) c / (a + b + c);
					p_c = (double) a / (a + b + c);
				}
				// move a
				double tmp = dp[a+1][b][c].first + p_a * E + p_b * W;
				dp[a][b][c] = max(dp[a][b][c], make_pair(tmp, 0));
				// move b
				tmp = dp[a][b+1][c].first + p_b * E + p_c * W;
				dp[a][b][c] = max(dp[a][b][c], make_pair(tmp, 1));
				// move c
				tmp = dp[a][b][c+1].first + p_c * E + p_a * W;
				dp[a][b][c] = max(dp[a][b][c], make_pair(tmp, 2));
			}
		}
	}
	debug() << imie(dp[0][0][0]);
	int a = 0, b = 0, c = 0;
	while(a + b + c < 60) {
		int m = dp[a][b][c].second;
		if(m == 0) a++;
		else if(m == 1) b++;
		else c++;
		string s = "RSP";
		printf("%c", s[m]);
	}
	puts("");
}

int main() {
	int T;
	scanf("%d", &T);
	int X;
	scanf("%d", &X);
	debug() << imie(X);
	for(int z = 1; z <= T; z++) {
		printf("Case #%d: ", z);
		test_case();
	}
}
