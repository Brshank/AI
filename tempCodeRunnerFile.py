
cv2.rectangle(img,(x,y),((x+w),(y+h)),(0,0,255),2)

cv2.imshow('Greyscaled detector',grayscaled_img)
cv2.waitKey()

print('wow it works')