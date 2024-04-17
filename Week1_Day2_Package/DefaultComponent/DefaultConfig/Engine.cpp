/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Engine
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Engine.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Engine.h"
//#[ ignore
#define Default_Engine_Engine_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Engine
Engine::Engine(void) {
    NOTIFY_CONSTRUCTOR(Engine, Engine(), 0, Default_Engine_Engine_SERIALIZE);
}

Engine::~Engine(void) {
    NOTIFY_DESTRUCTOR(~Engine, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Engine, Default, Default, false, OMAnimatedEngine)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Engine.cpp
*********************************************************************/
