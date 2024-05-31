#include <stdint.h>

// UTC time structs broken down until standard components.
typedef struct
{
  uint8_t seconds;  // 0-59
  uint8_t minutes;  // 0-59
  uint8_t hour;     // 0-23
  uint8_t day;      // 0-30
  uint8_t month;    // 0-11
  uint8_t year;
  uint8_t week;
} UTCTimeStruct;

typedef struct {
    uint16_t index;             // history sequence number
    UTCTimeStruct utcTime;
    uint16_t shotDuration;
    uint16_t shotPower; 
    uint8_t pad;                // size must be even number
}flash_shot_t;

typedef struct{
    uint8_t initPuffs;
    uint8_t reducedPuffs;
    uint8_t timePeriod;
    UTCTimeStruct startDate;
}flash_plan_t;

typedef struct{
    uint8_t deviceLockout;
    uint8_t deviceStrength;
    uint8_t hourlyLockout;
}flash_user_t;

typedef struct{
    uint8_t goal;
    UTCTimeStruct date;
}flash_goal_t;