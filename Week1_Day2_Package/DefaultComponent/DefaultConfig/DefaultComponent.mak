
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Car.obj \
  Engine.obj \
  Cloud.obj \
  TMS.obj \
  Stakeholder.obj \
  Standard.obj \
  NaturalEnvironment.obj \
  Constraints.obj \
  CommunicationSystem.obj \
  HeatingSystem.obj \
  CoolingSystem.obj \
  PresenceSensor.obj \
  TempSensor.obj \
  PowerSource.obj \
  TempSensor_1.obj \
  TMS_1.obj \
  CarOccupant.obj \
  Default.obj \
  System_Context.obj \
  TMS_Operating_Environment.obj \
  Temperature_UC.obj \
  USERMODEL.obj \
  ProxyPortInterfaces.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Car.obj : Car.cpp Car.h    Default.h Engine.h Cloud.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Car.obj" "Car.cpp" 



Engine.obj : Engine.cpp Engine.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Engine.obj" "Engine.cpp" 



Cloud.obj : Cloud.cpp Cloud.h    Default.h Car.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Cloud.obj" "Cloud.cpp" 



TMS.obj : TMS.cpp TMS.h    System_Context.h Stakeholder.h Standard.h NaturalEnvironment.h Constraints.h CommunicationSystem.h HeatingSystem.h CoolingSystem.h TempSensor.h PresenceSensor.h CarOccupant.h PowerSource.h int_setTmpMax_ProxyFlowPropertyInterface.h int_setTmpMin_ProxyFlowPropertyInterface.h int_voltage_ProxyFlowPropertyInterface.h int_currentTmp_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TMS.obj" "TMS.cpp" 



Stakeholder.obj : Stakeholder.cpp Stakeholder.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Stakeholder.obj" "Stakeholder.cpp" 



Standard.obj : Standard.cpp Standard.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Standard.obj" "Standard.cpp" 



NaturalEnvironment.obj : NaturalEnvironment.cpp NaturalEnvironment.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NaturalEnvironment.obj" "NaturalEnvironment.cpp" 



Constraints.obj : Constraints.cpp Constraints.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Constraints.obj" "Constraints.cpp" 



CommunicationSystem.obj : CommunicationSystem.cpp CommunicationSystem.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationSystem.obj" "CommunicationSystem.cpp" 



HeatingSystem.obj : HeatingSystem.cpp HeatingSystem.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HeatingSystem.obj" "HeatingSystem.cpp" 



CoolingSystem.obj : CoolingSystem.cpp CoolingSystem.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CoolingSystem.obj" "CoolingSystem.cpp" 



PresenceSensor.obj : PresenceSensor.cpp PresenceSensor.h    System_Context.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PresenceSensor.obj" "PresenceSensor.cpp" 



TempSensor.obj : TempSensor.cpp TempSensor.h    System_Context.h TMS.h int_currentTmp_ProxyFlowPropertyInterface.h int_setTmpMax_ProxyFlowPropertyInterface.h int_setTmpMin_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TempSensor.obj" "TempSensor.cpp" 



PowerSource.obj : PowerSource.cpp PowerSource.h    System_Context.h TMS.h int_voltage_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PowerSource.obj" "PowerSource.cpp" 



TempSensor_1.obj : TempSensor_1.cpp TempSensor_1.h    TMS_Operating_Environment.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TempSensor_1.obj" "TempSensor_1.cpp" 



TMS_1.obj : TMS_1.cpp TMS_1.h    TMS_Operating_Environment.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TMS_1.obj" "TMS_1.cpp" 



CarOccupant.obj : CarOccupant.cpp CarOccupant.h    Temperature_UC.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CarOccupant.obj" "CarOccupant.cpp" 



Default.obj : Default.cpp Default.h    Car.h Engine.h Cloud.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 



System_Context.obj : System_Context.cpp System_Context.h    TMS.h Stakeholder.h Standard.h NaturalEnvironment.h Constraints.h CommunicationSystem.h HeatingSystem.h CoolingSystem.h PresenceSensor.h TempSensor.h PowerSource.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"System_Context.obj" "System_Context.cpp" 



TMS_Operating_Environment.obj : TMS_Operating_Environment.cpp TMS_Operating_Environment.h    TempSensor_1.h TMS_1.h CommunicationSystem.h HeatingSystem.h CoolingSystem.h TempSensor.h PresenceSensor.h NaturalEnvironment.h TMS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TMS_Operating_Environment.obj" "TMS_Operating_Environment.cpp" 



Temperature_UC.obj : Temperature_UC.cpp Temperature_UC.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Temperature_UC.obj" "Temperature_UC.cpp" 



USERMODEL.obj : USERMODEL.cpp USERMODEL.h    PowerSource.h TMS.h TempSensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"USERMODEL.obj" "USERMODEL.cpp" 



ProxyPortInterfaces.obj : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    int_voltage_ProxyFlowPropertyInterface.h int_currentTmp_ProxyFlowPropertyInterface.h int_setTmpMax_ProxyFlowPropertyInterface.h int_setTmpMin_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ProxyPortInterfaces.obj" "ProxyPortInterfaces.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Car.obj erase Car.obj
	if exist Engine.obj erase Engine.obj
	if exist Cloud.obj erase Cloud.obj
	if exist TMS.obj erase TMS.obj
	if exist Stakeholder.obj erase Stakeholder.obj
	if exist Standard.obj erase Standard.obj
	if exist NaturalEnvironment.obj erase NaturalEnvironment.obj
	if exist Constraints.obj erase Constraints.obj
	if exist CommunicationSystem.obj erase CommunicationSystem.obj
	if exist HeatingSystem.obj erase HeatingSystem.obj
	if exist CoolingSystem.obj erase CoolingSystem.obj
	if exist PresenceSensor.obj erase PresenceSensor.obj
	if exist TempSensor.obj erase TempSensor.obj
	if exist PowerSource.obj erase PowerSource.obj
	if exist TempSensor_1.obj erase TempSensor_1.obj
	if exist TMS_1.obj erase TMS_1.obj
	if exist CarOccupant.obj erase CarOccupant.obj
	if exist Default.obj erase Default.obj
	if exist System_Context.obj erase System_Context.obj
	if exist TMS_Operating_Environment.obj erase TMS_Operating_Environment.obj
	if exist Temperature_UC.obj erase Temperature_UC.obj
	if exist USERMODEL.obj erase USERMODEL.obj
	if exist ProxyPortInterfaces.obj erase ProxyPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
