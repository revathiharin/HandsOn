// <-- EXPAND to see the data classes
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include "json/json.h"

using namespace std;
using namespace Json;

struct PositiveReview
{
    int userId;
    int businessId;

    PositiveReview(int _userId, int _businessId)
    {
        userId = _userId;
        businessId = _businessId;
    }
};
/*
Sample Input
    {
        "businessOfInterestId": 10,
        "positiveReviews": [
            PositiveReview(
                "userId": 1,
                "businessId": 10
            ),
            PositiveReview(
                "userId": 2,
                "businessId": 10
            ),
            PositiveReview(
                "userId": 1,
                "businessId": 11
            ),
            PositiveReview(
                "userId": 2,
                "businessId": 11
            ),
            PositiveReview(
                "userId": 1,
                "businessId": 12
            ),
            PositiveReview(
                "userId": 2,
                "businessId": 12
            ),
            PositiveReview(
                "userId": 3,
                "businessId": 12
            )
        ]
    }
Sample Output
    11
Business Similarity Score against business 10:
    11: 2 / (2 + 2 - 2) = 1.0
    12: 2 / (2 + 3 - 2) = 0.667
*/
int find_most_similar_business(int businessOfInterestId, const vector<PositiveReview> &positiveReviews)
{
    // COMPLETE ME
    vector<int> countUnion;
    vector<int> countIntersection;
    vector<int> similarBusinessCalc;
    for (int i = 0; i < positiveReviews.size(); i++)
    {
        // countOutput.push_back(count(strings.begin(), strings.end(), queries[i]));
        //cout << count(positiveReviews.begin(), positiveReviews.end(), businessOfInterestId) << "\n";
    }

    return 0;
}
int main()
{
    Json::Value input;
    cin >> input;
    int businessOfInterestId = input["business_of_interest_id"].asInt();

    vector<PositiveReview> positiveReviews;
    for (const auto &review : input["positive_reviews"])
    {
        positiveReviews.push_back(PositiveReview(review["user_id"].asInt(), review["business_id"].asInt()));
    }
    
    

    cout << find_most_similar_business(businessOfInterestId, positiveReviews);
    return 0;
}