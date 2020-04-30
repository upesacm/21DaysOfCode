#Write a python program to removove the consecutive duplicate letters from a string
import itertools
def remove_sameLet(s1):
     return (''.join(i for i, _ in itertools.groupby(s1)))

s1= "committee"
print("Actual String: ",s1)
print("Removal of duplicates:")
print(remove_sameLet(s1))
