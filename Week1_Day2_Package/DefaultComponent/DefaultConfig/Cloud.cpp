/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cloud
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cloud.h"
//## link itsCar
#include "Car.h"
//#[ ignore
#define Default_Cloud_Cloud_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Cloud
Cloud::Cloud(void) : itsCar(NULL) {
    NOTIFY_CONSTRUCTOR(Cloud, Cloud(), 0, Default_Cloud_Cloud_SERIALIZE);
}

Cloud::~Cloud(void) {
    NOTIFY_DESTRUCTOR(~Cloud, true);
    cleanUpRelations();
}

const Car* Cloud::getItsCar(void) const {
    return itsCar;
}

void Cloud::setItsCar(Car* const p_Car) {
    if(p_Car != NULL)
        {
            p_Car->_setItsCloud(this);
        }
    _setItsCar(p_Car);
}

void Cloud::cleanUpRelations(void) {
    if(itsCar != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCar");
            const Cloud* p_Cloud = itsCar->getItsCloud();
            if(p_Cloud != NULL)
                {
                    itsCar->__setItsCloud(NULL);
                }
            itsCar = NULL;
        }
}

void Cloud::__setItsCar(Car* const p_Car) {
    itsCar = p_Car;
    if(p_Car != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCar", p_Car, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCar");
        }
}

void Cloud::_setItsCar(Car* const p_Car) {
    if(itsCar != NULL)
        {
            itsCar->__setItsCloud(NULL);
        }
    __setItsCar(p_Car);
}

void Cloud::_clearItsCar(void) {
    NOTIFY_RELATION_CLEARED("itsCar");
    itsCar = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCloud::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCar", false, true);
    if(myReal->itsCar)
        {
            aomsRelations->ADD_ITEM(myReal->itsCar);
        }
}
//#]

IMPLEMENT_META_P(Cloud, Default, Default, false, OMAnimatedCloud)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/
