l = [1,3,4,6,7,9]

def binary_search(start, end, l, x = int(input('enter element to search: '))):
    if end > start:
        mid = start + (end - start)//2
        print(mid, l[mid])
        if l[mid] == x:
            return mid
        elif l[mid] < x:
            return binary_search(start=mid+1, end=end, l=l, x=x)
        elif l[mid] > x:
            return binary_search(start=start, end=mid-1, l=l, x=x)
    else:
        return -1

print(binary_search(0, len(l)-1, l))