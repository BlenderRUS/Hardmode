
_unit = _this select 0;
_type = _this select 1;

if (local _unit) then{
	_isDisposable = getNumber (configFile >> "CfgWeapons" >> _type >> "rhs_disposable");
	if (_isDisposable == 1) then
	{
		[_unit, _type] spawn
		{
			_unit = _this select 0;
			_type = _this select 1;
			_replacer = format["%1_used",_type];

			//eh fix
			sleep 0.2;

			if (isPlayer _unit) then
			{
				_unit addWeapon _replacer;
				_unit removeWeapon _type;
				_unit selectWeapon _replacer;
			}else{
				sleep 1;
				_emptyTube = createVehicle ["WeaponHolderSimulated", [getPos _unit select 0, getpos _unit select 1, (getpos _unit select 2) + 1], [], 0, "CAN_COLLIDE"];
				_emptyTube addWeaponCargoGlobal [_replacer, 1];
				_unit removeWeapon _type;
			};
		};
	};
};