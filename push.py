count=0 #Display for the counter

def pushed():
    global count
    count+=1
    print('pushed')
    return 
    
def reset():
    global count 
    count=0
    print('reset')

def exit():
    print('program ended')
    quit()

def display():
    global count
    print('The value of counter has become==',count)
    

while True:
    pushbtn=input('Do you want to press the Button(y/n),Display(d) or reset(r) the counter=')  #button
    
    if pushbtn=='y' :
        pushed()
    elif pushbtn=='r':
        reset()
    elif pushbtn=='d':
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
