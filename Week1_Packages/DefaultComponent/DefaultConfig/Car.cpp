/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Tue, 26, Mar 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/

//## auto_generated
#include "Car.h"
//## link itsCloud
#include "Cloud.h"
//## package Default

//## class Car
Car::Car(void) : itsCloud(NULL) {
}

Car::~Car(void) {
    cleanUpRelations();
}

const int Car::getSpeed(void) const {
    return speed;
}

void Car::setSpeed(const int p_speed) {
    speed = p_speed;
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
}

void Car::_setItsCloud(Cloud* const p_Cloud) {
    if(itsCloud != NULL)
        {
            itsCloud->__setItsCar(NULL);
        }
    __setItsCloud(p_Cloud);
}

void Car::_clearItsCloud(void) {
    itsCloud = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/
