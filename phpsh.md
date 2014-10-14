phpsh工具安装使用
=================

phpsh是facebook开发的

一、phpsh的安装

安装phpsh依赖包：

    yum install php-posix
	wget http://github.com/facebook/phpsh/tarball/master
	tar zxf master

复制src目录更名为phpsh

将其中的phpsh.php中的 rc.php之前得路径清空

chmod +x phpsh 

ln -s /xxx/xxx/phpsh /bin/phpsh 

如果不安装posix，执行phpsh后报错：

    Fatal error: phpsh requires the following extensions: posix


二、phpsh使用
--------------



三、常见报错

3.1 

    PHP Warning:  require_once(/etc/phpsh/rc.php): failed to open stream: No such file or directory in /opt/phpsh/src/phpsh.php on line 49
	PHP Fatal error:  require_once(): Failed opening required '/etc/phpsh/rc.php' (include_path='.:/usr/share/pear:/usr/share/php') in /opt/phpsh/src/phpsh.php on line 49


参考：  
----
http://www.phpsh.org/  
http://www.cnblogs.com/daiye/archive/2011/01/29/1947548.html
