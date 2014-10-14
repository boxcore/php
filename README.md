PHP Note
==========
boxcore Open PHP note, my php knowledge system.

__序__

制作一个系统性概括php基础知识用以索引php的复习，这是我建立`php note`的初衷。这本笔记不会出现很多基础知识如“php是什么语言”类的基础问题，这些简单又重复的问题你可以上php官网了解或google一下。

__文档说明__

语法说明: 笔记中所有函数语法请参考php手册, 笔记中大部分没有提供php官方的语法格式, 如: 

> bool define ( string $name, mixed $value [, bool case_$insensitive] )

函数引用说明: 如果函数中没有返回值, 使用了后直接改变原函数, 则会在函数括号里加 "&", 如:

    array_filter(&)
    sort(&)



# PHP基础
##[PHP基本](php-basic.md)

##PHP数组
- 数组的概念
- 数组分类
- 数组遍历
- 数组函数
    - sort
    - rsort

[阅读: PHP数组](php-array.md)

##PHP字符串处理
##[PHP字符串](php-string.md)

##正则表达式

##面向对象

##错误处理
[PHP错误处理](php-error.md)

##PHP程序调试
[PHP程序调试](php-debugger.md)

##设计模式
[PHP设计模式](php-design-pattern.md)

## PHP使用MySQL
[PHP中使用MySQl](php-mysql.md)

# PHP扩展

## PHP使用SQLite
[SQLite扩展](php-sqlite.md)

## cURL扩展



-----------------

__参考文档__

- [PHP官方手册](http://www.php.net/manual/zh/)
- [PHP官方CHM手册下载]()
