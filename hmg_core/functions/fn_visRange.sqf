_this spawn {
private ["_this","_unit","_weaponMaxRangeView","_sightMaxRangeView","_cur_zoom"];
//hint format ["%1", player];
KK_fnc_getZoom = {
    (
        [0.5,0.5] 
        distance 
        worldToScreen 
        positionCameraToWorld 
        [0,1.05,1]
    ) * (
        getResolution 
        select 
        5
    )
};
while {(alive player)} 
		do {
			sleep 1;
			_weaponMaxRangeView = getNumber (ConfigFile >> "CfgWeapons" >> (currentWeapon player) >> "distanceZoomMax");
			_sightMaxRangeView = getNumber (ConfigFile >> "CfgWeapons" >> (primaryWeaponItems player select 2) >> "distanceZoomMax");
			// если мы человек и не смотрим в прицел - 1500 метров
			if ((vehicle player iskindof "CAManBase") and !(cameraviwew == "GUNNER") then {
				setViewDistance 1500;
				};
			// если мы человек, смотрим в прицел без кратности и без ТВП - 1500 метров
			if ((vehicle player iskindof "CAManBase") and (currentVisionMode player == 0) and (cameraviwew == "GUNNER") and ((round (call KK_fnc_getZoom * 10) / 10) < 2)) then {
				setViewDistance 1500;
				//ждем пока перестанем смотреть в прицел, или включим ТВП или увеличим кратность
				waituntil {!(currentVisionMode == 0) or !(cameraviwew == "GUNNER") or ((round (call KK_fnc_getZoom * 10) / 10;) > 1.9)};
				};
			// если мы человек смотрим в прицел без ТВП и кратность больше 1.9 максимальная дальность прицела, но не меньше 1500
			if ((vehicle player iskindof "CAManBase") and (currentVisionMode player == 0) and (cameraviwew == "GUNNER") and ((round (call KK_fnc_getZoom * 10) / 10;) > 1.9)) then {
				// получаем максимальную дальность оружия и прицела
				_weaponMaxRangeView = getNumber (ConfigFile >> "CfgWeapons" >> (currentWeapon player) >> "distanceZoomMax");
				_sightMaxRangeView = getNumber (ConfigFile >> "CfgWeapons" >> (primaryWeaponItems player select 2) >> "distanceZoomMax");
				// если дальности меньше 1500 ставим 1500
				if (_weaponMaxRangeView < 1500 or _sightMaxRangeView < 1500) then {_weaponMaxRangeView = 1500; _sightMaxRangeView = 1500;}
				//если мы в оптическом прицеле берем максимальную дальность прицела, если нет (бинокли/дальномеры) берем дальность оружия
				if (primaryWeaponItems player select 2) then { setViewDistance _sightMaxRangeView; } else
				{ setViewDistance _weaponMaxRangeView};
				//ждем пока перестанем смотреть в прицел, или включим ТВП или увеличим кратность
				waituntil {!(currentVisionMode == 0) or !(cameraviwew == "GUNNER")};
			};
			// если мы человек смотрим в прицел и включен ТВП и кратность выше 1.9 - дальность режем до 500
			if ((vehicle player iskindof "CAManBase") and (currentVisionMode player == 2) and (cameraviwew == "GUNNER") and ((round (call KK_fnc_getZoom * 10) / 10;) > 1.9) > 1.9)) then {
				setViewDistance 500;
			};
			// если мы сидим в технике дальность 4500
			if (!(vehicle player iskindof "CAManBase") and (cameraviwew == "GUNNER")) then {
				setViewDistance 4500;
				waituntil {vehicle player iskindof "CAManBase"};
				};
		};
};
/*
			if (vehicle player iskindof "Man") then {
				setViewDistance 1500;
				waituntil {(currentVisionMode player) == 2};
					if (!(vehicle player iskindof "Man")) then {
						setViewDistance 4500; 
						//hint "Ti";
					} else {
						setViewDistance 500; 
						// hint "Ti";				
						};
				waituntil {!((currentVisionMode player) == 2)};
					if (!(vehicle player iskindof "Man")) then {
						setViewDistance 4500; 
						//hint "NonTi";
					} else {
						setViewDistance 1500; 
						//hint "NonTi";					
						};
			} else { 
				setViewDistance 4500; 
				waituntil {(vehicle player iskindof "Man")};
			};
		};

};*/