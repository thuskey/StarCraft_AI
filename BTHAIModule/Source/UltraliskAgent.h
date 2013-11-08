#ifndef __ULTRALISKAGENT_H__
#define __ULTRALISKAGENT_H__

#include "UnitAgent.h"
using namespace BWAPI;
using namespace std;

/** The ZerglingAgent handles Zerg Ultralisk units.
 *
 * Author: Johan Hagelback (johan.hagelback@gmail.com)
 */
class UltraliskAgent : public UnitAgent {

private:

public:
	UltraliskAgent(Unit* mUnit);

	/** Called each update to issue orders. */
	void computeActions();
};

#endif
