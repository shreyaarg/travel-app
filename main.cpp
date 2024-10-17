#include "itinerary.h"
#include "api_fetcher.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    TravelPlan myTrip;
    APIFetcher fetcher;

    int days;
    string location, interest, activity;
    double budget, cost;

    cout << "Enter your total trip budget: $";
    cin >> budget;

    cout << "Enter the number of days: ";
    cin >> days;

    cout << "Enter your primary interest (e.g., history, adventure): ";
    cin >> interest;

    vector<string> recommendations = fetcher.getRecommendations(interest, budget);

    for (int i = 0; i < days; i++) {
        cout << "Enter location for day " << i + 1 << ": ";
        cin >> location;

        cout << "Recommended activities: \n";
        for (int j = 0; j < recommendations.size(); j++) {
            cout << "- " << recommendations[j] << "\n";
        }

        cout << "Choose an activity for day " << i + 1 << ": ";
        cin >> activity;

        cout << "Enter cost for day " << i + 1 << ": $";
        cin >> cost;

        myTrip.addDay(location, cost, activity);
    }

    myTrip.displayPlan();
    cout << "Your total cost: $" << myTrip.calculateTotalCost() << endl;

    if (myTrip.calculateTotalCost() > budget) {
        cout << "Warning: You have exceeded your budget!\n";
    }

    return 0;
}
