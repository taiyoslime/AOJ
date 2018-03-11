n,k=gets.split.map &:to_i;puts k==0?n*n:(c=0;k.upto(n){|i|c+=n/i*(i-k);a=n%i+1-k;c+=a if a>0};c)
