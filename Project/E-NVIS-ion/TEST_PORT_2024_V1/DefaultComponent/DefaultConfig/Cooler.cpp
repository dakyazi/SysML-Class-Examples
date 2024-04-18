/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cooler
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Cooler.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cooler.h"
//#[ ignore
#define Logical_Architecture_Cooler_Cooler_SERIALIZE OM_NO_OP

#define Logical_Architecture_Cooler_startCooler_SERIALIZE OM_NO_OP
//#]

//## package Logical_Architecture

//## class Cooler
//#[ ignore
Cooler::p_Cooler_C::p_Cooler_C(void) : IB_Cooler(), _p_(0), itsIB_Cooler(NULL) {
}

Cooler::p_Cooler_C::~p_Cooler_C(void) {
    cleanUpRelations();
}

void Cooler::p_Cooler_C::connectCooler(Cooler* part) {
    setItsIB_Cooler(part);
    
}

IB_Cooler* Cooler::p_Cooler_C::getItsIB_Cooler(void) {
    return this;
}

void Cooler::p_Cooler_C::startCooler(void) {
    
    if (itsIB_Cooler != NULL) {
        itsIB_Cooler->startCooler();
    }
    
}

void Cooler::p_Cooler_C::setItsIB_Cooler(IB_Cooler* const p_IB_Cooler) {
    itsIB_Cooler = p_IB_Cooler;
}

void Cooler::p_Cooler_C::cleanUpRelations(void) {
    if(itsIB_Cooler != NULL)
        {
            itsIB_Cooler = NULL;
        }
}
//#]

Cooler::Cooler(void) : IB_Cooler() {
    NOTIFY_CONSTRUCTOR(Cooler, Cooler(), 0, Logical_Architecture_Cooler_Cooler_SERIALIZE);
    initRelations();
}

Cooler::~Cooler(void) {
    NOTIFY_DESTRUCTOR(~Cooler, false);
}

void Cooler::startCooler(void) {
    NOTIFY_OPERATION(startCooler, startCooler(), 0, Logical_Architecture_Cooler_startCooler_SERIALIZE);
    //#[ operation startCooler()
    std::cout<<"Cooler start\n";
    //#]
}

Cooler::p_Cooler_C* Cooler::getP_Cooler(void) const {
    return (Cooler::p_Cooler_C*) &p_Cooler;
}

Cooler::p_Cooler_C* Cooler::get_p_Cooler(void) const {
    return (Cooler::p_Cooler_C*) &p_Cooler;
}

void Cooler::initRelations(void) {
    if (get_p_Cooler() != NULL) {
        get_p_Cooler()->connectCooler(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCooler::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedIB_Cooler::serializeAttributes(aomsAttributes);
}

void OMAnimatedCooler::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedIB_Cooler::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Cooler, Logical_Architecture, false, IB_Cooler, OMAnimatedIB_Cooler, OMAnimatedCooler)

OMINIT_SUPERCLASS(IB_Cooler, OMAnimatedIB_Cooler)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cooler.cpp
*********************************************************************/
