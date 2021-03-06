#include <iostream>
#include <vector>
using namespace std;
using vd = vector<double>;

vd va{9.2,9.2,9.2,9.2,9.2,9.2,9.2,9.2,9.2,9.2};
vd vb{2.0,3.0,3.0,7.0};
vd vc{2.0,2.0,2.0,2.0};

vd intersection(const vd& v1, const vd& v2) {
	vd c;
    int i = 0;
    int j = 0;
    while (i < v1.size() and j < v2.size()) {
        if (v1[i] > v2[j]) ++j;
        else if (v2[j] > v1[i]) ++i;
        else {
            if (c.size() == 0 or v1[i] != c[c.size()-1]) c.push_back(v1[i]);
            ++i; ++j;
        }
    }
	return c;
}

int main() {
    vd h = intersection(va,va);
    cout << h[0];
    for (int i = 1; i < h.size(); ++i) cout << ' ' << h[i];
    cout << endl;
}
