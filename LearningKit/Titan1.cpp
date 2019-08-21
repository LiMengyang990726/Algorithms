#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getMaximumOutfits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY outfits
 *  2. INTEGER money
 */

int getMaximumOutfits(vector<int> outfits, int money) {
    vector<int> outputs;
    for(int i = 0 ; i < outfits.size(); i ++){
        int spent = 0;
        int output = 0;
        if (outfits[i] <= money) {
            spent += outfits[i];
            output += 1;
            cout << (outfits[i]<=money) << endl;
            for (int j = (i + 1); j < outfits.size(); j++) {
                spent += outfits[j];
                cout << "Im here" << endl;
                if (spent > money) {
                    break;
                } else {
                    output += 1;
                }
            }
            outputs.push_back(output);
        }else{
            outputs.push_back(output);
            break;
        } 
        
    }
    sort(outputs.begin(),outputs.end());
    return outputs[0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string outfits_count_temp;
    getline(cin, outfits_count_temp);

    int outfits_count = stoi(ltrim(rtrim(outfits_count_temp)));

    vector<int> outfits(outfits_count);

    for (int i = 0; i < outfits_count; i++) {
        string outfits_item_temp;
        getline(cin, outfits_item_temp);

        int outfits_item = stoi(ltrim(rtrim(outfits_item_temp)));

        outfits[i] = outfits_item;
    }

    string money_temp;
    getline(cin, money_temp);

    int money = stoi(ltrim(rtrim(money_temp)));

    int result = getMaximumOutfits(outfits, money);

    fout << result << "\n";

    fout.close();

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