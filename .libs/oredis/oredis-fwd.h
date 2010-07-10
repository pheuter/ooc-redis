/* oredis header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___oredis_fwd___
#define ___oredis_fwd___

#include <hiredis.h>

#include <hiredis.h>
typedef struct redisReply oredis__RedisReply;
struct _oredis__RedisReplyClass;
typedef struct _oredis__RedisReplyClass oredis__RedisReplyClass;

#include <sdk/lang/memory-fwd.h>
#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/vararg-fwd.h>
oredis__RedisReplyClass *oredis__RedisReply_class();
void oredis__RedisReply___load__();
void oredis_load();

#endif // ___oredis_fwd___
