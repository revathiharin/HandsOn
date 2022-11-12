#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &, const string &);

string splitName(const string &, const string &);
string combineName(const string &, const string &);

string convertIntoCameCase(vector<string> arr)
{
    // cout << "Output\n";
    int i = 0, j = 2;
    string outputCaseValue = "";
    while (i < arr.size())
    {
        // splitName(string needToOperate,string camelCaseStr)
        // combineName(string needToOperate,string camelCaseStr)
        if (i == 0)
        {

            if (arr[i] == "S")
            {
                outputCaseValue = outputCaseValue + splitName(arr[i + 1], arr[i + 2].substr(0, arr[i + 2].length() - 2)) + "\n";
            }
            if (arr[i] == "C")
            {
                outputCaseValue = outputCaseValue + combineName(arr[i + 1], arr[i + 2].substr(0, arr[i + 2].length() - 2)) + "\n";
            }
            // cout<<"\n"<<arr[i+2].substr(0,arr[i+2].length()-2);
            i = i + 3;
        }
        else
        {
            // cout << "\nI" << i << " " << arr.size();
            if (i == arr.size() - 2)
            {
                j = 0;
            }
            // cout<<"\n"<<arr[i-1].substr(arr[i-1].length()-1,arr[i-1].length());
            if (arr[i - 1].substr(arr[i - 1].length() - 1, arr[i - 1].length()) == "S")
            {
                outputCaseValue = outputCaseValue + splitName(arr[i], arr[i + 1].substr(0, arr[i + 1].length() - j)) + "\n";
            }
            if (arr[i - 1].substr(arr[i - 1].length() - 1, arr[i - 1].length()) == "C")
            {
                outputCaseValue = outputCaseValue + combineName(arr[i], arr[i + 1].substr(0, arr[i + 1].length() - j)) + "\n";
            }
            // cout<<"\n"<<arr[i+1].substr(0,arr[i+1].length()-2);
            i = i + 2;
        }
    }
    cout << outputCaseValue << "\n";
    outputCaseValue = outputCaseValue.substr(0,outputCaseValue.length()-1);
    return outputCaseValue;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ofstream fout(getenv("OUTPUT_PATH"));
    //string arr_temp_temp,arrayInput;
    string arrayInput = "S;M;plasticCup() C;V;mobile phone C;C;coffee machine S;C;LargeSoftwareBook C;M;white sheet of paper S;V;pictureFrame";
    string outputStr = "";

    /*
    while (getline(cin, arr_temp_temp))
    {
        arrayInput = arrayInput + arr_temp_temp + " ";
    }
    cout << arrayInput;
    arrayInput = arrayInput.substr(0, arrayInput.length() - 1);
    */
    vector<string> arr_temp = split(arrayInput, ";");
    

    string result = convertIntoCameCase(arr_temp);
    /*for (int j = 0; j < result.size(); j++)
    {
        outputStr = outputStr + result[j] +"\n";
    }*/
    // cout << "outputStr" << result;
    /*
     fout << result << "\n";
     fout.close();*/

    return 0;
}
string splitName(const string &needToOperate, const string &camelCaseStr)
{
    string outputSplitStr = "";
    string temp;
    for (int i = 0; i < camelCaseStr.length(); i++)
    {
        // cout << "outputSplitStr 1" << outputSplitStr;
        if (isupper(camelCaseStr[i]))
        {
            /*  Converting uppercase characters to lowercase  */
            if (!(needToOperate == "C" && i == 0))
            {
                outputSplitStr = outputSplitStr + ' ';
            }
            temp = tolower(camelCaseStr[i]);
            outputSplitStr = outputSplitStr + temp;
        }
        else
        {
            outputSplitStr = outputSplitStr + camelCaseStr[i];
        }
    }

    if (needToOperate == "M")
    {
        outputSplitStr = outputSplitStr.substr(0, outputSplitStr.length() - 2);
    }
    // cout << "outputSplitStr 1" << outputSplitStr << "\n";
    return outputSplitStr;
}
string combineName(const string &needToOperate, const string &camelCaseStr)
{
    string outputCombineStr = "";
    string temp;
    for (int i = 0; i < camelCaseStr.length(); i++)
    {
        // cout << "outputSplitStr 1" << outputSplitStr;
        if (isspace(camelCaseStr[i]))
        {
            /*  Converting lowercase characters to uppercase */
            i++;
            temp = toupper(camelCaseStr[i]);
            outputCombineStr = outputCombineStr + temp;
        }
        else
        {
            if (needToOperate == "C" && i == 0)
            {
                temp = toupper(camelCaseStr[i]);
                outputCombineStr = outputCombineStr + temp;
            }
            else
            {
                outputCombineStr = outputCombineStr + camelCaseStr[i];
            }
        }
    }
        if(outputCombineStr.substr(outputCombineStr.length()-1,outputCombineStr.length())==" "){
            outputCombineStr = outputCombineStr.substr(0,outputCombineStr.length()-1);
        }
    if (needToOperate == "M")
    {
       // outputCombineStr = outputCombineStr.substr(0,outputCombineStr.length()-1);
        outputCombineStr = outputCombineStr + "()";
    }
    // cout << "outputSplitStr 2" << outputCombineStr << "\n";
    
    return outputCombineStr;
}

/*
string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}*/

vector<string> split(const string &str, const string &strSplitChar)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(strSplitChar, start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
