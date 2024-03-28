/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cloud
//!	Generated Date	: Tue, 26, Mar 2024  
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/

//## auto_generated
#include "Cloud.h"
//## link itsCar
#include "Car.h"
//## package Default

//## class Cloud
Cloud::Cloud(void) : itsCar(NULL) {
}

Cloud::~Cloud(void) {
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
}

void Cloud::_setItsCar(Car* const p_Car) {
    if(itsCar != NULL)
        {
            itsCar->__setItsCloud(NULL);
        }
    __setItsCar(p_Car);
}

void Cloud::_clearItsCar(void) {
    itsCar = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/
