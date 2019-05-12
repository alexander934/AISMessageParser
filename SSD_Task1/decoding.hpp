/**
 * \file decoding.hpp
 *
 * \brief Header file of 'decoding.cpp'.
 *
 * This file includes declarations of functions allowing for decoding of parameter's values according to AIVDM protocol.
 *
 * Created by Stefan Węgrzyn on 04/05/2019.
 *
 */

#ifndef decoding_hpp
#define decoding_hpp

#include <string>
#include <map>
#include "main.hpp"

using namespace std;

/**
 *    \fn           initMessageTypesMap
 *    \brief        Assigns names to values of 'Message Type' parameter
 *    \note         Used for interpreting parameter values of AIS messages
 *    \warning      This function must be run before using MessageTypes map
 */
void initMessageTypesMap();
/**
 *    \fn           initNavigationStatusMap
 *    \brief        Assigns names to values of 'Navigation Status' parameter
 *    \note         Used for interpreting parameter values of AIS messages
 *    \warning      This function must be run before using NavigationStatus map
 */
void initNavigationStatusMap();

/**
 *    \fn           getMessageType
 *    \brief        Interprets value of the parameter 'Message Type' and returns textual description
 *    \param[in]    MsgType
 *                    Value of the parameter 'Message Type'
 *    \return       Textual description of the parameter value
 *    \warning      Requires presence of externally defined MessageTypes map container
 */
string getMessageType(unsigned MsgType);
/**
 *    \fn           getRepeatIndicator
 *    \brief        Interprets value of the parameter 'Repeat Indicator' and returns textual description
 *    \param[in]    RepeatInd
 *                    Value of the parameter 'Repeat Indicator'
 *    \return       Textual description of the parameter value
 */
string getRepeatIndicator(unsigned RepeatInd);
/**
 *    \fn           getMMSI
 *    \brief        Interprets value of the parameter 'MMSI' and returns textual description
 *    \param[in]    MMSI
 *                    Value of the parameter 'MMSI'
 *    \return       Textual description of the parameter value
 */
string getMMSI(unsigned MMSI);
/**
 *    \fn           getNavigationStatus
 *    \brief        Interprets value of the parameter 'Navigation Status' and returns textual description
 *    \param[in]    NavStatus
 *                    Value of the parameter 'Navigation Status'
 *    \return       Textual description of the parameter value
 *    \warning      Requires presence of externally defined NavigationStatus map container
 */
string getNavigationStatus(unsigned NavStatus);
/**
 *    \fn           getRateOfTurn
 *    \brief        Interprets value of the parameter 'Rate Of Turn' and returns textual description
 *    \param[in]    RateOfTurn
 *                    Value of the parameter 'Rate Of Turn'
 *    \return       Textual description of the parameter value
 */
string getRateOfTurn(unsigned RateOfTurn);
/**
 *    \fn           getSpeedOverGround
 *    \brief        Interprets value of the parameter 'Speed Over Ground' and returns textual description
 *    \param[in]    SpeedOverGround
 *                    Value of the parameter 'Speed Over Ground'
 *    \return       Textual description of the parameter value
 */
string getSpeedOverGround(unsigned SpeedOverGround);
/**
 *    \fn           getPositionAccuracy
 *    \brief        Interprets value of the parameter 'Position Accuracy' and returns textual description
 *    \param[in]    PositionAccuracy
 *                    Value of the parameter 'Position Accuracy'
 *    \return       Textual description of the parameter value
 */
string getPositionAccuracy(unsigned PositionAccuracy);
/**
 *    \fn           getLongitude
 *    \brief        Interprets value of the parameter 'Longitude' and returns textual description
 *    \param[in]    Longitude
 *                    Value of the parameter 'Longitude'
 *    \return       Textual description of the parameter value
 */
string getLongitude(unsigned Longitude);
/**
 *    \fn           getLatitude
 *    \brief        Interprets value of the parameter 'Latitude' and returns textual description
 *    \param[in]    Latitude
 *                    Value of the parameter 'Latitude'
 *    \return       Textual description of the parameter value
 */
string getLatitude(unsigned Latitude);
/**
 *    \fn           getCourseOverGround
 *    \brief        Interprets value of the parameter 'Course Over Ground' and returns textual description
 *    \param[in]    CourseOverGround
 *                    Value of the parameter 'Course Over Ground'
 *    \return       Textual description of the parameter value
 */
string getCourseOverGround(unsigned CourseOverGround);
/**
 *    \fn           getTrueHeading
 *    \brief        Interprets value of the parameter 'True Heading' and returns textual description
 *    \param[in]    TrueHeading
 *                    Value of the parameter 'True Heading'
 *    \return       Textual description of the parameter value
 */
string getTrueHeading(unsigned TrueHeading);
/**
 *    \fn           getTimeStamp
 *    \brief        Interprets value of the parameter 'Time Stamp' and returns textual description
 *    \param[in]    TimeStamp
 *                    Value of the parameter 'Time Stamp'
 *    \return       Textual description of the parameter value
 */
string getTimeStamp(unsigned TimeStamp);
/**
 *    \fn           getManeuverIndicator
 *    \brief        Interprets value of the parameter 'Maneuver Indicator' and returns textual description
 *    \param[in]    ManeuverIndicator
 *                    Value of the parameter 'Maneuver Indicator'
 *    \return       Textual description of the parameter value
 */
string getManeuverIndicator(unsigned ManeuverIndicator);
/**
 *    \fn           getRAIMFlag
 *    \brief        Interprets value of the parameter 'RAIM Flag' and returns textual description
 *    \param[in]    RAIMFlag
 *                    Value of the parameter 'RAIM Flag'
 *    \return       Textual description of the parameter value
 */
string getRAIMFlag(unsigned RAIMFlag);


#endif /* decoding_hpp */