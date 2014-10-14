PHP Redis
==========

__Redis简介:__

是一个key-value存储系统,和Memcached类似，它支持存储的value类型相对更多，包括string(字符串)、list(链表)、set(集合)和zset(有序集 合)。这些数据类型都支持push/pop、add/remove及取交集并集和差集及更丰富的操作，而且这些操作都是原子性的。在此基础上，redis支持各种不同方式的排序。与memcached一样，为了保证效率，数据都是缓存在内存中。区别的是redis会周期性的把更新的数据写入磁盘或者把修改操作写入追加的记录文件，并且在此基础上实现了master-slave(主从)同步.


## window下安装使用redis

__需要文件:__

- [PHP官方Redis扩展下载](http://windows.php.net/downloads/pecl/snaps/redis/2.2.4/)
- [win下Redis程序(32位,在目录/bin中)](https://github.com/MSOpenTech/redis)
- [Win下Redis程序(64位)](https://github.com/mythz/redis-windows)

__解压下redis,有如下文件:__

- redis-server.exe：服务程序 
- redis-check-dump.exe：本地数据库检查 
- redis-check-aof.exe：更新日志检查 
- redis-benchmark.exe：性能测试，用以模拟同时由N个客户端发送M个 SETs/GETs 查询 (类似于 Apache 的ab 工具). 

### windows下 使用redis
安装好redis后可以在cmd中运行`{dir}\redis-server.exe`运行redis服务.  
运行后redis服务端后,可以在cmd通过`redis-cli.exe -h 127.0.0.1 -p 6379 `来运行客户端  

简单测试:

```dos
redis 127.0.0.1:6379> set mykey somevalue
OK
redis 127.0.0.1:6379> get mykey
"somevalue"
```

如何添加值到list:

```dos
redis 127.0.0.1:6379> lpush mylist val1
(integer) 1
redis 127.0.0.1:6379> lpush mylist val2
(integer) 2
redis 127.0.0.1:6379> lpush mylist val3
(integer) 3
redis 127.0.0.1:6379> lpush mylist val4
(integer) 4
redis 127.0.0.1:6379> lrange mylist 0 -1  
1> val1  
2> val2  
3> val3 
4> val4
redis 127.0.0.1:6379> rpop mylist  
"val1"
```


redis-benchmark.exe：性能测试，用以模拟同时由N个客户端发送M个 SETs/GETs 查询 (类似于 Apache 的 ab 工具). 

```dos
D:\wnmp\redis>redis-benchmark -n 100000 –c 50

```

## linux下安装使用redis




---------------

__参考__

- <http://my.oschina.net/lujianing/blog/204103>
