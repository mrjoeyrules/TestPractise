#include <iostream>
using namespace std;
const int MAXACCOUNTS = 8;
int main()
{
    int AccountNumber[MAXACCOUNTS] = { 1001,7940,4382,2651,3020,7168,6245,9342 };
    double Balance[MAXACCOUNTS] = { 4254.40,27006.25,123.50,85326.92,657.0,7423.34,4.99,107864.44 };
    int DaysSinceDebited[MAXACCOUNTS] = { 20, 35, 2, 14, 5, 360, 1, 45 };
    //add your code here
    double interestPaid[MAXACCOUNTS];
    double currentInterest;
    for (size_t i = 0; i < MAXACCOUNTS; i++)
    {
        if (Balance[i] > 10000 || DaysSinceDebited[i] > 30)
        {
            currentInterest = Balance[i] * 1.06;
            interestPaid[i] = currentInterest - Balance[i];
        }
        else
        {
            currentInterest = Balance[i] * 1.03;
            interestPaid[i] = currentInterest - Balance[i];
        }
    }
    cout << "Acct No,     Balance     Interest Paid" << endl;
    for (size_t z = 0; z < MAXACCOUNTS; z++)
    {
        cout << AccountNumber[z] << "     " << Balance[z] << "     " << interestPaid[z] << endl;
    }
}

