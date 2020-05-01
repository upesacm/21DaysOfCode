import re
str=input('Enter the string')
rhy=re.search('.ake',str)
print(rhy)


#OUTPUT:Enter the stringI make breads that we can bake <re.Match object; span=(2, 6), match='make'>
