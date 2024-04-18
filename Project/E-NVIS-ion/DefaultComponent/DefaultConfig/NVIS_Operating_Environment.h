/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NVIS_Operating_Environment
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NVIS_Operating_Environment.h
*********************************************************************/

#ifndef NVIS_Operating_Environment_H
#define NVIS_Operating_Environment_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## classInstance itsAutoLightControlUnit
class AutoLightControlUnit;

//## classInstance itsCentralProcessingUnit
class CentralProcessingUnit;

//## classInstance itsCommunicationSystem
class CommunicationSystem;

//## classInstance itsHeadlights
class Headlights;

//## classInstance itsHighResVideoCam
class HighResVideoCam;

//## classInstance itsInfraredFilter
class InfraredFilter;

//## classInstance itsNVIS
class NVIS;

//## classInstance itsNaturalEnvironment
class NaturalEnvironment;

//## package System_Analysis::NVIS_Operating_Environment


//## classInstance itsAutoLightControlUnit
extern AutoLightControlUnit itsAutoLightControlUnit;

//## classInstance itsCentralProcessingUnit
extern CentralProcessingUnit itsCentralProcessingUnit;

//## classInstance itsCommunicationSystem
extern CommunicationSystem itsCommunicationSystem;

//## classInstance itsHeadlights
extern Headlights itsHeadlights;

//## classInstance itsHighResVideoCam
extern HighResVideoCam itsHighResVideoCam;

//## classInstance itsInfraredFilter
extern InfraredFilter itsInfraredFilter;

//## classInstance itsNVIS
extern NVIS itsNVIS;

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
