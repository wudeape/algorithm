## 几种排序方式
# 冒泡排序  
  + 简单的实现方法是 两个循环 外层循环进行控制排序的趟数,内层循环控制比较的次数
  + 每趟过后比较的次数减一
   <pre>
   	 for (int i=0;i< arrays.length-1; i++){
     // 比较每层后就重新初始化为0
     for(int j=0; j< arrays.length-i-1; j++){
        if(arrays[j]>arrays[j+1]){
        temp = arrays[j];
        arrays[j] = arrays[j+1];
        arrays[j+1] = temp;
  }
   }

   	}

   </pre>
* 递归实现  (第一趟排序后，我们可以将数组的最后一位（R和数组前面的数（L,R-1）进行切割数组前面的（L,R-1）看做一个整体，然后找出较大值，下文的递归有体现)
<pre>
  public static void bubbleSort(int[] arrays, int L, int R){
  int temp;
  if (L ==R);
  else{
  for (i=L; i<R ; i++){
     if (arrays[i]>ararys[i+1]){
     temp = arrays[i];
     arrays[i] = ararys[i+1];
     arrays[i+1] = temp;
   }
  }
  bubbleSort(arrays, L,R-1);
}
}
</pre>

# 选择排序
  * 找到数组中最大的数与数组的最后一个数进行位置的调换
  *代码实现 时 
  + 两个for循环 外层循环控制排序的趟数,内层循环找打当前趟数的最大值随后与当前趟数组最后一位元素进行排序

  <pre>
  	for(int i=0 ; i< array.length-1 ;i++){
  	//新的趟数 ,将指标赋值为0
  	pos = 0;
       for( int j=0; j<array.length -i;j++){
           if( arrays[j]> arrays[pos])
           {
           	pos =j;
           }
   }
    temp = arrays[pos];
    arrays[pos]  = arrays[ arrays.length -1-i];
    array[arrays.length-1-i] = temp;
  }

 </pre>

 # 插入排序
  * 将一个元素插入到有序的数组中,未初始化的时候并不知道是否为一个有序,因此把第一个元素看成是有序的
  * 与有序的数组进行比较的时候 比它大直接放入.,比它小则移动数组的位置
  +  代码实现
  + 一个for 循环内嵌一个while ,外层还是趟数,内层while是(找到合适的位置插入)
  <pre>
  	 int temp;
  	 // 外层还是排序的趟数
  	 for ( int i=1; i<arrays.length;i++){
  	 temp = arrays[i];
  	 while( i>=1 && arrays[i-1] > temp){
  	  // 往后退一个位置,让当前的数据与之前前位进行比较
  	  arrays[i] = arrays[i-1];
  	  // 不断往前,知道退出循环
  	   i--;
  	}
  	 arrays[i] = temp;

  	}

  </pre>


  # 快速排序
  *  在数组中找到一个节点,小的放在节点左边,大的放在节点的右边 然后不断执行这个操作 (递归实现)
  * 补充 递归 就是调用自己函数
  + 求和  （可以用for循环 -->都可以递归实现）
  <pre>
    for (int i=1;i<100 ;i++)
    {
      int sum =0;
      sum+=i;
    }
  </pre>
  递归实现 （递归边界，递归表达式）
  求和的递归表达式是  X = sum (n-1) +n;
  <pre>
    int sum(int n){
    if(n==1){return 1;}
    else{   return sum(n-1);}
  }
  </pre>
+ 求数组中的最大值
普通实现（循环实现）
<pre>
  int[] arrays ={ 1,2,3,4,5,};
  int max = arrays[0];
  for ( int i =0; i< arrays.length; i++)
    if(arrays[i]> max){
    max = arrays[i];
  }

</pre>
递归实现 递归函数
/**
*@ 递归找出最大值
*@ arrays 数组
*@ param L 左边界,第一个数
*@ param R 右边界 ，数组的长度
**/
<pre>
  public static int findMax( int[] arrays, int L,int R){
//如果数组只有一个数，那么最大值就是该数
  if( L ==R){  return arrays[L];}
  else{
  int  a = arrays[L];
  int b = findMax( arrays,L+1,R);
  //找出最大值
  if(a>b)
  return a ;
  else   return b;
}
}
</pre>
*快速排序的基本实现思路
1，支点去中间，使用 L 和  R 表示数组的最小位置和最大位置
2，不断的进行比较，知道找到比支点小的数
3递归 L 到支点前一个元素，递归支点后一个元素
 public void quickSort (int[] arr, int L ,int R){
 int i =L;
 int j =R;
  //支点
  int pivot = arr[(L+R)/2];
  // 左右两端进行扫描，只要两端没有交替就继续扫描
  while(i<=j){
   while(pivot > arr[i])
     i++;
     while(pivot<arr[j]
     j--;
   //此时已经找出比支点小的数（右边），和比支点大的数（左边），然后交换位置
   if(i<=j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    i++;
    j--;
 }
 }
 // 左边在做排序，直到左边剩下一个数（递归出口)
 if(l<j)
 quickSort (arr,L,j);
 if(i<R)
 quickSort(arr,i,R);
}