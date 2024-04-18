/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitoringScreen
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\MonitoringScreen.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MonitoringScreen.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_MonitoringScreen_MonitoringScreen_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class MonitoringScreen
MonitoringScreen::MonitoringScreen(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(MonitoringScreen, MonitoringScreen(), 0, System_Analysis_System_Context_MonitoringScreen_MonitoringScreen_SERIALIZE);
}

MonitoringScreen::~MonitoringScreen(void) {
    NOTIFY_DESTRUCTOR(~MonitoringScreen, true);
    cleanUpRelations();
}

const NVIS* MonitoringScreen::getItsNVIS(void) const {
    return itsNVIS;
}

void MonitoringScreen::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsMonitoringScreen(this);
        }
    _setItsNVIS(p_NVIS);
}

void MonitoringScreen::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const MonitoringScreen* p_MonitoringScreen = itsNVIS->getItsMonitoringScreen();
            if(p_MonitoringScreen != NULL)
                {
                    itsNVIS->__setItsMonitoringScreen(NULL);
                }
            itsNVIS = NULL;
        }
}

void MonitoringScreen::__setItsNVIS(NVIS* const p_NVIS) {
    itsNVIS = p_NVIS;
    if(p_NVIS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNVIS", p_NVIS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
        }
}

void MonitoringScreen::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsMonitoringScreen(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void MonitoringScreen::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMonitoringScreen::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(MonitoringScreen, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedMonitoringScreen)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitoringScreen.cpp
*********************************************************************/
