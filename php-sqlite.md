SQLite扩展
============


## 开启sqlite

一. Windows下开启sqlite: 

    extension=php_pdo.dll
    extension=php_sqlite.dll


二. Unix/Linux下开启sqlite:

是编译的时候添加: 

     --with-sqlite=shared 

在安装后添加的编译: 

    tar xvf php-your.version.here.tar.gz
     cd php-your.version.here/ext/sqlite/
     phpize
     ./configure
     make
     make install



## 


