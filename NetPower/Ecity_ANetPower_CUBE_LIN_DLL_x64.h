#pragma once
#define NETPOWER_DLL_API __declspec(dllexport)

//--------------------------------------------------------------
// EEPROM CONFIG CUBE_LIN данные для записи/чтения в EEPROM
//--------------------------------------------------------------
enum kontr_data_bytes_lin
{
	EE_ACC_ON_DELAY_LIN = 0, 		// Задержка включения по АСС
	EE_VKL_PC_DELAY_LIN,			// Задержка после включения питания
	EE_OS_LOAD_TIME_LIN,			// Время загрузки системы PC
	EE_AKB_OFF_DELAY_LIN,			// Максимально допустимое время низкого уровня АКБ перед выключенем
	EE_ACC_OFF_DELAY_L_LIN,			// Задержка вылючения по АСС (LOW BIT)
	EE_ACC_OFF_DELAY_H_LIN,        	// Задержка вылючения по АСС (HIGH BIT)
	EE_OS_SHUTDOWN_TIME_LIN,		// Время выключения системы PC
	EE_AKB_MIN_LIN,					// Минимальное допустимое напряжение на АКБ для выключения
	EE_VKL_AKB_MIN_LIN,				// Минимальное напряжение АКБ для включения
	EE_CHECK_PC_ON_LIN,				// Проверка напряжения на ЮСБ (V_PC)
	EE_DONT_USE_ACC_LIN,			// Не выключаться по АСС
	EE_BAT_MIN_LIN,                 // Минимальное напряжение батареи при котором выключается NetPower
	EE_AKB_OFF_VOLT_LIN,            // Минимальное напряжение АКБ при котором переключается на питание от батареи
	EE_BYTE_LIN						// Кол-во байт записываемых в EEPROM
};

//--------------------------------------------------------------------------------------------------------------
//  EEPROM CONFIG ANetPower данные для записи/чтения в EEPROM
//--------------------------------------------------------------------------------------------------------------
enum kontr_data_bytes
{
	ACC_ON_DELAY = 0,	// Задержка включения по АСС
	OS_LOAD_TIME,		// Время загрузки системы PC
	OS_SHUTDOWN_TIME,	// Время выключения системы PC
	AKB_MIN,			// Минимальное допустимое напряжение на АКБ
	VKL_PC_DELAY,		// Задержка после включения питания
	CHECK_PC_ON,		// Проверка напряжения на ЮСБ (V_PC)
	ACC_OFF_DELAY,		// Задержка вылючения по АСС "low bit"
	AKB_OFF_DELAY,		// Максимально допустимое время низкого уровня АКБ перед выключенем
	ACC_OFF_DELAY_H,	// Задержка вылючения по АСС "high bit"
	VKL_AKB_MIN,		// Минимальное напряжение АКБ для включения
	DONT_USE_ACC,		// Не выключаться по АСС
	R_OUT_DELAY,		// Задержка включения R_OUT
	SLEEP_MODE,			// Включение режима сна
	R_OUT_OFF_DELAY,	// Задержка выключения R_OUT
	R_OUT_USE_OFF,		// Приминить задержку выключения R_OUT
	AKB_OFF_VOLT,		// For setting AKB_OFF pin
	VIKL_AKB_MIN,		// For OFF at ~8V despite DONT_OFF_COMMAND
	NO_ACC_OFF,			// Don't turn off on ACC low
	REAL_AKB_H,			// Напряжение на REAL_AKB "high bit"
	REAL_AKB_L,			// Напряжение на REAL_AKB "low bit"
	EEBYTES_NP
};

//--------------------------------------------------------------------------------------------------------------
// EEPROM CONFIG ECity данные для записи/чтения в EEPROM
//--------------------------------------------------------------------------------------------------------------
enum kontr_data_bytes_ec
{
	ACC_ON_DELAY_EC = 0, 	// Задержка включения по АСС
	VKL_PC_DELAY_EC,		// Задержка после включения питания
	R_OUT_DELAY_EC,			// Задержка включения R_OUT
	OS_LOAD_TIME_EC,		// Время загрузки системы PC
	AKB_OFF_DELAY_EC,		// Максимально допустимое время низкого уровня АКБ перед выключенем
	ACC_OFF_DELAY_EC,		// Задержка вылючения по АСС "low bit"
	ACC_OFF_DELAY_H_EC,		// Задержка вылючения по АСС "high bit"
	OS_SHUTDOWN_TIME_EC,	// Время выключения системы PC
	AKB_MIN_EC,				// Минимальное допустимое напряжение на АКБ
	CHECK_PC_ON_EC,			// Проверка напряжения на ЮСБ (V_PC)
	VKL_AKB_MIN_EC,			// Минимальное напряжение АКБ для включения
	SLEEP_MODE_EC,			// Включение режима сна
	R_OUT_OFF_DELAY_EC,		// Задержка выключения R_OUT
	R_OUT_USE_OFF_EC,		// Приминить задержку выключения R_OUT
	R_TEMPERATURE_MIN_EC,	// Минимальная рабочая температура
	R_TEMPERATURE_MAX_EC,	// Максимальная рабочая температура
	NAGREV_MIN_EC,			// Минимальная температура включения нагрева
	REZERV1_EC,
	OHL_MIN_EC,				// Минимальная температура выключения охлаждения
	OHL_MAX_EC,				// Максимальная температура включения охлаждения
	DONT_USE_ACC_EC,		// Не выключаться по АСС
	REZERV2_EC,
	REZERV3_EC,
	REZERV4_EC,
	REZERV5_EC,
	REZERV6_EC,
	EEBYTES_EC
};

//--------------------------------------------------------------------------------------------------------------
// EEPROM CONFIG ATLAS данные для записи/чтения в EEPROM
//--------------------------------------------------------------------------------------------------------------
enum kontr_data_bytes_Atlas
{
	EE_ACC_ON_DELAY = 0, 		// Задержка включения по АСС
	EE_VKL_PC_DELAY,			// Задержка после включения питания
	EE_OS_LOAD_TIME,			// Время загрузки системы PC
	EE_AKB_OFF_DELAY,			// Максимально допустимое время низкого уровня АКБ перед выключенем
	EE_ACC_OFF_DELAY_L,			// Задержка вылючения по АСС (LOW BIT)
	EE_ACC_OFF_DELAY_H,        	// Задержка вылючения по АСС (HIGH BIT)
	EE_OS_SHUTDOWN_TIME,		// Время выключения системы PC
	EE_OFF_AKB_MIN,				// Минимальное допустимое напряжение на АКБ для выключения
	EE_VKL_AKB_MIN,				// Минимальное напряжение АКБ для включения
	EE_CHECK_PC_ON,				// Проверка напряжения на ЮСБ (V_PC)
	EE_DONT_USE_ACC,			// Не выключаться по АСС
	EE_BAT_MIN,                 // Минимальное напряжение батареи при котором выключается NetPower
	EE_MIN_VOLT_GENERATOR,		// Минимальное напряжение на АКБ при котором ограничивается ток зарядки
	EE_UPS_CURRENT_BAT_MAX_L, 	// Предельное значение тока зарядки в Попугаях (LOW BIT)
	EE_UPS_CURRENT_BAT_MAX_H, 	// Предельное значение тока зарядки в Попугаях (HIGH BIT)
	EE_UPS_CELL_VOLT_MIN,		// Включение первой балансира
	EE_UPS_CELL_VOLT_ALARM,		// Выключение заряда батареи, только балансировка
	EE_BAT_ZARAD,				// 18 Процент заряда В БАТАРЕЕ
	EE_MAX_IN_AMPER,            // Максимальный ток потребления системы от Сети
	EE_FLAG_MAX_IN_AMPER,   	// Флаг работы питания системы от ограниченного источника тока
	EEBYTES_ATLAS
};

//--------------------------------------------------------------------------------------------------------------
// Динамические переменные
//--------------------------------------------------------------------------------------------------------------
enum _dynamic_variable
{
	dIN_LIN,		// Напряжение на входе CUBE_LIN
	dBAT_LIN,		// Напряжение на батарее CUBE_LIN
	dOUT_LIN,		// Напряжение на выходе CUBE_LIN 
	dBAT_STATUS,	// Статус заряда батареи: 0-Включение, 1-Поддерживающий, 2-Постоянным током, 3-Постоянным напряжением, 4-Разряд
	dP_ZARYDA,		// Процент заряда батареи
	dLIN_STATUS,	// Проверка соеденения по шине LIN 0-обрыв, 1-есть связь
	dAKB_NP,		// Напряжение на АКБ ANetPower
	dU_OUT_NP,		// Напряжение на выходе ANetPower
	dREAL_AKB_NP,	// Напряжение на REAL_AKB ANetPower
	dAKB_EC,			// Напряжение на АКБ ECity
	dU_OUT_1_EC,		// Напряжение на выходе 1 ECity
	dU_OUT_2_EC,		// Напряжение на выходе 2 ECity
	dTCN75A_TEMP_EC,	// Значение температуры ECity
	dSOS_EC,			// Значение состояния кнопки SOS 0-выкл 1-вкл ECity
	dFAN_FREG_EC,		// Значение частоты вращения вентилятора ECity
	dFAN_STATUS_EC,		// Значение статуса вентилятора 0-выкл 1-вкл ECity
	dNAGREV_STATUS_EC,	// Значение статуса нагрева 0-выкл 1-вкл ECity
	dTCN75A_STATUS_EC	// Значение статуса датчика температуры 0 - исправен 1 - неисправен ECity
};

//---------------------------------------------------------------
// Массив динамических данных ATLAS
//---------------------------------------------------------------
enum usb_config
{
// Измеренные данные На NETPOWER
USB_NPWR_AKB_VOLT_H,				// Измеренное напряжение на AKB на Входе (HIGH BIT)
USB_NPWR_AKB_VOLT_L,				// Измеренное напряжение на AKB на Входе (LOW BIT)
USB_NPWR_OUT_VOLT_H,				// Измеренное напряжение на выходе (HIGH BIT)
USB_NPWR_OUT_VOLT_L,				// Измеренное напряжение на выходе (LOW BIT)
USB_NPWR_PIC_STATE,					// Режим работы блока питания
// Добавленные параметры
//   ПАРАМЕРТЫ пришедшие от UPS
USB_UPS_CELL_1_VOLT_H, 				// Напряжение на 1-й Ячейке
USB_UPS_CELL_1_VOLT_L, 				//
USB_UPS_CELL_2_VOLT_H, 				// Напряжение на 2-й Ячейке
USB_UPS_CELL_2_VOLT_L, 				//
USB_UPS_CELL_3_VOLT_H, 				// Напряжение на 3-й Ячейке
USB_UPS_CELL_3_VOLT_L, 				//
USB_UPS_CELL_4_VOLT_H, 				// Напряжение на 4-й Ячейке
USB_UPS_CELL_4_VOLT_L, 				//
USB_UPS_ACS711_OUT_L,				// Измеренный ток на На Выходе с Устроства (LOW BIT)
USB_UPS_ACS711_OUT_H,				// Измеренный ток на На Выходе с Устроства (HIGH BIT)
USB_UPS_ACS711_BAT_L,				// Измеренный ток на BAT (LOW BIT)
USB_UPS_ACS711_BAT_H,				// Измеренный ток на BAT (HIGH BIT)
USB_UPS_flag_ZARYD,					// Флаг состояния заряда Батареи (заряд = 1 разряд = 2)
USB_UPS_CURRENT_STOP_ZARAD,			// Состояние Внутренней зарядки присланное от верхней платы (подтвержденное) 0 - зарядка выключена , 1 Включена
USB_UPS_BAT_VOLT_L,					// Измеренное напряжение на BATLOW BIT)
USB_UPS_BAT_VOLT_H,					// Измеренное напряжение на BAT (HIGH BIT)
USB_UPS_OUT_VOLT_L,					// Измеренное напряжение на Выходе с Устроства (LOW BIT)
USB_UPS_OUT_VOLT_H,					// Измеренное напряжение на Выходе с Устроства (HIGH BIT)
USB_UPS_AKB_VOLT_L,					// Измеренное напряжение на Входе Устроства (LOW BIT)
USB_UPS_AKB_VOLT_H,					// Измеренное напряжение на Входе Устроства (HIGH BIT)
USB_UPS_flag_ATLAS_STATUS,			// Флаг состояния работы от 1=АКБ или 2=БАТ
USB_UPS_TEMPC_USB_L, 				// Температура батареи (LOW BIT)
USB_UPS_TEMPC_USB_H, 				// Температура батареи (HIGH BIT)
USB_UPS_MOD1,						// Процент балансировки 1 ячейки 1-100
USB_UPS_MOD2,						// Процент балансировки 2 ячейки 1-100
USB_UPS_MOD3,						// Процент балансировки 3 ячейки 1-100
USB_UPS_MOD4,						// Процент балансировки 4 ячейки 1-100
USB_STATUS_ROUT_1,				// Состояние ROUT_1
USB_STATUS_ROUT_2,				// Состояние ROUT_2
USB_STATUS_ROUT_3,				// Состояние ROUT_3
USB_STATUS_ROUT_4,				// Состояние ROUT_4
USB_TEMP_STM_H, 				// Значение температуры STM
USB_TEMP_STM_L,
USB_BYTE_ATLAS						// Кол-во байт 
};

//--------------------------------------------------------------------------------------------------------------
// Function general
//--------------------------------------------------------------------------------------------------------------
extern "C" NETPOWER_DLL_API bool OpenHidDevice();
extern "C" NETPOWER_DLL_API void CloseHidDevice();
extern "C" NETPOWER_DLL_API int func_FIRMW_VERSION(void);										// Чтение версии устройства 
extern "C" NETPOWER_DLL_API void READ_S_DATA();													// Чтение всех данных из EEPROM в зависимости от версии устройства
extern "C" NETPOWER_DLL_API unsigned char READ_ATLAS_DATA(unsigned char num);					// Чтение от ATLAS и NetPowerFull
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_lin(unsigned char num);				// Чтение выборочных данных из EEPROM CUBE_LIN
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_np(unsigned char num);					// Чтение выборочных данных из EEPROM ANetPower
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_ec(unsigned char num);					// Чтение выборочных данных из EEPROM ECity
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_atlas(unsigned char num);				// Чтение выборочных данных из EEPROM ATLAS
extern "C" NETPOWER_DLL_API int READ_D_DATA(int d_num);											// Чтение динамических данных в зависимости от версии устройства
extern "C" NETPOWER_DLL_API void READ_D_DATA_ATLAS();											// Чтение динамических данных ATLAS
extern "C" NETPOWER_DLL_API unsigned char get_kontr_data_atlas_usb(unsigned char num);			// Вывод динамических данных ATLAS
extern "C" NETPOWER_DLL_API void WRITE_DATA();													// Запись новых значений в EEPROM в зависимости от версии устройства
extern "C" NETPOWER_DLL_API void set_kontr_data_lin(unsigned char num, unsigned char value);	// Запись выборочных данных в EEPROM CUBE_LIN
extern "C" NETPOWER_DLL_API void set_kontr_data_np(unsigned char num, unsigned char value);		// Запись выборочных данных в EEPROM  ANetPower
extern "C" NETPOWER_DLL_API void set_kontr_data_ec(unsigned char num, unsigned char value);		// Запись выборочных данных в EEPROM  ECity
extern "C" NETPOWER_DLL_API void set_kontr_data_atlas(unsigned char num, unsigned char value);	// Запись выборочных данных в EEPROM  ATLAS
extern "C" NETPOWER_DLL_API void R_OUTComm(unsigned char num, unsigned char value);				// Управление R_OUT NetPowerFuii
extern "C" NETPOWER_DLL_API void DontOffComm();													// Не выключаться по АСС (работать от батареи)
extern "C" NETPOWER_DLL_API void PcOffComm();													// Выключить ПК
extern "C" NETPOWER_DLL_API void ResetEEPROM();													// Запись в EEPROM значений по умолчанию 