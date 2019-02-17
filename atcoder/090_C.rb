a,b=gets.split.map &:to_i;puts a>=3&&b>=3?(a-2)*(b-2):a==2||b==2?0:a==1&&b==1?1:[a,b].max-2
