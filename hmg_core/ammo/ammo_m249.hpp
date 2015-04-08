	class 30Rnd_556x45_Stanag;
	class rhsusf_200Rnd_556x45_soft_pouch : 30Rnd_556x45_Stanag {
		ammo = "B_556x45_Ball_Tracer_Red";
		count = 200;
		author = $STR_RHS_AUTHOR_FULL;
		displayName = "200Rnd Belt Mag (5.56x45)";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m245_ca.paa";
		descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200<br />Used in: M249";
		
		class Library {
			libTextDesc = "100rnd M249 soft pouch magazine.";
		};
		mass = 76;
		tracersEvery = 4;
		lastRoundsTracer = 10;
	};