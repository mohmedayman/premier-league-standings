#include <string>
#include <iomanip>

#ifndef MATCH_HPP // Header guard
#define MATCH_HPP
#include "team.hpp"
class Match
{
public:
    Team *homeTeam, *awayTeam;
    int homeGoals;
    int points = 0, awayGoals, week;
    bool checked = false;
    Match(Team *homeT, Team *awayT, int homeGoals, int awayGoals, int week);
    std::vector<Team *> teams();
    Match() = default;
};
#endif