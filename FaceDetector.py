import numpy as np
import array as arr 
import cv2

trained_face_data=cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
img=cv2.imread('modiji.jpg')

#tranform color to grayscale
grayscaled_img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

# Detect faces
face_coordinates=trained_face_data.detectMultiScale(grayscaled_img)

(x,y,w,h)=face_coordinates[0]

cv2.rectangle(img, (x,y) , (x+w,y+h),  (0,255,255) , 3)

cv2.imshow('Greyscaled detector',img)
cv2.waitKey()

print('wow it works')