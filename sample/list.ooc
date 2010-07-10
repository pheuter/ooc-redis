use redis
import redis

main: func {
  r := Redis new("127.0.0.1", 6379)
  
  for (i in 0..10) { send(r fd, "lpush mylist %s", (i*i) toString()) }
  r << send(r fd, "lrange mylist 0 -1")
  for (i in 0..(r getElements() as Int)) {
    (r[i] reply + " ") print()
    // 81 64 49 36 25 16 9 4 1 0
  }
}