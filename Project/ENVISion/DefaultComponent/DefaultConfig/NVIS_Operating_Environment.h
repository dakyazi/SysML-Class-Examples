/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NVIS_Operating_Environment
//!	Generated Date	: Wed, 24, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NVIS_Operating_Environment.h
*********************************************************************/

#ifndef NVIS_Operating_Environment_H
#define NVIS_Operating_Environment_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## classInstance itsCommunicationSystem
class CommunicationSystem;

//## classInstance itsHeadlights
class Headlights;

//## classInstance itsHighResVideoCam
class HighResVideoCam;

//## classInstance itsInfraredFilter
class InfraredFilter;

//## classInstance itsNVIS2
class NVIS;

//## auto_generated
class NVIS_1;

//## classInstance itsNaturalEnvironment
class NaturalEnvironment;

//## package System_Analysis::NVIS_Operating_Environment


//## classInstance itsCommunicationSystem
extern CommunicationSystem itsCommunicationSystem;

//## classInstance itsHeadlights
extern Headlights itsHeadlights;

//## classInstance itsHighResVideoCam
extern HighResVideoCam itsHighResVideoCam;

//## classInstance itsInfraredFilter
extern InfraredFilter itsInfraredFilter;

//## classInstance itsNVIS2
extern NVIS itsNVIS2;

//## classInstance itsNaturalEnvironment
extern NaturalEnvironment itsNaturalEnvironment;

//## auto_generated
void NVIS_Operating_Environment_initRelations(void);

//## auto_generated
bool NVIS_Operating_Environment_startBehavior(void);

//#[ ignore
class NVIS_Operating_Environment_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    NVIS_Operating_Environment_OMInitializer(void);
    
    //## auto_generated
    ~NVIS_Operating_Environment_OMInitializer(void);
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NVIS_Operating_Environment.h
*********************************************************************/
