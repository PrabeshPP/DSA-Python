# A list is  a collection which is ordered and changeable. Allow duplicate members

#Create a List

numbers=[1,2,3,4,5]

#using a constructor
numbers2=list((1,2,3,4,5))

print(numbers)
print(numbers2)


fruits=["apple","mango","orange","Grapes","Pears"]

#get a value
print(fruits[1])

#length of the array
print(len(fruits))

#append  to list

fruits.append("Prabesh")

#Remove from list

fruits.remove('Grapes')

#insert into position

fruits.insert(2,"strawberries")

#Remove with POP

fruits.pop(2)

#Reverse List
fruits.revers()


#Sort List
fruits.sort()