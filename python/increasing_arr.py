def increasing_arr(length, arr):

    res = 0

    for ind in range(1, length):
        #print(ind,res,n,arr[ind - 1])
        if arr[ind] < arr[ind - 1]:
            res = res + (arr[ind - 1]-arr[ind])
            arr[ind] = arr[ind-1]

    return res

if __name__ == '__main__':
    lgt = int(raw_input())
    array = map(int, raw_input().split())
    
    print(increasing_arr(lgt,array))
    
