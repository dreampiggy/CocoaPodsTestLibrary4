//
//  UIColor+HexString.h
//  TestLibrary4
//
//  Created by lizhuoli on 2019/9/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (HexString)

- (instancetype)tf_colorWithString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
