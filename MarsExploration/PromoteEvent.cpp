#include "PromoteEvent.h"

PromoteEvent::PromoteEvent() {}

PromoteEvent::PromoteEvent(int r_eventD, int r_mID) : Event(r_eventD, r_mID) {
}

void PromoteEvent::Execute(MarsStation* pS)
{
    // TODO: should move a mountainous mission to the emergency list and
    // update the missionís data(if foundand is waiting)


}


