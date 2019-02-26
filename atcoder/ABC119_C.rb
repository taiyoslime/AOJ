$N,$A,$B,$C = gets.split.map &:to_i
$l = []
$N.times{
    $l << gets.to_i
}
def dfs n,a,b,c,com
    if n == $N
        if [a,b,c].min != 0
            return  (a-$A).abs + (b-$B).abs + (c-$C).abs + com
        else
            return 10 ** 10
        end
    end
    return [dfs(n+1,a+$l[n],b,c, (a == 0 ? com :  com+10) ) ,dfs(n+1,a,b+$l[n],c,(b == 0 ? com :  com+10)) , dfs(n+1,a,b,c+$l[n],(c == 0 ? com :  com+10)),dfs(n+1,a,b,c,com)].min
end
p dfs(0,0,0,0,0)
