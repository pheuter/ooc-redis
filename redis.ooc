use redis
include hiredis

RedisReply: cover from struct redisReply {
  type: extern Int
  integer: extern LLong
  reply: extern String
  elements: extern SizeT
  element: extern RedisReply**
}

Redis: class {
  reply: RedisReply*
  fd: Int
  
  init: func (ip: String, port: Int) {
    this reply = redisConnect(fd&, ip, port)
    if (reply != null) { println("Error: "+reply@ reply) }
    else { println("Connected successfully!") }
  }
  
  getType: func -> Int { this reply@ type }
  getInteger: func -> LLong { this reply@ integer }
  getReply: func -> String { this reply@ reply }
  getElements: func -> SizeT { this reply@ elements }
  getElement: func -> RedisReply** { this reply@ element }

}

operator << (redis: Redis, reply: RedisReply*) -> Redis { redis reply = reply; redis }
operator [] (redis: Redis, index: Int) -> RedisReply { redis getElement()[index]@ }

redisConnect: extern func(fd: Int*, ip: String, port: Int) -> RedisReply*
freeReplyObject: extern func(r: RedisReply*)
send: extern(redisCommand) func(fd: Int, format: String, ...) -> RedisReply*