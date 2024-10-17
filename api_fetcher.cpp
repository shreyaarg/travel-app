
#include "api_fetcher.h"
#include <iostream>

std::vector<std::string> APIFetcher::getRecommendations(std::string interest, double budget) {
    // Mock data as if fetched from an API
    std::vector<std::string> recommendations;
    if (interest == "history") {
        recommendations = { "Visit the ancient ruins", "Tour a historical museum" };
    } else if (interest == "adventure") {
        recommendations = { "Go hiking", "Try white-water rafting" };
    } else {
        recommendations = { "Relax at a spa", "Explore the local cuisine" };
    }

    return recommendations;
}
