#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

int funcConvert(string convertString)
{
    std::string strnum1(convertString);
    int number1;

    std::stringstream convert;

    convert << strnum1;
    convert >> number1;

    convert.str(""); // clear the stringstream
    convert.clear(); // clear the state flags for another conversion
    return number1;
}

int main()
{
    string s = "12:40:22AM";
    int timeHour;
    int sizeOfString = s.length();

    // cout<<" timeHour" << s.substr(sizeOfString-1,sizeOfString);
    if (s.substr(sizeOfString - 2, sizeOfString) == "PM")
    {
        if (s.substr(0, 2) != "12")
        {
            timeHour = funcConvert(s.substr(0, 2));
            //cout << tempStr;
            s.replace(0, 2, std::to_string(timeHour+12));
            s.replace(sizeOfString - 2, sizeOfString, "");
        }
        else{
            s.replace(sizeOfString - 2, sizeOfString, "");
        }
    }
    else
    {
        if (s.substr(0, 2) == "12")
        {
            s.replace(0, 2, "00");
            s.replace(sizeOfString - 2, sizeOfString, "");
        }
        else{
            s.replace(sizeOfString - 2, sizeOfString, "");
        }
    }
    cout<<"Converted string"<<s;
    return 0;
}

/*
string timeConversion(string s) {

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
*/