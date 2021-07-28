count=0 #Display for the counter

def pushed():
    global count
    count+=1
    print('pushed the button {} times!'.format(count))
    return 
    
def reset():
    global count 
    count=0
    print('Sucessfully resetted & the counter value to zero')

def exit():
    print('program ended')
    quit()

def display():
    global count
    print('The value of counter has become==',count)
    
  
#pushing the btn 3 times
pushed()
pushed()
pushed()
#displaying it
display()
#resetting the value of button pushed to null(0)
reset()
#pushing one time and displaying
pushed()
display()
#exiting the program 
exit()