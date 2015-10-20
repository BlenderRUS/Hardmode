class CfgPatches{
  class AGM_Artillery  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.6;
    //Wind for air density/temp, Vector for the assets (scope view and digital numbers)
    requiredAddons[] = {"ACE_Common","ACE_Vector"};
    version = "0.95";
    versionStr = "0.95";
    versionAr[] = {0,95,0};
    author[] = {"Pabst Mirror"};
  };
};

class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class RscText;
class RscObject;
class RscPicture;
class RscStructuredText;
class RscMapControl;
class RscListbox;
class RscListNBox;
class RscFrame;
class RscEdit;
class RscButton;
class ScrollBar;
class RscActiveText;
class RCWSOptics;

class CfgFunctions {
  class AGM_Artillery {
    class AGM_Artillery {
      file = "\x\a3ru\addons\AGM_Artillery\functions";
      class createFiringSolution;
      class dev_buildTable;
      class firedEH;
      class formatNumber;
      class getPosFromMapCords;
      class mapCompEventClickOnMap;
      class mapCompEventDrawMap;
      class mapCompEventEnterCords;
      class mapCompOpen;
      class onHudLoad;
      class rangerFinderStart;
      class rangeTableOpen;
      class rangeTablePageChange;
      class rangeTablePreCalculatedValues;
      class simulateCalcRangeTableLine;
      class simulateFindSolution;
      class simulateShot;
    };
  };
};

#include "gui_mortarHud.hpp"

