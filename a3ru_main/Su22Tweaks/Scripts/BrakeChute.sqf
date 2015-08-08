_plane = _this select 0;

//Code to run when the plane has slowed enough and is time to disconnect the brake chute
fDeleteChute = {
			_this switchMove 'Closing';
			_this removeAllEventHandlers 'AnimDone';
			sleep 1;
			deleteVehicle _this;
};

//Code to run when the drag-chute has opened
fSlowDown = {
	_paraf = _this select 0;
	_planef = attachedTo _paraf;
	_paraf switchMove 'Fast_Loop';
	_paraf removeAllEventHandlers 'AnimDone';

	_speed = -1.7;
	while {true} do
	{
		_vel = velocity _planef; 
		_dir = direction _planef;
 		_planef setVelocity [ (_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2) ];

		sleep 0.5;

		_detach = false;

		if (speed _planef < 60) then
		{
			_detach = true;
		};
		if (speed _planef > 349) then {
			sleep 2;
			if !(isTouchingGround _planef) then {
				_detach = true;
			};
		};
		if (_detach) exitWith {
			_paraf addEventHandler ['AnimDone', { _this select 0 spawn fDeleteChute; }]; 
			sleep 5;
			_planef setVariable ["BrakeChuteOpened", false, true];
		};
	};
};

sleep 1;

//Create the brake chute
sleep 2;
if (isTouchingGround _plane) then {
	if !(_plane getVariable ["BrakeChuteOpened", false]) then {
		_plane setVariable ["BrakeChuteOpened", true, true];
		_para = CREATEGROUP EAST createUnit ['TCP_Su22_BrakeChute', [0, 0, 0], [], 0, 'NONE'];

		//Add an event handler to trigger when the chute-opening animation is finished
		_para addEventHandler ['AnimDone', { [_this select 0] spawn fSlowDown; }];

		//attach chute to plane
		_para attachTo [_plane, [0, -8.6, 0.3]];
		//Play the chute-opening animation
		_para switchMove 'Opening';

		//Show canopy, ropes and cable as they come out
		sleep 0.1;
		_para setobjecttexture [0, 'tcp_su22\BrakeChute\BrakeChute_co.paa'];
		sleep 0.3;
		_para setobjecttexture [1, 'tcp_su22\BrakeChute\BrakeChute_co.paa'];
		sleep 0.3;
		_para setobjecttexture [2, 'tcp_su22\BrakeChute\BrakeChute_co.paa'];
	};
};