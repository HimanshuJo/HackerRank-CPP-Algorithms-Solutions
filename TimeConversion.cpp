/*
https://www.hackerrank.com/challenges/time-conversion/problem
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string bgn="", temp="";
    string ans="";
    int sz=s.size();
    bgn+=s[0], bgn+=s[1];
    temp+=s[sz-2], temp+=s[sz-1];
    if(temp=="PM"){
        if(stoi(bgn)!=12){
            int toad=stoi(bgn)+12;
            ans+=to_string(toad);
            for(int i=2; i<sz; ++i){
                if(s[i]=='P') break;
                ans+=s[i];
            }
            return ans;
        } else{
            for(int i=0; i<sz; ++i){
                if(s[i]=='P') break;
                ans+=s[i];
            }
            return ans;
        }
    } else{
        if(stoi(bgn)!=12){
            for(int i=0; i<sz; ++i){
                if(s[i]=='A') break;
                ans+=s[i];
            }
            return ans;
        } else{
            ans+="00";
            for(int i=2; i<sz; ++i){
                if(s[i]=='A') break;
                ans+=s[i];
            }
            return ans;
        }
    }
    return "";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
