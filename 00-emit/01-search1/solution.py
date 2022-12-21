s = [int(i) for i in input().split()]
target = int(input())
print(("I found {} in arr." if target in s else "Can't find {} in arr.").format(target))

