uiNameSpace setVariable ["RDS_t55_Ctrl",_this select 0];


[] spawn {
	private["_v","_t","_c"];
	disableSerialization;
	_c = (uiNamespace getVariable "RDS_t55_Ctrl" displayCtrl 1);
	_v = vehicle player;
	while{(player==gunner _v OR player==driver _v)}do{
		waitUntil {sleep 0.01;inputAction "ZeroingUp">0 OR inputAction "ZeroingDown">0 OR (player!=gunner _v AND player!=driver _v)};
		_t=(ctrLPosition _c) select 1;
		if(inputAction "ZeroingUp">0 AND _t<=(15.96 *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.003];
		};
		if(inputAction "ZeroingDown">0 AND _t>(-0.0455 *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t-0.003];
		};
		_c ctrlCommit 0.005;
		sleep 0.02;
	};
};

[] spawn {
	disableSerialization;
	private["_v","_c","_c2","_c3","_r","_b"];

	_v = vehicle player;
	_c=(uiNamespace getVariable "RDS_t55_Ctrl" displayCtrl 180);
	_c2=(uiNamespace getVariable "RDS_t55_Ctrl" displayCtrl 1);
	_c3=(uiNamespace getVariable "RDS_t55_Ctrl" displayCtrl 2);

	_b=true;
	while{(player==gunner _v OR player==driver _v)}do{
		_h=parseNumber (ctrlText _c);
		waitUntil {sleep 0.1;(parseNumber (ctrlText _c))!=_h};
		if(player == gunner _v)then
		{
			switch(parseNumber (ctrlText _c))do
			{

				case 2.5:
				{
						_c1=(ctrlPosition _c2) select 1;
						if(ctrlText _c2  == "")then{_c2 ctrlSetText "RDS_Tank\t55\data\t55_gun_cross.paa";_c3 ctrlSetText "RDS_Tank\T55\data\sightBar.paa";};
						if(not(_b))then{
							_r1=((_c1- ((9.035*(0.025*SafezoneH)))   )*100 )/ ((17.75* (0.025*SafezoneH))-(9.035*(0.025*SafezoneH))) ;
							_r=(_r1*(( (14.95* (0.025*SafezoneH))+0.005 )/100))-0.005;
							_c2 ctrlSetPosition [14.95 *   (0.01875 * Safezoneh), _r,25.5 *   (0.01875 * SafezoneH),25.5 *   (0.025 * SafezoneH) ];
							_c3 ctrlSetPosition [10 *   (0.01875 *   Safezoneh),4.56*   (0.025 * SafezoneH),35.5 *   (0.01875 * SafezoneH),25.5 *   (0.025 * SafezoneH)];
							_b=true;
							_c2 ctrlCommit 0;
							_c3 ctrlCommit 0;
						};

				};
				case 1.3:
				{
						_c1=(ctrlPosition _c2) select 1;
						if(ctrlText _c2  == "")then{_c2 ctrlSetText "RDS_Tank\t55\data\t55_gun_cross.paa";_c3 ctrlSetText "RDS_Tank\T55\data\sightBar.paa";};
						if(_b)then{

							_r1=((_c1+0.005)*100)/( (14.95* (0.025*SafezoneH))+0.005 );
							_r=(_r1*( (17.75* (0.025*SafezoneH))-(9.0355*(0.025*SafezoneH)) )/100)+((9.0355*(0.025*SafezoneH)) );
							_c2 ctrlSetPosition [20.22 *   (0.01875 * Safezoneh), _r,14 *   (0.01875 * SafezoneH),14 *   (0.025 * SafezoneH) ];
							_c3 ctrlSetPosition [20.45 *   (0.01875 *   Safezoneh),12.1555*   (0.025 * SafezoneH),12.75 *   (0.01875 * SafezoneH),12.75 *   (0.025 * SafezoneH)];
							_b=false;
							_c2 ctrlCommit 0;
							_c3 ctrlCommit 0;
						};
				};

				default
				{
						if((ctrlText _c2) != "")then{_c2 ctrlSetText "";_c3 ctrlSetText ""};
				};

			};
		};
	};

};