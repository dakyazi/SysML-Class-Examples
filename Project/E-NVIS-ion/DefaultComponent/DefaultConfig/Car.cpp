/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Car.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Car_Car_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Car
Car::Car(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(Car, Car(), 0, System_Analysis_System_Context_Car_Car_SERIALIZE);
}

Car::~Car(void) {
    NOTIFY_DESTRUCTOR(~Car, true);
    cleanUpRelations();
}

const NVIS* Car::getItsNVIS(void) const {
    return itsNVIS;
}

void Car::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsCar(this);
        }
    _setItsNVIS(p_NVIS);
}

void Car::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const Car* p_Car = itsNVIS->getItsCar();
            if(p_Car != NULL)
                {
                    itsNVIS->__setItsCar(NULL);
                }
            itsNVIS = NULL;
        }
}

void Car::__setItsNVIS(NVIS* const p_NVIS) {
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

void Car::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsCar(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void Car::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCar::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(Car, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedCar)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/
