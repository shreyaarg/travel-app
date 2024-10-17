#include "itinerary.h"
#include <iostream>

TravelPlan::TravelPlan() {
    totalCost = 0.0;
}

void TravelPlan::addDay(std::string location, double cost, std::string activity) {
    Itinerary day = { location, cost, activity };
    plans.push_back(day);
    totalCost += cost;
}

void TravelPlan::displayPlan() {
    std::cout << "\n--- Detailed Travel Itinerary ---\n";
    for (int i = 0; i < plans.size(); i++) {
        std::cout << "Day " << i + 1 << ": Location: " << plans[i].location
                  << ", Activity: " << plans[i].activity
                  << ", Cost: $" << plans[i].cost << "\n";
    }
    std::cout << "Total Estimated Cost: $" << totalCost << std::endl;
}

double TravelPlan::calculateTotalCost() {
    return totalCost;
}
