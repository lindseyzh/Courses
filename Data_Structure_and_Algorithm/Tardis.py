import base64
import random

seed=4311251

def decrypt_00(de_str): 
    random.seed(seed)
    newstr=''
    for i in range(len(de_str)):
        newstr += chr(ord(de_str[i]) - random.randint(0,10))
    return newstr

def decrypt_01(newstr):
    newstr = newstr[-1] + newstr[1:len(newstr) - 1] + newstr[0]
    newstr = base64.b64decode(newstr)
    return newstr

if __name__ == '__main__':
    key=input("Please input the key to get the root password: \n")
    devrypt=decrypt_01(decrypt_00(key))
    print(devrypt.decode('utf-8'))