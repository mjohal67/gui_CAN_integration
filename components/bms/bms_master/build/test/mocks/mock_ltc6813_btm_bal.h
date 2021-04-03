/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LTC6813_BTM_BAL_H
#define _MOCK_LTC6813_BTM_BAL_H

#include "unity.h"
#include <stdbool.h>
#include <stdint.h>
#include "ltc6813_btm_bal.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_ltc6813_btm_bal_Init(void);
void mock_ltc6813_btm_bal_Destroy(void);
void mock_ltc6813_btm_bal_Verify(void);




#define BTM_BAL_initDchPack_Ignore() BTM_BAL_initDchPack_CMockIgnore()
void BTM_BAL_initDchPack_CMockIgnore(void);
#define BTM_BAL_initDchPack_StopIgnore() BTM_BAL_initDchPack_CMockStopIgnore()
void BTM_BAL_initDchPack_CMockStopIgnore(void);
#define BTM_BAL_initDchPack_Expect(dch_pack) BTM_BAL_initDchPack_CMockExpect(__LINE__, dch_pack)
void BTM_BAL_initDchPack_CMockExpect(UNITY_LINE_TYPE cmock_line, BTM_BAL_dch_setting_pack_t* dch_pack);
typedef void (* CMOCK_BTM_BAL_initDchPack_CALLBACK)(BTM_BAL_dch_setting_pack_t* dch_pack, int cmock_num_calls);
void BTM_BAL_initDchPack_AddCallback(CMOCK_BTM_BAL_initDchPack_CALLBACK Callback);
void BTM_BAL_initDchPack_Stub(CMOCK_BTM_BAL_initDchPack_CALLBACK Callback);
#define BTM_BAL_initDchPack_StubWithCallback BTM_BAL_initDchPack_Stub
#define BTM_BAL_copyDchPack_Ignore() BTM_BAL_copyDchPack_CMockIgnore()
void BTM_BAL_copyDchPack_CMockIgnore(void);
#define BTM_BAL_copyDchPack_StopIgnore() BTM_BAL_copyDchPack_CMockStopIgnore()
void BTM_BAL_copyDchPack_CMockStopIgnore(void);
#define BTM_BAL_copyDchPack_Expect(dch_pack_source, dch_pack_target) BTM_BAL_copyDchPack_CMockExpect(__LINE__, dch_pack_source, dch_pack_target)
void BTM_BAL_copyDchPack_CMockExpect(UNITY_LINE_TYPE cmock_line, BTM_BAL_dch_setting_pack_t* dch_pack_source, BTM_BAL_dch_setting_pack_t* dch_pack_target);
typedef void (* CMOCK_BTM_BAL_copyDchPack_CALLBACK)(BTM_BAL_dch_setting_pack_t* dch_pack_source, BTM_BAL_dch_setting_pack_t* dch_pack_target, int cmock_num_calls);
void BTM_BAL_copyDchPack_AddCallback(CMOCK_BTM_BAL_copyDchPack_CALLBACK Callback);
void BTM_BAL_copyDchPack_Stub(CMOCK_BTM_BAL_copyDchPack_CALLBACK Callback);
#define BTM_BAL_copyDchPack_StubWithCallback BTM_BAL_copyDchPack_Stub
#define BTM_BAL_setDischarge_Ignore() BTM_BAL_setDischarge_CMockIgnore()
void BTM_BAL_setDischarge_CMockIgnore(void);
#define BTM_BAL_setDischarge_StopIgnore() BTM_BAL_setDischarge_CMockStopIgnore()
void BTM_BAL_setDischarge_CMockStopIgnore(void);
#define BTM_BAL_setDischarge_Expect(pack, pack_dch_setting) BTM_BAL_setDischarge_CMockExpect(__LINE__, pack, pack_dch_setting)
void BTM_BAL_setDischarge_CMockExpect(UNITY_LINE_TYPE cmock_line, BTM_PackData_t* pack, BTM_BAL_dch_setting_pack_t* pack_dch_setting);
typedef void (* CMOCK_BTM_BAL_setDischarge_CALLBACK)(BTM_PackData_t* pack, BTM_BAL_dch_setting_pack_t* pack_dch_setting, int cmock_num_calls);
void BTM_BAL_setDischarge_AddCallback(CMOCK_BTM_BAL_setDischarge_CALLBACK Callback);
void BTM_BAL_setDischarge_Stub(CMOCK_BTM_BAL_setDischarge_CALLBACK Callback);
#define BTM_BAL_setDischarge_StubWithCallback BTM_BAL_setDischarge_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
