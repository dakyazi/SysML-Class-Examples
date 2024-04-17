/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CarOccupant
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CarOccupant.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CarOccupant.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_Use_Cases_Temperature_UC_CarOccupant_CarOccupant_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::Use_Cases::Temperature_UC

//## actor CarOccupant
CarOccupant::CarOccupant(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(CarOccupant, CarOccupant(), 0, System_Analysis_Use_Cases_Temperature_UC_CarOccupant_CarOccupant_SERIALIZE);
}

CarOccupant::~CarOccupant(void) {
    NOTIFY_DESTRUCTOR(~CarOccupant, true);
    cleanUpRelations();
}

const TMS* CarOccupant::getItsTMS(void) const {
    return itsTMS;
}

void CarOccupant::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsCarOccupant(this);
        }
    _setItsTMS(p_TMS);
}

void CarOccupant::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const CarOccupant* p_CarOccupant = itsTMS->getItsCarOccupant();
            if(p_CarOccupant != NULL)
                {
                    itsTMS->__setItsCarOccupant(NULL);
                }
            itsTMS = NULL;
        }
}

void CarOccupant::__setItsTMS(TMS* const p_TMS) {
    itsTMS = p_TMS;
    if(p_TMS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTMS", p_TMS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
        }
}

void CarOccupant::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsCarOccupant(NULL);
        }
    __setItsTMS(p_TMS);
}

void CarOccupant::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCarOccupant::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(CarOccupant, System_Analysis_Use_Cases_Temperature_UC, System_Analysis::Use_Cases::Temperature_UC, false, OMAnimatedCarOccupant)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CarOccupant.cpp
*********************************************************************/
