About
=====

*redis-ooc* is a redis binding for the [ooc](http://ooc-lang.org) language. This binding requires that you have hiredis headers in ``/usr/include`` and the hiredis dynamic library (which you get after running make in the hiredis distribution) in ``/usr/lib``. If you do not have those directories, place the header and dynamic library files wherever your system keeps them by default.

Install
=======

1.  Install [hiredis](http://github.com/antirez/hiredis.git)
2.  In your $OOC_LIBS directory, ``git clone http://github.com/gmaster1440/redis-ooc.git``
3.  See ``sample/list.ooc`` for a sample program
	
Usage
=====

First, you create a Redis object
    r := Redis new("127.0.0.1", 6379)
	
To issue a command
    send(r fd, "PING") // r fd is a mandatory parameter always

``send`` returns a RedisReply*  
  
To issue command and save the reply
    r << send(r fd, "PING")

To fetch the reply message
    r getReply()

To fetch reply if it was an integer
    r getInteger()

API
====

The redis.ooc isn't very long and rather understandable. Feel free to look through for reference.