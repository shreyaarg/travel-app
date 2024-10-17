#ifndef ITINERARY_H
#define ITINERARY_H

#include <string>
#include <vector>

struct Itinerary {
    std::string location;
    double cost;
    std::string activity;
};

class TravelPlan {
private:
    std::vector<Itinerary> plans;
    double totalCost;

public:
    TravelPlan();
    void addDay(std::string location, double cost, std::string activity);
    void displayPlan();
    double calculateTotalCost();
};

#endif
