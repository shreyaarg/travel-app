#ifndef API_FETCHER_H
#define API_FETCHER_H

#include <string>
#include <vector>

class APIFetcher {
public:
    std::vector<std::string> getRecommendations(std::string interest, double budget);
};

#endif
