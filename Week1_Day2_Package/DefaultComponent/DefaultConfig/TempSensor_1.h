/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor_1
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TempSensor_1.h
*********************************************************************/

#ifndef TempSensor_1_H
#define TempSensor_1_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "TMS_Operating_Environment.h"
//## package System_Analysis::TMS_Operating_Environment

//## class TempSensor_1
class TempSensor_1 {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTempSensor_1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TempSensor_1(void);
    
    //## auto_generated
    ~TempSensor_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTempSensor_1 : virtual public AOMInstance {
    DECLARE_META(TempSensor_1, OMAnimatedTempSensor_1)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor_1.h
*********************************************************************/
