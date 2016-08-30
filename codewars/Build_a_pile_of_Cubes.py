def find_nb(m):
        # your code
        i=1
        sum=0
        while True:
            sum=sum+pow(i,3)
            i=i+1
            if(m==sum):
                return i-1
            if(sum>m):
                return -1
