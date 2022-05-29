
# DB2LogReader
Config files for my GitHub profile.

DB2LogSync 是一款基于日志解析的CDC工具，通过解析DB2 REDO文件，获取变化的数据，写入KAFKA或者文件。
目前支持DB2 V9.7+ ，支持DB2 10 和11的所有版本。
支持AIX,WINDOWS,LINUX系统。
暂不支持DDL同步。

输出格式类似Debeizum.

{"lsn":434272025,"xid":"142756190093312","row":1,"payload":[{"op":"d","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"before":{"C1":"aaa","C2":null,"C3":null,"C4":"ddddd"}}]}
{"lsn":434272025,"xid":"166923971067904","row":1,"payload":[{"op":"d","schema":{"owner":"DB2INST1","table":"T03"},"rid":7,"before":{"C1":"aaa","C2":null,"C3":null,"C4":"ddddd"}}]}
{"lsn":434272025,"xid":"142756190093312","row":1,"payload":[{"op":"d","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"before":{"C1":"aaa","C2":null,"C3":null,"C4":"ddddd"}}]}
{"lsn":438067702,"xid":"230927590490112","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":7,"after":{"C1":"1","C2":"1","C3":"1","C4":"1"}}]}
{"lsn":438072909,"xid":"268310985834496","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"after":{"C1":"1","C2":"1","C3":"1","C4":"1","C5":1}}]}
{"lsn":438072909,"xid":"268310985834496","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"after":{"C1":"1","C2":"1","C3":"1","C4":"1","C5":1}}]}
{"lsn":438072909,"xid":"268310985834496","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"after":{"C1":"1","C2":"1","C3":"1","C4":"1","C5":1}}]}
{"lsn":438072909,"xid":"268310985834496","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"after":{"C1":"1","C2":"1","C3":"1","C4":"1","C5":1}}]}
{"lsn":438072909,"xid":"268310985834496","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"after":{"C1":"1","C2":"1","C3":"1","C4":"1","C5":1}}]}
{"lsn":438072909,"xid":"268310985834496","row":1,"payload":[{"op":"c","schema":{"owner":"DB2INST1","table":"T03"},"rid":8,"after":{"C1":"1","C2":"1","C3":"1","C4":"1","C5":1}}]}
