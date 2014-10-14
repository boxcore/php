PHP数组
=======


__数组的类型__

1. 索引数组  以数字作为键名的数组.
2. 关联数组  以数字或字符串混合或纯字符串作为键名的数组.

数字的其他分类: 一维数组, 二维数组, 多维数组


### 数组使用

```php
<?php
/* 定义数组 */
$arr = array();
$a[1] = 'aa';
$b['aa'] = 'hello';

/* 删除数组 */
unset($arr[1]);
?>
```

__遍历数组__

```php
<?php
/* foreach遍历 */
$arr = range('A','Z');
foreach($arr as $key=>$value){
    echo $key.'=>'.$value;
}

/* for循环结构 */*
for($i=0;$i<count($arr); $i++){
    echo $i.'----'.$arr[$i];
}

/* list(), each() 和 reset()遍历 */*
reset($arr);
while(list($key, $value)=each($arr)){
    print "$key --- $value<br />";
}
?>
```


### 数组函数
数组排序函数: 
sort()
rsort()
asort()
arsort()
ksort()
krsort()



#### sort()
sort() 对数组元素进行从低到高排序
#### rsort()
rsort()对数组元素进行从高到低排序
#### asort()
#### arsort()
#### ksort()
#### kasort()

#### in_array()
#### array_key_exits()
#### count()
#### sizeof()
#### array_merge()
#### array_chunk()
#### range()
#### array_reverse()
#### array_sum()
#### array_flip()