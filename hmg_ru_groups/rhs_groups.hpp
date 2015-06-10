class CfgGroups
{
	class East
	{
		class group_ru_msv_1985_omsb_f
		{
			name = "HMG ОМСП 1985";
			#include "groups\omsb_1985.hpp"
			#include "groups\omsb_1985_bmp.hpp"
			#include "groups\omsb_1985_minbatr.hpp"
		};
		class group_ru_msv_1995_omsb_f
		{
			name = "HMG ОМСП 1995";
			#include "groups\omsb_1995.hpp"
			#include "groups\omsb_1995_bmp.hpp"
			#include "groups\omsb_1995_minbatr.hpp"
			#include "groups\omsb_1995_tank.hpp"
		};
		class group_ru_msv_omsb_f
		{
			name = "HMG ОМСП 2005";
			#include "groups\omsb_flora.hpp"
			#include "groups\omsb_flora_bmp.hpp"
			#include "groups\omsb_flora_minbatr.hpp"
			#include "groups\omsb_flora_tank.hpp"
		};
		class group_ru_msv_omsb_s
		{
			name = "HMG ОМСБр 2015";
			#include "groups\omsb_surp.hpp"
			#include "groups\omsb_surp_minbatr.hpp"
			#include "groups\omsb_surp_bmp.hpp"
			#include "groups\omsb_surp_gsabatr.hpp"
			#include "groups\omsb_surp_tank.hpp"
		};
		class group_ru_tank_otb_f
		{
			name = "HMG ОТП 2005";
			#include "groups\tank_flora.hpp"
		};
		class group_ru_tank_otb_s
		{
			name = "HMG ОТБр 2015";
			#include "groups\tank_surp.hpp"
		};
		class hmg_group_ru_vdv_2005
		{
			name = "HMG ВДВ 2005";
			#include "groups\vdv_flora.hpp"
		};
		class hmg_group_ru_vdv
		{
			name = "HMG ВДВ 2015";
			#include "groups\vdv_surp.hpp"
		};
		class hmg_group_ru_mp
		{
			name = "HMG Морская пехота 2005";
			#include "groups\mp_flora_bmp.hpp"
		};
	};
};