/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## dependency Car
#include "Car.h"
//## link itsCloud
#include "Cloud.h"
//#[ ignore
#define Default_Car_Car_SERIALIZE OM_NO_OP

#define Default_Car_Drive_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Car
Car::Car(void) : itsCloud(NULL) {
    NOTIFY_CONSTRUCTOR(Car, Car(), 0, Default_Car_Car_SERIALIZE);
}

Car::~Car(void) {
    NOTIFY_DESTRUCTOR(~Car, true);
    cleanUpRelations();
}

void Car::Drive(void) {
    NOTIFY_OPERATION(Drive, Drive(), 0, Default_Car_Drive_SERIALIZE);
    //#[ operation Drive()
    //#]
}

const int Car::getSpeed(void) const {
    return Speed;
}

void Car::setSpeed(const int p_Speed) {
    Speed = p_Speed;
}

const Cloud* Car::getItsCloud(void) const {
    return itsCloud;
}

void Car::setItsCloud(Cloud* const p_Cloud) {
    if(p_Cloud != NULL)
        {
            p_Cloud->_setItsCar(this);
        }
    _setItsCloud(p_Cloud);
}

const Engine* Car::getItsEngine(void) const {
    return &itsEngine;
}

void Car::cleanUpRelations(void) {
    if(itsCloud != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCloud");
            const Car* p_Car = itsCloud->getItsCar();
            if(p_Car != NULL)
                {
                    itsCloud->__setItsCar(NULL);
                }
            itsCloud = NULL;
        }
}

void Car::__setItsCloud(Cloud* const p_Cloud) {
    itsCloud = p_Cloud;
    if(p_Cloud != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCloud", p_Cloud, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCloud");
        }
}

void Car::_setItsCloud(Cloud* const p_Cloud) {
    if(itsCloud != NULL)
        {
            itsCloud->__setItsCar(NULL);
        }
    __setItsCloud(p_Cloud);
}

void Car::_clearItsCloud(void) {
    NOTIFY_RELATION_CLEARED("itsCloud");
    itsCloud = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCar::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
}

void OMAnimatedCar::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEngine", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsEngine);
    aomsRelations->addRelation("itsCloud", false, true);
    if(myReal->itsCloud)
        {
            aomsRelations->ADD_ITEM(myReal->itsCloud);
        }
}
//#]

IMPLEMENT_META_P(Car, Default, Default, false, OMAnimatedCar)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/
