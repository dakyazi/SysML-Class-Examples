/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSource
//!	Generated Date	: Tue, 16, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PowerSource.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_PowerSource_PowerSource_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_indicateSystemFault_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_indicateSystemReady_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_runSystemTest_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_switchLightOff_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_switchLightOn_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class PowerSource
//#[ ignore
PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_0InActivityACT_POWERSOURCEOfPowerSource::ActionAction_0InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_0InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_0InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_0InActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_0InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_1InActivityACT_POWERSOURCEOfPowerSource::ActionAction_1InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_1InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_1InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_1InActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_1InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource::ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, IOxfEvent::ID eventId, PowerSource& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource::ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource::ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, IOxfEvent::ID eventId, PowerSource& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_8InActivityACT_POWERSOURCEOfPowerSource::ActionAction_8InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_8InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_8InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAction_8InActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_8InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource::ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, IOxfEvent::ID eventId, PowerSource& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource::ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, int duration, PowerSource& context) : OMTimeEventAction(id, activity, duration), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource::ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMSendEventAction(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource();
}

void PowerSource::ACT_POWERSOURCEOfPowerSource::ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource::sendEvent(void) {
    mContext->delegatedSendEventFromActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource::ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMDecisionNode(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource::ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMMergeNode(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource::ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context) : OMMergeNode(id, activity), mContext(&context) {
}

OMList<OMString> PowerSource::ACT_POWERSOURCEOfPowerSource::ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource();
}

PowerSource::ACT_POWERSOURCEOfPowerSource::ACT_POWERSOURCEOfPowerSource(PowerSource& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAction_0InActivityACT_POWERSOURCEOfPowerSource* varAction_0 = new ActionAction_0InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.action_0", *this, *mContext);
    ActionAction_1InActivityACT_POWERSOURCEOfPowerSource* varAction_1 = new ActionAction_1InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.action_1", *this, *mContext);
    ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource* varCheckingSystemStatus = new ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.CheckingSystemStatus", *this, *mContext);
    ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource* varAccepteventaction_4 = new ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.accepteventaction_4", *this, reqPowerOn_System_Context_System_Analysis_id, *mContext);
    ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource* varCalloperation_5 = new ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.calloperation_5", *this, *mContext);
    ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource* varCalloperation_6 = new ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.calloperation_6", *this, *mContext);
    ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource* varAccepteventaction_7 = new ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.accepteventaction_7", *this, reqPowerOff_System_Context_System_Analysis_id, *mContext);
    ActionAction_8InActivityACT_POWERSOURCEOfPowerSource* varAction_8 = new ActionAction_8InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.action_8", *this, *mContext);
    ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource* varCalloperation_9 = new ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.calloperation_9", *this, *mContext);
    ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource* varAccepteventaction_10 = new ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.accepteventaction_10", *this, evFaultCleared_System_Context_System_Analysis_id, *mContext);
    ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource* varAccepttimeevent_11 = new ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.accepttimeevent_11", *this, 3000, *mContext);
    ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource* varSendaction_12 = new ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.sendaction_12", *this, *mContext);
    ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource* varDecisionnode_7 = new ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.decisionnode_7", *this, *mContext);
    ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource* varMergenode_24 = new ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.mergenode_24", *this, *mContext);
    ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource* varMergenode_33 = new ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource("ACT_POWERSOURCE:ROOT.mergenode_33", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("ACT_POWERSOURCE:0", *this);
    
    // Setup flows
    new OMControlFlow("ACT_POWERSOURCE:0", *this, *varInitialNode0, *varMergenode_24);
    new OMControlFlow("ACT_POWERSOURCE:1", *this, *varAccepteventaction_4, *varCheckingSystemStatus);
    new OMControlFlow("ACT_POWERSOURCE:2", *this, *varCheckingSystemStatus, *varDecisionnode_7);
    new OMControlFlow("ACT_POWERSOURCE:3", *this, *varDecisionnode_7, *varCalloperation_5);
    new OMControlFlow("ACT_POWERSOURCE:4", *this, *varCalloperation_5, *varCalloperation_6);
    new OMControlFlow("ACT_POWERSOURCE:5", *this, *varCalloperation_6, *varAction_1);
    new OMControlFlow("ACT_POWERSOURCE:6", *this, *varAction_1, *varAccepteventaction_7);
    new OMControlFlow("ACT_POWERSOURCE:7", *this, *varAccepteventaction_7, *varMergenode_33);
    new OMControlFlow("ACT_POWERSOURCE:8", *this, *varDecisionnode_7, *varAction_8);
    new OMControlFlow("ACT_POWERSOURCE:9", *this, *varAction_8, *varCalloperation_9);
    new OMControlFlow("ACT_POWERSOURCE:10", *this, *varAction_0, *varAccepteventaction_4);
    new OMControlFlow("ACT_POWERSOURCE:11", *this, *varMergenode_24, *varAction_0);
    new OMControlFlow("ACT_POWERSOURCE:12", *this, *varCalloperation_9, *varAccepteventaction_10);
    new OMControlFlow("ACT_POWERSOURCE:13", *this, *varAccepteventaction_10, *varMergenode_24);
    new OMControlFlow("ACT_POWERSOURCE:14", *this, *varAction_1, *varAccepttimeevent_11);
    new OMControlFlow("ACT_POWERSOURCE:15", *this, *varAccepttimeevent_11, *varSendaction_12);
    new OMControlFlow("ACT_POWERSOURCE:16", *this, *varMergenode_33, *varMergenode_24);
    new OMControlFlow("ACT_POWERSOURCE:17", *this, *varSendaction_12, *varMergenode_33);
}
//#]

PowerSource::PowerSource(void) : systemOk(true), itsTMS(NULL) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(PowerSource, PowerSource(), 0, System_Analysis_System_Context_PowerSource_PowerSource_SERIALIZE);
}

PowerSource::~PowerSource(void) {
    NOTIFY_DESTRUCTOR(~PowerSource, true);
    cleanUpRelations();
}

void PowerSource::indicateSystemFault(void) {
    NOTIFY_OPERATION(indicateSystemFault, indicateSystemFault(), 0, System_Analysis_System_Context_PowerSource_indicateSystemFault_SERIALIZE);
    //#[ operation indicateSystemFault()
    std::cout<<"System is faulty\n";
    //#]
}

void PowerSource::indicateSystemReady(void) {
    NOTIFY_OPERATION(indicateSystemReady, indicateSystemReady(), 0, System_Analysis_System_Context_PowerSource_indicateSystemReady_SERIALIZE);
    //#[ operation indicateSystemReady()
    std::cout<<"System is ready\n";
    //#]
}

void PowerSource::runSystemTest(void) {
    NOTIFY_OPERATION(runSystemTest, runSystemTest(), 0, System_Analysis_System_Context_PowerSource_runSystemTest_SERIALIZE);
    //#[ operation runSystemTest()
    std::cout<<"Test the power source\n";
    systemOk = true;
    std::cout<<"Test passed\n";
    //#]
}

void PowerSource::switchLightOff(void) {
    NOTIFY_OPERATION(switchLightOff, switchLightOff(), 0, System_Analysis_System_Context_PowerSource_switchLightOff_SERIALIZE);
    //#[ operation switchLightOff()
    std::cout<<"Light Switch Off\n";
    //#]
}

void PowerSource::switchLightOn(void) {
    NOTIFY_OPERATION(switchLightOn, switchLightOn(), 0, System_Analysis_System_Context_PowerSource_switchLightOn_SERIALIZE);
    //#[ operation switchLightOn()
    std::cout<<"Light Switch On\n";
    //#]
}

//#[ ignore
OMActivity* PowerSource::createMainActivity(void) {
    return new ACT_POWERSOURCEOfPowerSource(*this);
}

void* PowerSource::getMe(void) {
    return this;
}
//#]

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAction_0InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.action_0
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:10");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionAction_0InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.action_0
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAction_1InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.action_1
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:6");
    ans.add("ACT_POWERSOURCE:14");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionAction_1InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.action_1
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.CheckingSystemStatus
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:2");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.CheckingSystemStatus
    runSystemTest();
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepteventaction_4
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:1");
    return ans;
    //#]
}

void PowerSource::delegatedAcceptEventDataFromActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepteventaction_4
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.calloperation_5
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:4");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.calloperation_5
    switchLightOn();
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.calloperation_6
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:5");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.calloperation_6
    indicateSystemReady();
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepteventaction_7
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:7");
    return ans;
    //#]
}

void PowerSource::delegatedAcceptEventDataFromActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepteventaction_7
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAction_8InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.action_8
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:9");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionAction_8InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.action_8
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.calloperation_9
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:12");
    return ans;
    //#]
}

void PowerSource::delegatedInvokeContextMethodFromActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.calloperation_9
    indicateSystemFault();
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepteventaction_10
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:13");
    return ans;
    //#]
}

void PowerSource::delegatedAcceptEventDataFromActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepteventaction_10
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.accepttimeevent_11
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:15");
    return ans;
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.sendaction_12
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:17");
    return ans;
    //#]
}

void PowerSource::delegatedSendEventFromActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_action ACT_POWERSOURCE:ROOT.sendaction_12
    GEN(reqPowerOff);
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_control ACT_POWERSOURCE:ROOT.decisionnode_7
    OMList<OMString> ans;
    if (systemOk) { ans.add("ACT_POWERSOURCE:3"); }
    else { ans.add("ACT_POWERSOURCE:8"); }
    return ans;
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_control ACT_POWERSOURCE:ROOT.mergenode_24
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:11");
    return ans;
    //#]
}

OMList<OMString> PowerSource::delegatedFilterPassableFlowsFromControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource(void) {
    //#[ activity_control ACT_POWERSOURCE:ROOT.mergenode_33
    OMList<OMString> ans;
    ans.add("ACT_POWERSOURCE:16");
    return ans;
    //#]
}

const bool PowerSource::getSystemOk(void) const {
    return systemOk;
}

void PowerSource::setSystemOk(const bool p_systemOk) {
    systemOk = p_systemOk;
}

const TMS* PowerSource::getItsTMS(void) const {
    return itsTMS;
}

void PowerSource::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsPowerSource(this);
        }
    _setItsTMS(p_TMS);
}

bool PowerSource::startBehavior(void) {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void PowerSource::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const PowerSource* p_PowerSource = itsTMS->getItsPowerSource();
            if(p_PowerSource != NULL)
                {
                    itsTMS->__setItsPowerSource(NULL);
                }
            itsTMS = NULL;
        }
}

void PowerSource::__setItsTMS(TMS* const p_TMS) {
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

void PowerSource::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsPowerSource(NULL);
        }
    __setItsTMS(p_TMS);
}

void PowerSource::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPowerSource::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("systemOk", x2String(myReal->systemOk));
}

void OMAnimatedPowerSource::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(PowerSource, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedPowerSource)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/
