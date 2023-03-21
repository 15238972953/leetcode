# leetcode
记录自己刷leetcode1的过程
## 1.递归问题注意
递归中注意for循环的初始条件只执行一次;如：
```C++
//216
    void backtracking(int k,int n,int startIndex){
        if(path.size()==k){
            if(n==sum){
                result.push_back(path);
            }
            return;
        }
        for(int i=startIndex;i<=9;i++){
            path.push_back(i);
            sum+=i;
            backtracking(k,n,i+1);
            sum-=i;
            path.pop_back();
        }
    }
```
代码中int i=startIndex其实只执行了一次，不能认为在不同的递归中i会被多次初始化，这是错误的；