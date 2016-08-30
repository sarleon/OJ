def maskify(cc):
    if len(cc)<=4:
        return cc
    else:
        mask_num=len(cc)-4
        res=""
        print mask_num
        for i in range(mask_num):
            res=res+"*"
        res=res+(cc[len(cc)-5:len(cc)-1])
        return res

