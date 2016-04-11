/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6-dev at Mon Apr 11 16:32:30 2016. */

#include "McuCmdMsg.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Motor_fields[5] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, Motor, motorNumber, motorNumber, 0),
    PB_FIELD(  2, DOUBLE  , REQUIRED, STATIC  , OTHER, Motor, degPerSec, motorNumber, 0),
    PB_FIELD(  3, DOUBLE  , REQUIRED, STATIC  , OTHER, Motor, rotationDeg, degPerSec, 0),
    PB_FIELD(  4, DOUBLE  , REQUIRED, STATIC  , OTHER, Motor, accelDegSec2, rotationDeg, 0),
    PB_LAST_FIELD
};

const pb_field_t SensorData_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, CALLBACK, FIRST, SensorData, name, name, 0),
    PB_FIELD(  2, DOUBLE  , REQUIRED, STATIC  , OTHER, SensorData, value, name, 0),
    PB_FIELD(  3, STRING  , REQUIRED, CALLBACK, OTHER, SensorData, unit, value, 0),
    PB_LAST_FIELD
};

const pb_field_t Monitor_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, CALLBACK, FIRST, Monitor, sensorName, sensorName, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, OTHER, Monitor, sensorData, sensorName, &SensorData_fields),
    PB_LAST_FIELD
};

const pb_field_t McuWrapperMessage_fields[3] = {
    PB_ONEOF_FIELD(msg,   1, MESSAGE , ONEOF, STATIC  , FIRST, McuWrapperMessage, motor, motor, &Motor_fields),
    PB_ONEOF_FIELD(msg,   2, MESSAGE , ONEOF, STATIC  , FIRST, McuWrapperMessage, monitor, monitor, &Monitor_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Monitor, sensorData) < 65536 && pb_membersize(McuWrapperMessage, msg.motor) < 65536 && pb_membersize(McuWrapperMessage, msg.monitor) < 65536 && pb_membersize(Monitor, sensorData) < 65536 && pb_membersize(McuWrapperMessage, msg.motor) < 65536 && pb_membersize(McuWrapperMessage, msg.monitor) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Motor_SensorData_Monitor_McuWrapperMessage)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Monitor, sensorData) < 256 && pb_membersize(McuWrapperMessage, msg.motor) < 256 && pb_membersize(McuWrapperMessage, msg.monitor) < 256 && pb_membersize(Monitor, sensorData) < 256 && pb_membersize(McuWrapperMessage, msg.motor) < 256 && pb_membersize(McuWrapperMessage, msg.monitor) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Motor_SensorData_Monitor_McuWrapperMessage)
#endif


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */
