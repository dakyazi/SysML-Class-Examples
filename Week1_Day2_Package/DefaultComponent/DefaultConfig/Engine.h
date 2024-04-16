/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Engine
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Engine.h
*********************************************************************/

#ifndef Engine_H
#define Engine_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Engine
class Engine {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEngine;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Engine(void);
    
    //## auto_generated
    ~Engine(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEngine : virtual public AOMInstance {
    DECLARE_META(Engine, OMAnimatedEngine)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Engine.h
*********************************************************************/
