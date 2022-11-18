def linearSearch(arr,target):
    for i in range(len(arr)):
        if(arr[i]==target):
            return i
    return -1


if __name__=="__main__":
    arr=[10,20,30,1,5,99,50]
    target=int(input("Enter a number you want to search:"))
    result=linearSearch(arr,target)
    if(result != -1):
        print(f"The element is found at position {result}")
    else:
        print("The requested value is not in the array")