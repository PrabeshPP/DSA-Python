import math

def retMod(number,pow,divisor):
  total=math.pow(number,pow)
  return total% divisor

if __name__=="__main__":
  for i in range(0,8):
    number=int(input("Enter a number : "))
    pow=int(input("Enter the power of the number: "))
    divisor=int(input("Enter the number that divides the given number: "))
    result=retMod(number,pow,divisor)
    print(result)

