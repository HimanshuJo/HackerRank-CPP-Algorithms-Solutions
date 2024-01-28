/*
https://www.hackerrank.com/challenges/staircase/problem
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    vector<vector<char>>vec(n, vector<char>(n, ' '));
    for(int i=0; i<n; ++i){
        int count=i+1;
        for(int j=n-1; j>=0; --j){
            if(count==0) break;
            vec[i][j]='#';
            count--;
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
