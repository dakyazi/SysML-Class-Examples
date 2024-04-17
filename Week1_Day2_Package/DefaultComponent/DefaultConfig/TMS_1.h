/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS_1
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TMS_1.h
*********************************************************************/

#ifndef TMS_1_H
#define TMS_1_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "TMS_Operating_Environment.h"
//## package System_Analysis::TMS_Operating_Environment

//## class TMS_1
class TMS_1 {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTMS_1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TMS_1(void);
    
    //## auto_generated
    ~TMS_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTMS_1 : virtual public AOMInstance {
    DECLARE_META(TMS_1, OMAnimatedTMS_1)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS_1.h
*********************************************************************/
