// UIView+Frame.h

#import <Foundation/Foundation.h>

@interface UIView (FrameExt)

@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGSize size;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic, readonly) CGFloat top;
@property (nonatomic, readonly) CGFloat bottom;
@property (nonatomic, readonly) CGFloat left;
@property (nonatomic, readonly) CGFloat right;

@end
