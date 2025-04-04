#pragma once

#include <math/seadVector.h>

namespace al {
class HitSensor;
class ActorInitInfo;
class LiveActor;
class ActorItemInfo;

ActorItemInfo* addItem(LiveActor*, const ActorInitInfo&, const char*, const char*, const char*,
                       bool);
ActorItemInfo* addItem(LiveActor*, const ActorInitInfo&, const char*, bool);
void setAppearItemFactor(const LiveActor*, const char*, const HitSensor*);
void setAppearItemOffset(const LiveActor*, const sead::Vector3f&);
void setAppearItemAttackerSensor(const LiveActor*, const HitSensor*);
void appearItem(const LiveActor*);
void appearItem(const LiveActor*, const sead::Vector3f&, const sead::Vector3f&,
                const sead::Vector3f&, const HitSensor*);
void appearItem(const LiveActor*, const sead::Vector3f&, const sead::Vector3f&, const HitSensor*);
void appearItemTiming(const LiveActor*, const char*);
void appearItemTiming(const LiveActor*, const char*, const sead::Vector3f&, const sead::Vector3f&,
                      const HitSensor*, bool);
void appearItemTiming(const LiveActor*, const char*, const sead::Vector3f&, const sead::Vector3f&);
void acquirerItem(const LiveActor*, HitSensor*, const char*);
}  // namespace al
