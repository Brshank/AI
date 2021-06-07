import cv2
trained_facedata=cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
img=cv2.imread('modiji.jpg')
cv2.imshow('Brshank',img)
cv2.waitKey()
print('wow it works')