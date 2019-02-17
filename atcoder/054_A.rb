a,b=gets.split.map &:to_i;puts a==b ?:Draw:(a!=1&&a<b||b==1?:Bob: :Alice)
