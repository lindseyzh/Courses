#method 1:using a growing algorithm
#>>will be only one queen on a same line,
#using 8 numbers from 0 to 63 to discrible a distribution
tree=[[[0],[1],[2],[3],[4],[5],[6],[7]],[],[],[],[],[],[],[]]
#a result includes several nums,representing a distribution,such as [0,8,16,24,32]
# all results become a set
#all sets form a tree
#for set number 0,we have results:[0],[1],...,[7]
def test(x,y):#to test if two queens can coexist
    if x//8==y//8:
        return False
    if (x-8*(x//8))==(y-8*(y//8)):
        return False
    if (y//8-x//8)==abs((y-8*(y//8))-(x-8*(x//8))):
        return False
    else:
        return True
#print(test(0,15))
def growing(tree,i):#l be tree ,i be role numbers
    #l[i-1] be a list a set
    for result in tree[i-1]:#each represent a distribution,alse a list
        for pos in range(i*8,i*8+8):
            coexist = True
            for prepos in result:#for every exiting queens
                if not test(prepos,pos):
                    coexist=False
                    break
            if coexist:
                newres=result+[pos]#a possible distribution for i-queen
                tree[i].append(newres)

def outing(x):#(x be results),such as [0,8,16,24,32,40,48,56]
    for position in x:
        print('0 ' * (position - 8 * (position // 8)), '1 ',
              '0 ' * (7 - (position - 8 * (position // 8))),sep='')

for i in range(1,8):
    growing(tree,i)
#so tree[7] records all possible placing
#try to output in prescribed format
count=0
for results in tree[7]:
    count+=1
    print('No.',count)
    outing(results)