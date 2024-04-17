/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: USERMODEL
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\USERMODEL.h
*********************************************************************/

#ifndef USERMODEL_H
#define USERMODEL_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## classInstance itsPowerSource
class PowerSource;

//## classInstance itsTMS
class TMS;

//## classInstance itsTempSensor
class TempSensor;

//## package System_Analysis::USERMODEL


//## classInstance itsPowerSource
extern PowerSource itsPowerSource;

//## classInstance itsPowerSource_1
extern PowerSource itsPowerSource_1;

//## classInstance itsTMS
extern TMS itsTMS;

//## classInstance itsTempSensor
extern TempSensor itsTempSensor;

//## auto_generated
void USERMODEL_initRelations(void);

//## auto_generated
bool USERMODEL_startBehavior(void);

//#[ ignore
class USERMODEL_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    USERMODEL_OMInitializer(void);
    
    //## auto_generated
    ~USERMODEL_OMInitializer(void);
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\USERMODEL.h
*********************************************************************/
