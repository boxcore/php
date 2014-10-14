PHP使用MySQL
==========

## 启用mysql
php中mysql需要在php.ini配置文件中有如下设置:

```
extension=php_mysql.dll #windows
extension=php_mysql.so  #linux || deban
```

## php常用MySQL操作函数

- 连接数据库: mysql_connect()
- 选择数据库: mysql_select_db()
- 获取查询结果: mysql_fetch_array()


