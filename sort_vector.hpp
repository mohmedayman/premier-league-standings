#include "standing.hpp"
struct sortv
{
    inline bool operator()(Standing *s1, Standing *s2)
    {
        if (s1->getPoints() == s2->getPoints())
        {
            if (s1->getGoalDiff() == s2->getGoalDiff())
            {
                if (s1->getGoalsScored() == s2->getGoalsScored())
                {
                    return s1->team.getTitle() < s2->team.getTitle();
                }
                return s1->getGoalsScored() > s2->getGoalsScored();
            }
            return s1->getGoalDiff() > s2->getGoalDiff();
        }

        return s1->getPoints() > s2->getPoints();
    }
};
