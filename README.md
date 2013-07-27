UIViewFrame
===========

一个UIView的frame扩展
-----------

举例：通常设置一个UIView子类frame相关属性时通常会这样做：
  比如设置UILabel的原点x坐标
  CGRect frame = self.label.frame;
  frame.origin.x = 10;
  self.label.frame = frame;
  
现在只需要这样做：
 [self.label setX:10];
