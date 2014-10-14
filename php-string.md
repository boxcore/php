PHP 字符串
=================

# 字符串函数

#### strlen(): 计算字符串的长度

#### substr_count(): 获取指定字符串出现次数, 语法如:  
> int substr_count(string $haystack, string $needle [, int $offset [, int $length]]);

```php
<?php
$haystack = "Hello worldaa, aa is bb, I am aa?";
$handle = "aa";
$count = substr_count($haystack, $handle);
echo "aa 共出现次数: ".$count;  // 3次
?>
```

#### str_word_count(): 统计某个单词出现的次数, 语法格式如:
mixed str_word_count( string $string [, int $format [, string $charlist]] )

    . format: 指定返回模式. 该参数可取值如:
        0 - 默认值, 返回找到单词的数目;
        1 - 返回一个数组,其中键名是从0开始的连续整数, 值是实际单词;
        2 - 返回一个数组,其中键名是单词在字符串中的位置, 值是实际的单词;

