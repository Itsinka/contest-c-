#include <iostream>
#include <string>
using namespace std;


int main()
{

    int n;
    cin >> n;

    int  st[n];

    int sec = 0;
    int h, m, s;

    for (int i = 0; i < n;i++) {

        cin >> h;
        cin >> m;
        cin >> s;
        sec = s + m * 60 + h * 3600;
        st[i] = sec;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (st[i] > st[j])
            {
                swap(st[i], st[j]);
            }
        }
    }

    for (int i = 0; i < n;i++) {
        sec = st[i];
        h = sec / 3600;
        sec = sec - h * 3600;
        m = sec / 60;
        sec = sec - m * 60;
        cout << h << " " << m << " " << sec << endl;
    }


    return 0;
}