
// defines for things that do not normally need changing


#define MOTOR_FL 0
#define MOTOR_FR 3
#define MOTOR_BL 2
#define MOTOR_BR 1

#define PIDNUMBER 3

#define DEGTORAD 0.017453292f
#define RADTODEG 57.29577951f

#define FILTERCALC( sampleperiod, filtertime) (1.0f - ((float)sampleperiod) / ((float)filtertime))

#define PI  3.14159265358979323846f 


#define AUXNUMBER 16


#define CH_ON (AUXNUMBER - 2)
#define CH_OFF (AUXNUMBER - 1)
#define CH_FLIP 0
#define CH_EXPERT 1
#define CH_HEADFREE 2
#define CH_RTH 3
#define CH_AUX1 4
#define CH_AUX2 5
// trims numbers have to be sequential, atart at CH_PIT_TRIM
#define CH_PIT_TRIM 6
#define CH_RLL_TRIM 7
#define CH_THR_TRIM 8
#define CH_YAW_TRIM 9

#define CH_INV 10
#define CH_VID 7
#define CH_PIC 8
#define CH_AUX3 11
#define CH_AUX4 12

#define DEVO_CHAN_5 CH_INV
#define DEVO_CHAN_6 CH_FLIP
#define DEVO_CHAN_7 CH_PIC
#define DEVO_CHAN_8 CH_VID
#define DEVO_CHAN_9 CH_HEADFREE
#define DEVO_CHAN_10 CH_RTH

#define MULTI_CHAN_5 CH_FLIP
#define MULTI_CHAN_6 CH_RTH
#define MULTI_CHAN_7 CH_PIC
#define MULTI_CHAN_8 CH_VID
#define MULTI_CHAN_9 CH_HEADFREE
#define MULTI_CHAN_10 CH_INV

#define RX_MODE_NORMAL 123
#define RX_MODE_BIND 0



#define BRIDGE_FORWARD 0
#define BRIDGE_WAIT 1
#define BRIDGE_REVERSE 5

#define FORWARD DIR2
#define REVERSE DIR1


#define FREE 2
#define BRAKE 3
#define DIR1 1
#define DIR2 0

#define ROLL 0
#define PITCH 1
#define YAW 2










