#ifndef TestDriverInterface_h
#define TestDriverInterface_h

typedef struct TimerValue
{
    uint64_t        time;
    uint64_t        timebase;
} TimerValue;

// Control request codes for user client methods.
enum TimerRequestCode {
        kTestUserClientStartTimer,
        kTestUserClientStopTimer,
        kTestUserClientGetElapsedTimerTime,
        kTestUserClientGetElapsedTimerValue,
        kTestUserClientDelayForMs,
        kTestUserClientDelayForTime,
        kTestUserClientMethodCount
};

#endif /* TestDriverInterface_h */
