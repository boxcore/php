PHP设计模式
==============

我们常用的php设计模式有: 

- [单例模式](#Singleton(单例模式))
- [单例模式](#Singleton(单例模式))

##  Interpreter(解释器模式)

##  Factory(工厂模式)

##  Facade(外观模式)

##  Decorator(装饰模式)

##  Builder(建造者模式)

##  Adapter(适配器模式)

##  Template (模板模式)

##  Command(命令模式)

##  Singleton(单例模式)
单例模式确保某一个类只有一个实例，而且自行实例化并向整个系统提供这个实例，这个类我们称之为单例类。

单例模式的要点有三个：

1. 是某个类只能有一个实例；
2. 是它必须自行创建这个实例；
3. 是它必须自行向整个系统提供这个实例。

__为什么要使用PHP单例模式？__

多数 人都是从单例模式的字面上的意思来理解它的用途, 认为这是对系统资源的节省, 可以避免重复实例化, 是一种"计划生育".   而PHP每次执行完页面都是会从内存中清理掉所有的资源. 因而PHP中的单例实际每次运行都是需要重新实例化的, 这样就失去了单例重复实例化的意义了. 单单从这个方面来说, PHP的单例的确有点让各位失望. 但是单例仅仅只有这个功能和应用吗? 答案是否定的,我们一起来看看。

1. php的应用主要在于数据库应用, 所以一个应用中会存在大量的数据库操作, 在使用面向对象的方式开发时(废话), 如果使用单例模式, 则可以避免大量的new 操作消耗的资源。

2. 如果系统中需要有一个类来全局控制某些配置信息, 那么使用单例模式可以很方便的实现. 这个可以参看zend Framework的FrontController部分。

3. 在一次页面请求中, 便于进行调试, 因为所有的代码(例如数据库操作类db)都集中在一个类中, 我们可以在类中设置钩子, 输出日志，从而避免到处var_dump, echo。

```php
<?php 

/**
* 设计模式之单例模式
* $_instance必须声明为静态的私有变量
* 构造函数和析构函数必须声明为私有,防止外部程序new
* 类从而失去单例模式的意义
* getInstance()方法必须设置为公有的,必须调用此方法
* 以返回实例的一个引用
* ::操作符只能访问静态变量和静态函数
* new对象都会消耗内存
* 使用场景:最常用的地方是数据库连接。 
* 使用单例模式生成一个对象后，
* 该对象可以被其它众多对象所使用。 
*/
class Example
{
//保存例实例在此属性中
private static $_instance;

//构造函数声明为private,防止直接创建对象
private function __construct()
{
echo 'I am Construceted';
}

//单例方法
public static function singleton()
{
if(!isset(self::$_instance))
{
$c=__CLASS__;
self::$_instance=new $c;
}
return self::$_instance;
} 

//阻止用户复制对象实例
public function __clone()
{
trigger_error('Clone is not allow' ,E_USER_ERROR);
}

function test()
{
echo("test");

}
}

// 这个写法会出错，因为构造方法被声明为private
$test = new Example;

// 下面将得到Example类的单例对象
$test = Example::singleton();
$test->test();

// 复制对象将导致一个E_USER_ERROR.
$test_clone = clone $test;
?>
```


##  Observer(观察者模式)

##  Strategy(策略模式)

##  Visitor (访问者模式)

##  Memento (备忘录模式)

##  Prototype (原型模式)

##  Mediator (中介者模式)

##  FlyWeight (享元模式)

##  Chain Of Responsibility (职责链模式)

##  Bridge (桥接模式)

##  Proxy (代理模式)

##  State (状态模式)

##  Composite (组合模式)

##  Interator (迭代器模式)


---------

__解释__

- 

__参考文章__

- [php设计模式 (总结)](http://www.cnblogs.com/bluefrog/archive/2011/06/28/2092634.html)
- [PHP单例模式（转载）](http://www.cnblogs.com/zox2011/archive/2011/09/20/2182119.html)
- [PHP设计模式笔记：使用PHP实现单例模式](http://www.phppan.com/2010/06/php-design-pattern-6-singleton/)