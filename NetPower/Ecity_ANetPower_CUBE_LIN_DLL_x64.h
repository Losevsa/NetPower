#pragma once
#define NETPOWER_DLL_API __declspec(dllexport)

//--------------------------------------------------------------
// EEPROM CONFIG CUBE_LIN ������ ��� ������/������ � EEPROM
//--------------------------------------------------------------
enum kontr_data_bytes_lin
{
	EE_ACC_ON_DELAY_LIN = 0, 		// �������� ��������� �� ���
	EE_VKL_PC_DELAY_LIN,			// �������� ����� ��������� �������
	EE_OS_LOAD_TIME_LIN,			// ����� �������� ������� PC
	EE_AKB_OFF_DELAY_LIN,			// ����������� ���������� ����� ������� ������ ��� ����� ����������
	EE_ACC_OFF_DELAY_L_LIN,			// �������� ��������� �� ��� (LOW BIT)
	EE_ACC_OFF_DELAY_H_LIN,        	// �������� ��������� �� ��� (HIGH BIT)
	EE_OS_SHUTDOWN_TIME_LIN,		// ����� ���������� ������� PC
	EE_AKB_MIN_LIN,					// ����������� ���������� ���������� �� ��� ��� ����������
	EE_VKL_AKB_MIN_LIN,				// ����������� ���������� ��� ��� ���������
	EE_CHECK_PC_ON_LIN,				// �������� ���������� �� ��� (V_PC)
	EE_DONT_USE_ACC_LIN,			// �� ����������� �� ���
	EE_BAT_MIN_LIN,                 // ����������� ���������� ������� ��� ������� ����������� NetPower
	EE_AKB_OFF_VOLT_LIN,            // ����������� ���������� ��� ��� ������� ������������� �� ������� �� �������
	EE_BYTE_LIN						// ���-�� ���� ������������ � EEPROM
};

//--------------------------------------------------------------------------------------------------------------
//  EEPROM CONFIG ANetPower ������ ��� ������/������ � EEPROM
//--------------------------------------------------------------------------------------------------------------
enum kontr_data_bytes
{
	ACC_ON_DELAY = 0,	// �������� ��������� �� ���
	OS_LOAD_TIME,		// ����� �������� ������� PC
	OS_SHUTDOWN_TIME,	// ����� ���������� ������� PC
	AKB_MIN,			// ����������� ���������� ���������� �� ���
	VKL_PC_DELAY,		// �������� ����� ��������� �������
	CHECK_PC_ON,		// �������� ���������� �� ��� (V_PC)
	ACC_OFF_DELAY,		// �������� ��������� �� ��� "low bit"
	AKB_OFF_DELAY,		// ����������� ���������� ����� ������� ������ ��� ����� ����������
	ACC_OFF_DELAY_H,	// �������� ��������� �� ��� "high bit"
	VKL_AKB_MIN,		// ����������� ���������� ��� ��� ���������
	DONT_USE_ACC,		// �� ����������� �� ���
	R_OUT_DELAY,		// �������� ��������� R_OUT
	SLEEP_MODE,			// ��������� ������ ���
	R_OUT_OFF_DELAY,	// �������� ���������� R_OUT
	R_OUT_USE_OFF,		// ��������� �������� ���������� R_OUT
	AKB_OFF_VOLT,		// For setting AKB_OFF pin
	VIKL_AKB_MIN,		// For OFF at ~8V despite DONT_OFF_COMMAND
	NO_ACC_OFF,			// Don't turn off on ACC low
	REAL_AKB_H,			// ���������� �� REAL_AKB "high bit"
	REAL_AKB_L,			// ���������� �� REAL_AKB "low bit"
	EEBYTES_NP
};

//--------------------------------------------------------------------------------------------------------------
// EEPROM CONFIG ECity ������ ��� ������/������ � EEPROM
//--------------------------------------------------------------------------------------------------------------
enum kontr_data_bytes_ec
{
	ACC_ON_DELAY_EC = 0, 	// �������� ��������� �� ���
	VKL_PC_DELAY_EC,		// �������� ����� ��������� �������
	R_OUT_DELAY_EC,			// �������� ��������� R_OUT
	OS_LOAD_TIME_EC,		// ����� �������� ������� PC
	AKB_OFF_DELAY_EC,		// ����������� ���������� ����� ������� ������ ��� ����� ����������
	ACC_OFF_DELAY_EC,		// �������� ��������� �� ��� "low bit"
	ACC_OFF_DELAY_H_EC,		// �������� ��������� �� ��� "high bit"
	OS_SHUTDOWN_TIME_EC,	// ����� ���������� ������� PC
	AKB_MIN_EC,				// ����������� ���������� ���������� �� ���
	CHECK_PC_ON_EC,			// �������� ���������� �� ��� (V_PC)
	VKL_AKB_MIN_EC,			// ����������� ���������� ��� ��� ���������
	SLEEP_MODE_EC,			// ��������� ������ ���
	R_OUT_OFF_DELAY_EC,		// �������� ���������� R_OUT
	R_OUT_USE_OFF_EC,		// ��������� �������� ���������� R_OUT
	R_TEMPERATURE_MIN_EC,	// ����������� ������� �����������
	R_TEMPERATURE_MAX_EC,	// ������������ ������� �����������
	NAGREV_MIN_EC,			// ����������� ����������� ��������� �������
	REZERV1_EC,
	OHL_MIN_EC,				// ����������� ����������� ���������� ����������
	OHL_MAX_EC,				// ������������ ����������� ��������� ����������
	DONT_USE_ACC_EC,		// �� ����������� �� ���
	REZERV2_EC,
	REZERV3_EC,
	REZERV4_EC,
	REZERV5_EC,
	REZERV6_EC,
	EEBYTES_EC
};

//--------------------------------------------------------------------------------------------------------------
// EEPROM CONFIG ATLAS ������ ��� ������/������ � EEPROM
//--------------------------------------------------------------------------------------------------------------
enum kontr_data_bytes_Atlas
{
	EE_ACC_ON_DELAY = 0, 		// �������� ��������� �� ���
	EE_VKL_PC_DELAY,			// �������� ����� ��������� �������
	EE_OS_LOAD_TIME,			// ����� �������� ������� PC
	EE_AKB_OFF_DELAY,			// ����������� ���������� ����� ������� ������ ��� ����� ����������
	EE_ACC_OFF_DELAY_L,			// �������� ��������� �� ��� (LOW BIT)
	EE_ACC_OFF_DELAY_H,        	// �������� ��������� �� ��� (HIGH BIT)
	EE_OS_SHUTDOWN_TIME,		// ����� ���������� ������� PC
	EE_OFF_AKB_MIN,				// ����������� ���������� ���������� �� ��� ��� ����������
	EE_VKL_AKB_MIN,				// ����������� ���������� ��� ��� ���������
	EE_CHECK_PC_ON,				// �������� ���������� �� ��� (V_PC)
	EE_DONT_USE_ACC,			// �� ����������� �� ���
	EE_BAT_MIN,                 // ����������� ���������� ������� ��� ������� ����������� NetPower
	EE_MIN_VOLT_GENERATOR,		// ����������� ���������� �� ��� ��� ������� �������������� ��� �������
	EE_UPS_CURRENT_BAT_MAX_L, 	// ���������� �������� ���� ������� � �������� (LOW BIT)
	EE_UPS_CURRENT_BAT_MAX_H, 	// ���������� �������� ���� ������� � �������� (HIGH BIT)
	EE_UPS_CELL_VOLT_MIN,		// ��������� ������ ���������
	EE_UPS_CELL_VOLT_ALARM,		// ���������� ������ �������, ������ ������������
	EE_BAT_ZARAD,				// 18 ������� ������ � �������
	EE_MAX_IN_AMPER,            // ������������ ��� ����������� ������� �� ����
	EE_FLAG_MAX_IN_AMPER,   	// ���� ������ ������� ������� �� ������������� ��������� ����
	EEBYTES_ATLAS
};

//--------------------------------------------------------------------------------------------------------------
// ������������ ����������
//--------------------------------------------------------------------------------------------------------------
enum _dynamic_variable
{
	dIN_LIN,		// ���������� �� ����� CUBE_LIN
	dBAT_LIN,		// ���������� �� ������� CUBE_LIN
	dOUT_LIN,		// ���������� �� ������ CUBE_LIN 
	dBAT_STATUS,	// ������ ������ �������: 0-���������, 1-��������������, 2-���������� �����, 3-���������� �����������, 4-������
	dP_ZARYDA,		// ������� ������ �������
	dLIN_STATUS,	// �������� ���������� �� ���� LIN 0-�����, 1-���� �����
	dAKB_NP,		// ���������� �� ��� ANetPower
	dU_OUT_NP,		// ���������� �� ������ ANetPower
	dREAL_AKB_NP,	// ���������� �� REAL_AKB ANetPower
	dAKB_EC,			// ���������� �� ��� ECity
	dU_OUT_1_EC,		// ���������� �� ������ 1 ECity
	dU_OUT_2_EC,		// ���������� �� ������ 2 ECity
	dTCN75A_TEMP_EC,	// �������� ����������� ECity
	dSOS_EC,			// �������� ��������� ������ SOS 0-���� 1-��� ECity
	dFAN_FREG_EC,		// �������� ������� �������� ����������� ECity
	dFAN_STATUS_EC,		// �������� ������� ����������� 0-���� 1-��� ECity
	dNAGREV_STATUS_EC,	// �������� ������� ������� 0-���� 1-��� ECity
	dTCN75A_STATUS_EC	// �������� ������� ������� ����������� 0 - �������� 1 - ���������� ECity
};

//---------------------------------------------------------------
// ������ ������������ ������ ATLAS
//---------------------------------------------------------------
enum usb_config
{
// ���������� ������ �� NETPOWER
USB_NPWR_AKB_VOLT_H,				// ���������� ���������� �� AKB �� ����� (HIGH BIT)
USB_NPWR_AKB_VOLT_L,				// ���������� ���������� �� AKB �� ����� (LOW BIT)
USB_NPWR_OUT_VOLT_H,				// ���������� ���������� �� ������ (HIGH BIT)
USB_NPWR_OUT_VOLT_L,				// ���������� ���������� �� ������ (LOW BIT)
USB_NPWR_PIC_STATE,					// ����� ������ ����� �������
// ����������� ���������
//   ��������� ��������� �� UPS
USB_UPS_CELL_1_VOLT_H, 				// ���������� �� 1-� ������
USB_UPS_CELL_1_VOLT_L, 				//
USB_UPS_CELL_2_VOLT_H, 				// ���������� �� 2-� ������
USB_UPS_CELL_2_VOLT_L, 				//
USB_UPS_CELL_3_VOLT_H, 				// ���������� �� 3-� ������
USB_UPS_CELL_3_VOLT_L, 				//
USB_UPS_CELL_4_VOLT_H, 				// ���������� �� 4-� ������
USB_UPS_CELL_4_VOLT_L, 				//
USB_UPS_ACS711_OUT_L,				// ���������� ��� �� �� ������ � ��������� (LOW BIT)
USB_UPS_ACS711_OUT_H,				// ���������� ��� �� �� ������ � ��������� (HIGH BIT)
USB_UPS_ACS711_BAT_L,				// ���������� ��� �� BAT (LOW BIT)
USB_UPS_ACS711_BAT_H,				// ���������� ��� �� BAT (HIGH BIT)
USB_UPS_flag_ZARYD,					// ���� ��������� ������ ������� (����� = 1 ������ = 2)
USB_UPS_CURRENT_STOP_ZARAD,			// ��������� ���������� ������� ���������� �� ������� ����� (��������������) 0 - ������� ��������� , 1 ��������
USB_UPS_BAT_VOLT_L,					// ���������� ���������� �� BATLOW BIT)
USB_UPS_BAT_VOLT_H,					// ���������� ���������� �� BAT (HIGH BIT)
USB_UPS_OUT_VOLT_L,					// ���������� ���������� �� ������ � ��������� (LOW BIT)
USB_UPS_OUT_VOLT_H,					// ���������� ���������� �� ������ � ��������� (HIGH BIT)
USB_UPS_AKB_VOLT_L,					// ���������� ���������� �� ����� ��������� (LOW BIT)
USB_UPS_AKB_VOLT_H,					// ���������� ���������� �� ����� ��������� (HIGH BIT)
USB_UPS_flag_ATLAS_STATUS,			// ���� ��������� ������ �� 1=��� ��� 2=���
USB_UPS_TEMPC_USB_L, 				// ����������� ������� (LOW BIT)
USB_UPS_TEMPC_USB_H, 				// ����������� ������� (HIGH BIT)
USB_UPS_MOD1,						// ������� ������������ 1 ������ 1-100
USB_UPS_MOD2,						// ������� ������������ 2 ������ 1-100
USB_UPS_MOD3,						// ������� ������������ 3 ������ 1-100
USB_UPS_MOD4,						// ������� ������������ 4 ������ 1-100
USB_STATUS_ROUT_1,				// ��������� ROUT_1
USB_STATUS_ROUT_2,				// ��������� ROUT_2
USB_STATUS_ROUT_3,				// ��������� ROUT_3
USB_STATUS_ROUT_4,				// ��������� ROUT_4
USB_TEMP_STM_H, 				// �������� ����������� STM
USB_TEMP_STM_L,
USB_BYTE_ATLAS						// ���-�� ���� 
};

//--------------------------------------------------------------------------------------------------------------
// Function general
//--------------------------------------------------------------------------------------------------------------
extern "C" NETPOWER_DLL_API bool OpenHidDevice();
extern "C" NETPOWER_DLL_API void CloseHidDevice();
extern "C" NETPOWER_DLL_API int func_FIRMW_VERSION(void);										// ������ ������ ���������� 
extern "C" NETPOWER_DLL_API void READ_S_DATA();													// ������ ���� ������ �� EEPROM � ����������� �� ������ ����������
extern "C" NETPOWER_DLL_API unsigned char READ_ATLAS_DATA(unsigned char num);					// ������ �� ATLAS � NetPowerFull
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_lin(unsigned char num);				// ������ ���������� ������ �� EEPROM CUBE_LIN
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_np(unsigned char num);					// ������ ���������� ������ �� EEPROM ANetPower
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_ec(unsigned char num);					// ������ ���������� ������ �� EEPROM ECity
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_atlas(unsigned char num);				// ������ ���������� ������ �� EEPROM ATLAS
extern "C" NETPOWER_DLL_API int READ_D_DATA(int d_num);											// ������ ������������ ������ � ����������� �� ������ ����������
extern "C" NETPOWER_DLL_API void READ_D_DATA_ATLAS();											// ������ ������������ ������ ATLAS
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_atlas_usb(unsigned char num);			// ����� ������������ ������ ATLAS
extern "C" NETPOWER_DLL_API void WRITE_DATA();													// ������ ����� �������� � EEPROM � ����������� �� ������ ����������
extern "C" NETPOWER_DLL_API void set_kontr_data_lin(unsigned char num, unsigned char value);	// ������ ���������� ������ � EEPROM CUBE_LIN
extern "C" NETPOWER_DLL_API void set_kontr_data_np(unsigned char num, unsigned char value);		// ������ ���������� ������ � EEPROM  ANetPower
extern "C" NETPOWER_DLL_API void set_kontr_data_ec(unsigned char num, unsigned char value);		// ������ ���������� ������ � EEPROM  ECity
extern "C" NETPOWER_DLL_API void set_kontr_data_atlas(unsigned char num, unsigned char value);	// ������ ���������� ������ � EEPROM  ATLAS
extern "C" NETPOWER_DLL_API void R_OUTComm(unsigned char num, unsigned char value);				// ���������� R_OUT NetPowerFuii
extern "C" NETPOWER_DLL_API void DontOffComm();													// �� ����������� �� ��� (�������� �� �������)
extern "C" NETPOWER_DLL_API void PcOffComm();													// ��������� ��
extern "C" NETPOWER_DLL_API void ResetEEPROM();													// ������ � EEPROM �������� �� ��������� 