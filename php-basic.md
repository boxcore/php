PHP Basic
=========



##PHP 标记 
php文档的解析标识是<?php 代码 ?>，在<?php到?>之间的代码会被php解析器解析。

纯php文档建议不写php结束标签"?>",这可以避免在 PHP 结束标记之后万一意外加入了空格或者换行符，会导致 PHP 开始输出这些空白。

**短标记 <? 和 ?>，开启方法：**

1. 修改php.ini 中的 short_open_tag 配置指令

2. 在编译 PHP 时使用了配置选项 --enable-short-tags 时才能使用短标记。



##PHP注释

注释不会被php解析，添加注释是为了更好的描述代码的功能或特殊说明，php的注释风格如下：

```php
<?php
    echo "This is a test"; // 单行c++风格注释
    /* 多行注释风格
       yet another line of comment */
    echo "This is yet another test";
    echo 'One Final Test'; # 单行shell风格注释
?> 
```
php的注释格式要求和方法请参考：<http://www.phpdoc.org>



##PHP类型

PHP 支持 8 种原始数据类型。 

四种标量类型：
 
◦ boolean（布尔型）  
◦ integer（整型）  
◦ float（浮点型，也称作 double)  
◦ string（字符串）  

两种复合类型： 

◦ array（数组）  
◦ object（对象）  

最后是两种特殊类型： 

◦ resource（资源）  
◦ NULL（无类型） 

具体说明请参考：<http://www.php.net/manual/zh/language.types.intro.php>


### 布尔类型（Boolean）

boolean表示真假，使用关键字为true或false，通常运算结果会返回给控制流程。两者不区分大小，但建议用小写，php编译时候会转成小写。

以下几种情况的转换会被认为是false：
布尔值 FALSE 本身  
◦ 整型值 0（零）  
◦ 浮点型值 0.0（零）  
◦ 空字符串，以及字符串 "0"  
◦ 不包括任何元素的数组  
◦ 不包括任何成员变量的对象（仅 PHP 4.0 适用）  
◦ 特殊类型 NULL（包括尚未赋值的变量）  
◦ 从空标记生成的 SimpleXML 对象 


###整型（Integer）
整型值可以使用十进制，十六进制，八进制或二进制表示，前面可以加上可选的符号（- 或者 +）。

要使用八进制表达，数字前必须加上 0（零）。要使用十六进制表达，数字前必须加上 0x。要使用二进制表达，数字前必须加上 0b。

如果向八进制数传递了一个非法数字（即 8 或 9），则后面其余数字会被忽略。 如下例(八进制数的怪事)：

```php
<?php
var_dump(01090); // 八进制 010 = 十进制 8
?> 
```

整型转函数：
. (int)或(integer)强制转换
. intval()



###浮点型（Float）
浮点型（也叫浮点数 float，双精度数 double 或实数 real）

注意：1和1.0是不相等的，1.0的浮点，真实的值只能是无线接近于1而不等于一的。如判断 if(1==1.0)是返回false的。



###字符串（String）
一个字符串 string 就是由一系列的字符组成，其中每个字符等同于一个字节。这意味着 PHP 只能支持 256 的字符集，因此不支持 Unicode 。

>string 最大可以达到 2GB。 

一个字符串可以用 4 种方式表达： 
◦ 单引号  
◦ 双引号  
◦ heredoc 语法结构  
◦ nowdoc 语法结构（自 PHP 5.3.0 起） 


####单引号
在单引号中的字符串要表达一个单引号自身，需在它的前面加个反斜线（\）来转义。要表达一个反斜线自身，则用两个反斜线（\\）。其它任何方式的反斜线都会被当成反斜线本身：也就是说如果想使用其它转义序列例如 \r 或者 \n，并不代表任何特殊含义，就单纯是这两个字符本身。 

在单引号字符串中的变量和特殊字符的转义序列将不会被替换。

####双引号
如果字符串是包围在双引号（"）中， PHP 将对一些特殊的字符进行解析： 

```
\n 换行（ASCII 字符集中的 LF 或 0x0A (10)） 
\r 回车（ASCII 字符集中的 CR 或 0x0D (13)） 
\t 水平制表符（ASCII 字符集中的 HT 或 0x09 (9)） 
\v 垂直制表符（ASCII 字符集中的 VT 或 0x0B (11)）（自 PHP 5.2.5 起） 
\e Escape（ASCII 字符集中的 ESC 或 0x1B (27)）（自 PHP 5.4.0 起） 
\f 换页（ASCII 字符集中的 FF 或 0x0C (12)）（自 PHP 5.2.5 起） 
\\ 反斜线 
\$ 美元标记 
\" 双引号 
\[0-7]{1,3} 符合该正则表达式序列的是一个以八进制方式来表达的字符  
\x[0-9A-Fa-f]{1,2} 符合该正则表达式序列的是一个以十六进制方式来表达的字符  
```


####Heredoc 结构
第三种表达字符串的方法是用 heredoc 句法结构：<<<。在该运算符之后要提供一个标识符，然后换行。接下来是字符串 string 本身，最后要用前面定义的标识符作为结束标志。 

结束时所引用的标识符必须在该行的第一列，而且，标识符的命名也要像其它标签一样遵守 PHP 的规则：只能包含字母、数字和下划线，并且必须以字母和下划线作为开头。 

```php
<?php
echo <<<"FOOBAR"
Hello World!
FOOBAR;
?>
```


####Nowdoc 结构
就象 heredoc 结构类似于双引号字符串，Nowdoc 结构是类似于单引号字符串的。Nowdoc 结构很象 heredoc 结构，但是 nowdoc 中不进行解析操作。这种结构很适合用于嵌入 PHP 代码或其它大段文本而无需对其中的特殊字符进行转义。

例子：

```php
<?php
echo <<<'EOT'
My name is "$name". I am printing some $foo->foo.
Now, I am printing some {$foo->bar[1]}.
This should not print a capital 'A': \x41
EOT;
?>
```


###数组（Array）


###对象（Object）


###资源类型（Resource）

###其他类型
####NULL
####伪变量
####回调（Callback）



##变量

变量以一个美元符号（$）开头后跟变量名。变量名由字母或者下划线开头，后面跟上任意数量的字母，数字，或者下划线。  
> 表达式：'[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*'

注意：$this 是一个特殊的变量，它不能被赋值。 

###预定义变量

###变量范围 

###可变变量 

###PHP 之外的变量 



##常量

###魔术常量



##运算符

•运算符优先级  
•算术运算符  
•赋值运算符  
•位运算符  
•比较运算符    
•错误控制运算符    
•执行运算符  
•递增／递减运算符  
•逻辑运算符  
•字符串运算符  
•数组运算符  
•类型运算符  

###运算符优先级
###算术运算符
###赋值运算符
###位运算符
###比较运算符
###错误控制运算符
###执行运算符
###递增／递减运算符
###逻辑运算符
###字符串运算符
###数组运算符
###类型运算符



##流程控制 

•简介  
•if  
•else  
•elseif/else if  
•流程控制的替代语法  
•while  
•do-while  
•for  
•foreach  
•break  
•continue  
•switch  
•declare  
•return  
•require  
•include  
•require_once  
•include_once  
•goto  

###简介
###if
###else
###elseif/else if
###流程控制的替代语法
###while
###do-while
###for
###foreach
###break
###continue
###switch
###declare
###return
###require
###include
###require_once
###include_once
###goto



##函数 

•用户自定义函数  
•函数的参数  
•返回值  
•可变函数  
•内部（内置）函数  
•匿名函数  


###用户自定义函数  
###函数的参数  
###返回值  
###可变函数  
###内部（内置）函数  
###匿名函数  







