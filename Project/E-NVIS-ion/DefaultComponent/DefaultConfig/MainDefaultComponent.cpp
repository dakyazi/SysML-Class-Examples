/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "NVIS_Operating_Environment.h"
//## auto_generated
#include "NVIS_Use_Case.h"
//## auto_generated
#include "System_Context.h"
//## auto_generated
#include "User_Models.h"
DefaultComponent::DefaultComponent(void) {
    NVIS_Operating_Environment_initRelations();
    User_Models_initRelations();
    (void) NVIS_Operating_Environment_startBehavior();
    (void) User_Models_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                DefaultComponent initializer_DefaultComponent;
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
