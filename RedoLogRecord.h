//#include <db2ApiDf.h>
#include <sqludf.h>
#include "types.h"
#include "DB2Object.h"

#ifndef REDOLOGRECORD_H_
#define REDOLOGRECORD_H_

using namespace std;

namespace DB2LogReader {



#define SUPPLOG_UPDATE          0x01
#define SUPPLOG_INSERT          0x02
#define SUPPLOG_DELETE          0x04

#define OPFLAG_BEGIN_TRANS      0x01

    class DB2Object;
    class DB2Analyzer;

    class RedoLogRecord {
    public:
        RedoLogRecord *next;
        RedoLogRecord *prev;

        uint64_t  rid;
        uint64_t  recordLFS; //Log flush sequence (LFS) for this log record
        uint64_t  recordLSN;//Log sequence number (LSN) of the log record
        uint64_t  preRecordLSO;//Log sequence offset (LSO) of the previous log record in this transaction
        uint64_t  nextLSN; //next record lsn
        uint64_t  realLogRecLen;
        int       sqlcode;

        uint32_t  recordSize;
        uint16_t  recordType;
        uint16_t  recordFlag;
        uint64_t  prevRecordLSN;
        uint64_t  tid;  //transaction id

        typeOBJ  tableid;
        typeOBJ  tabspaceid;

        uint8_t   functionId;
        uint8_t  opCode;// insert,update,delete

        uint8_t  *rowData;
        uint16_t rowDataSize;
        uint16_t rowDataFixedSize;

        uint8_t  *rowData2;
        uint16_t rowDataSize2;
        uint16_t rowDataFixedSize2;

        DB2Object *db2Object;

    };
}

#endif
