// O(4^n)

#include <bits/stdc++.h>
using namespace std;
static string comb[] = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void keypad(string str, int idx, string ans)
{
    if (idx == str.size())
    {
        cout << ans << endl;
        return;
    }

    // char c = str.at(idx);
    string key = comb[str.at(idx)- '0'];

    for (int i = 0; i < key.size(); i++)
    {
        keypad(str, idx + 1, ans + key[i]);
    }
}
int main()
{
    string str = "15";

    keypad(str, 0, "");
    return 0;
}