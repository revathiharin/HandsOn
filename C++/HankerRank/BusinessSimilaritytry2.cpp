#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;
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
int main(){
    vector<PositiveReview> positiveReviews{{1,10},{2,10},{1,11},{2,11},{1,12},{2,12},{3,12}};
    int businessOfInterestId = 10;
    
    /*{{
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
        
    };*/
}