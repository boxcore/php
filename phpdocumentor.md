phpDocumentor安装和使用 
=============================

phpDocument是很好的php文档生成工具，参考phpdoc生成的文档能方便阅读和理解项目，安装和生产好phpdoc后必须要解决**中文乱码问题**（直达电梯）。

一、安装`phpDocumentor` 
----------------------
pear命令安装：

    pear install PhpDocumentor

源码安装：

二、`phpDocumentor`使用
-----------------------
查看所有帮助：

     phpdoc -h

phpdocmentor参数:
 
    -f 	要进行分析的文件名，多个文件用逗号隔开
    -d 	要分析的目录，多个目录用逗号分割
    -t 	生成的文档的存放路径
    -o 	输出的文档格式，结构为输出格式：转换器名：模板目录。	Format: output:converter:templatedir like
		例如： HTML:Smarty:PHP | HTML:frames:phpedit |

可以执行一下代码生成phpdoc：

	phpdoc -d /home/www/site -o HTML:frames:phpedit  -t docs
have fun！

三、php代码中phpdoc支持
-----------------------

这部分是要求编码者写代码的时候要养成按phpdoc风格添加注释，常用到的有：

    @author 程序作者名称，联络方式 
    @const 常数 
    @deprecate 不建议使用的 API 
    @global 全域变量 
    @param 函数的参数 
    @return 回传值 
    @see 可参考函数 
    @since 开始时间 
    @static 静态变量 
    @var 物件成员变量 
    @todo 计划中要进行的项目
    

四、可能遇到问题
---------------

1.如果目录文件过多，生成时可能内存不够，虚拟机上需要调大内存。

	PHP Fatal error:  Allowed memory size of 268435456 bytes exhausted (tried to allocate 35 bytes) in /usr/share/pear/PhpDocumentor/phpDocumentor/phpDocumentorTWordParser.inc on line 332

2.中文乱码问题

phpdoc默认编码是ISO-8859-1，如果要支持中文需要修改编码格式：
文件： /usr/share/pear/data/PhpDocumentor/phpDocumentor/Converters/HTML/frames/templates/default/templates/*.*
下的模板文件均替换成utf-8即可。

进入PhpDocumentor的模板目录把模板文件修改成utf-8编码：

	cd /usr/share/php/data/PhpDocumentor/phpDocumentor/Converters/
	// 或
	cd /usr/share/pear/data/PhpDocumentor/phpDocumentor/Converters/
	

执行字符串查找并替换命令：

	find ./ -name '*.tpl' | xargs sed -i 's/iso-8859-1/utf-8/g'

3. 

其他测试：

	phpdoc -d /home/www/romeo/trunk/sites/ucenter -o HTML:Smarty:PHP  -t docs1
	phpdoc -d /home/www/romeo/trunk/sites/ucenter -o HTML:frames:phphtmllib  -t docs2
	phpdoc -d /home/www/romeo/trunk/sites/ucenter -o HTML:frames:phpdoc.de  -t docs3
	phpdoc -d /home/www/romeo/trunk/sites/ucenter -o HTML:frames:earthli  -t docs4
	phpdoc -d /home/www/romeo/trunk/sites/ucenter -o HTML:frames:l0l33t  -t docs5

参考：
------

1. [phpdocumentor](http://www.laruence.com/2009/04/21/680.html "laruenced的phpdocumentor安装")
2. [windows下安装phpdocumentor](http://bbs.phpchina.com/thread-110594-1-1.html "windows下安装phpdocumentor")
3. [phpDocumentor官方文档](http://www.phpdoc.org/docs/latest/index.html "")
4. [PEAR：使用PHPDoc轻松建立你的PEAR文档](https://www.ibm.com/developerworks/cn/linux/sdk/php/pear3/ "")