# A Dictionay is a collection which is unordered ,changeable,and indexed. No duplicate members

dict11={
    "name":"Prabesh Bista",
    "age":19,
    'Colelge':"Tits University",
}

print(dict11,type(dict11))

#use constructor
person2=dict(first_name="Oneplus",last_name="Williams")

#Get a Value
print(dict11["name"])
print(dict11.get("age"))