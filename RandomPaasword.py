


import string 
import sys

from random import*


characters = string.ascii_letters + string.digits
password = "".join(choice(characters) for x in  range(randint(3,5)))

print password

# python based random password generator  
# randomised password 




