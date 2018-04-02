## 问题描述
INPUT FORMAT

货币系统中货币的种类数目是 V 。 (1<= V<=25)
要构造的数量钱是 N 。 (1<= N<=10,000)

第 1 行:   二整数， V 和 N 
第 2 ..V+1行： 可用的货币 V 个整数　(每行一个　每行没有其它的数)。 

SAMPLE INPUT (file money.in) 
3 10
1 2 5
OUTPUT FORMAT
单独的一行包含那个可能的构造的方案数。
SAMPLE OUTPUT (file money.out)
10

需要注意的是 本问题相当于完全背包问题
 主要需要记忆的是01背包 和完全背包  两者的区别是  
 01背包是每个物品只有一个，完全背吧一个物品可以多次选取，再者的一个问题就是是否恰好装满，恰好装满的话二次循环是从小到大，反之，第二个是恰好装满的初始化 f[0]=0,其他的去的是不可能 负无穷 若是小于等于 的话全部初识化等于0
 
 ## 具体的代码
 #include<stdio.h> 
 #include<stdlib.h>
 # include<string.h>
 # include<assert.h>
  # define MAXTOTAL 10000
  long long nway[MAXTOTAL+1]

    void main(void){
         FILE *fin ,*fout;
         int i,j, v,c;
         fin= fopen("money.in",r);
         fout = fopen("money.out",w);
         assert(fin! = NULL && fout! = NULL);
         fscanf (fin,"%d %d" ,&v,&n);

         nway[0] =1;
         for( i=0;i<v;i++){
             fscanf(fin,"%d",&c);
             for( j=c; j<=n;j++)
             nway[j] += nway[j-c];

             fprintf(fout,"%11d",nway[n]);


         }



    }

