/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NVIS_1
//!	Generated Date	: Wed, 24, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NVIS_1.h
*********************************************************************/

#ifndef NVIS_1_H
#define NVIS_1_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "NVIS_Operating_Environment.h"
//## package System_Analysis::NVIS_Operating_Environment

//## class NVIS_1
class NVIS_1 {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNVIS_1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NVIS_1(void);
    
    //## auto_generated
    ~NVIS_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNVIS_1 : virtual public AOMInstance {
    DECLARE_META(NVIS_1, OMAnimatedNVIS_1)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NVIS_1.h
*********************************************************************/
