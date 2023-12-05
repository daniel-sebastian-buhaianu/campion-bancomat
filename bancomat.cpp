#include <fstream>
using namespace std;
int main()
{
	ifstream f("bancomat.in");
	int s, n;
	f >> s >> n;
	while (n > 0)
	{
		int x;
		f >> x;
		bool d = x%10 == 2;
		x /= 10;
		if (d) s += x;
		else if (s >= x) s -= x;
		n--;
	}
	f.close();
	ofstream g("bancomat.out");
	g << s;
	g.close();
	return 0;
}

