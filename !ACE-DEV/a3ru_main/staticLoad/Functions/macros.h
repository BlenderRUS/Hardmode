#define PROJECT_PREFIX a3ru
#define COMPONENT_NAME StaticLoad
#define COMPONENT_PATH x\a3ru\addons\a3ru_main\StaticLoad
#define QUOTE(VAR1) #VAR1
// COMMON
#define CGVAR(VAR1,VAR2) (missionNameSpace getVariable ['PROJECT_PREFIX##_var_##VAR1',VAR2])
#define CSVAR(VAR1,VAR2) (missionNameSpace setVariable ['PROJECT_PREFIX##_var_##VAR1',VAR2])
// GLOBAL
#define AGVAR(VAR1,VAR2,VAR3) (missionNameSpace getVariable ['PROJECT_PREFIX##_##VAR1##_var_##VAR2',VAR3])
#define ASVAR(VAR1,VAR2,VAR3) (missionNameSpace setVariable ['PROJECT_PREFIX##_##VAR1##_var_##VAR2',VAR3])
#define AFNC(VAR1,VAR2) PROJECT_PREFIX##_##VAR1##_fnc_##VAR2
#define APGVAR(VAR1,VAR2,VAR3) (player getVariable ['PROJECT_PREFIX##_##VAR1####VAR2',VAR3])
#define APSVAR(VAR1,VAR2,VAR3,VAR4) (player setVariable ['PROJECT_PREFIX##_##VAR1####VAR2',VAR3,VAR4])
// LOCAL
#define PATH(VAR1) COMPONENT_PATH\VAR1
#define FNC(VAR1) PROJECT_PREFIX##_##COMPONENT_NAME##_fnc_##VAR1
#define VAR(VAR1) PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR1
#define PGVAR(VAR1,VAR2) (player getVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##VAR1',VAR2])
#define PSVAR(VAR1,VAR2,VAR3) (player setVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##VAR1',VAR2,VAR3])
#define OGVAR(VAR1,VAR2,VAR3) VAR1 getVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR2',VAR3]
#define OSVAR(VAR1,VAR2,VAR3,VAR4) VAR1 setVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR2',VAR3,VAR4]
#define GVAR(VAR1,VAR2) (missionNameSpace getVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR1',VAR2])
#define SVAR(VAR1,VAR2) (missionNameSpace setVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR1',VAR2])
#define UGVAR(VAR1,VAR2) (uiNameSpace getVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR1',VAR2])
#define USVAR(VAR1,VAR2) (uiNameSpace setVariable ['PROJECT_PREFIX##_##COMPONENT_NAME##_var_##VAR1',VAR2])