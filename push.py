count=0 #Display for the counter

def pushed():
    global count
    count+=1
    
def reset():
    global count 
    count=0

def exit():
    print('program ended')
    quit()

def display():
    global count
    print('The value of counter has become==',count)
    

pushbtn=input(print('Do you want to press the Button(y/n),Display(d) or reset(r) the counter='))  #button

print('this is the pushbtn=',pushbtn)

while True:
    if pushbtn=='y' or 'Y':
        pushed()
    elif pushbtn=='r'or 'R':
        reset()
    elif pushbtn=='d'or 'D':
        display()
    else:
        exit()
    

# pushed()
# pushed()
# pushed()
# display()
# reset()
# pushed()
# display()
# exit()
