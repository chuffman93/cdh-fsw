/*******************************************************
 *
 * THIS FILE IS AUTO-GENERATED, DO NOT EDIT THIS FILE!
 * To edit this file, edit the auto-coder located
 * in TLM/auto_code/py
 *
 ******************************************************/

#include <stdint.h>
#include "util/serialize.h"
#include "servers/FMGServer.h"

using namespace std;
using namespace AllStar::Core;
using namespace AllStar::Servers;

FMGServer * fmgServer = static_cast<FMGServer *> (Factory::GetInstance(FMG_SERVER_SINGLETON));

void TLM_STARTUP_ERROR(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0001);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_SERVERS_CREATED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0002);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_MAIN_EXIT(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0003);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_RESTART_THREAD(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0004);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_SPI_ACS_TX_FAIL(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0005);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_SPI_COM_TX_FAIL(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0006);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_SPI_EPS_TX_FAIL(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0007);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_SPI_PLD_TX_FAIL(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0008);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_GPS_CONFIG_FAIL(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0009);
  fmgServer->Log(DESTINATION_ERR, buf, size);
}

void TLM_MODE_SWITCH(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0100);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_MOD, buf, size);
}

void TLM_SYS_CALL(int16 arg0) {
  size_t size = 8;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0200);
  ser.serialize_int16(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_RESET_COMMANDED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0201);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DAILY_RESET(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0202);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_TX_SILENCE_ENTERED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0203);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_TX_SILENCE_EXITED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0204);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DWLK_CLEARED(int16 arg0) {
  size_t size = 8;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0205);
  ser.serialize_int16(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_UPLK_CLEARED(int16 arg0) {
  size_t size = 8;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0206);
  ser.serialize_int16(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IMMED_CLEARED(int16 arg0) {
  size_t size = 8;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0207);
  ser.serialize_int16(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_UFTP_RETURN_STATUS(int32 arg0) {
  size_t size = 10;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x02fe);
  ser.serialize_int32(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_UNKNOWN_FSW_COMMAND(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x02ff);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_LOAD_NEW_SCHEDULE(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0208);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_LOAD_DEFAULT_SCHEDULE(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0209);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_SCHEDULE_BAD_SIZE(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x020a);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_SCHEDULE_BAD_ITEM(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x020b);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_SCHEDULE_BAD_READ(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x020c);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_SCHEDULE_BAD_OPEN(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x020d);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_BAD_OPEN(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x020e);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_BAD_PASSWORD(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x020f);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INCOMPLETE_TYPE(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0210);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INCOMPLETE_CMD(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0211);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INCOMPLETE_ARCHIVE(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0212);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INCOMPLETE_DIRECTORY(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0213);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INCOMPLETE_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0214);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INCOMPLETE_REGEX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0215);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INVALID_CNUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0216);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_INVALID_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0217);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_IEF_UNKNOWN_COMMAND(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0218);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_BAD_OPEN(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0220);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_BAD_PASSWORD(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0221);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_RAD(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0222);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_PASSNUM(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0223);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_STARTNUM(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0224);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_ENDNUM(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0225);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INVALID_PASSNUM(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0226);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INVALID_STARTNUM(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0227);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INVALID_ENDNUM(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0228);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_ARCHIVE(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0229);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_DIRECTORY(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x022a);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x022b);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INCOMPLETE_REGEX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x022c);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_INVALID_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x022d);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_FAILED_SPLIT(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x022e);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_FAILED_DELETE(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x022f);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_FILESIZE_ERROR(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0230);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_PACKAGE_ERROR(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0231);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DRF_FILENAME_ERROR(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0232);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_BAD_OPEN(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0240);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_BAD_PASSWORD(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0241);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_INCOMPLETE_DIRECTORY(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0242);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_INCOMPLETE_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0243);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_INCOMPLETE_REGEX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0244);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_INVALID_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0245);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_INVALID_COMMAND(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0246);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_DLT_REMOVE_ERROR(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0247);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_PPE_BAD_OPEN(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0250);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_PPE_BAD_PASSWORD(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0251);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_PPE_INCOMPLETE_TYPE(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0252);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_PPE_INCOMPLETE_COMMAND(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0253);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_PPE_INVALID_NUMBER(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0254);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_CMD, buf, size);
}

void TLM_SPI_ACS_RX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0401);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_COM_RX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0402);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_EPS_RX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0403);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_PLD_RX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0404);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_ACS_TX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0405);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_COM_TX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0406);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_EPS_TX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0407);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_SPI_PLD_TX(uint8 arg0) {
  size_t size = 7;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0408);
  ser.serialize_uint8(arg0);
  fmgServer->Log(DESTINATION_SPI, buf, size);
}

void TLM_ACS_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0500);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_CDH_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0501);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_CMD_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0502);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_COM_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0503);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_EPS_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0504);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_ERR_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0505);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_FMG_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0506);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_GPS_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0507);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_PLD_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0508);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_SCH_SERVER_STARTED(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0509);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_BEGIN_PROPAGATION(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x050a);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_END_PROPAGATION(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x050b);
  fmgServer->Log(DESTINATION_GEN, buf, size);
}

void TLM_PWR_ACS_ON(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0600);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_COM_ON(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0601);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_GPS_ON(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0602);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_PLD_ON(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0603);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_ACS_OFF(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0604);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_COM_OFF(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0605);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_GPS_OFF(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0606);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_PLD_OFF(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0607);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_ACS_LO(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0608);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_COM_LO(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0609);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_EPS_LO(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x060a);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_PLD_LO(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x060b);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_ACS_HI(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x060c);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_COM_HI(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x060d);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_EPS_HI(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x060e);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_PLD_HI(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x060f);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_PWR_INVALID(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0610);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

void TLM_RST_INVALID(void) {
  size_t size = 6;
  uint8_t * buf = (uint8_t *) malloc(size);
  Serialize ser(buf, size);
  ser.serialize_int32(getTimeInSec());
  ser.serialize_uint16(0x0611);
  fmgServer->Log(DESTINATION_PWR, buf, size);
}

