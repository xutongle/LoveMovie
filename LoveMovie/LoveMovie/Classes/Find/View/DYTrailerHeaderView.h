//
//  DYTrailerHeaderView.h
//  LoveMovie
//
//  Created by xudingyang on 16/5/19.
//  Copyright © 2016年 许定阳. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DYTrailer;

@interface DYTrailerHeaderView : UIView
/** DYTrailer模型 */
@property (strong, nonatomic) DYTrailer *trailer;

+ (instancetype)trailerHeaderView;

@end
